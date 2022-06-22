#include "api.h"
#include "hal.h"
#include "sendfn.h"

#include <stdint.h>
#include <string.h>

#include "owcpa.h"
#include "poly.h"

// https://stackoverflow.com/a/1489985/1711232
#define PASTER(x, y) x##y
#define EVALUATOR(x, y) PASTER(x, y)
#define NAMESPACE(fun) EVALUATOR(MUPQ_NAMESPACE, fun)

// use different names so we can have empty namespaces
#define MUPQ_CRYPTO_BYTES           NAMESPACE(CRYPTO_BYTES)
#define MUPQ_CRYPTO_PUBLICKEYBYTES  NAMESPACE(CRYPTO_PUBLICKEYBYTES)
#define MUPQ_CRYPTO_SECRETKEYBYTES  NAMESPACE(CRYPTO_SECRETKEYBYTES)
#define MUPQ_CRYPTO_CIPHERTEXTBYTES NAMESPACE(CRYPTO_CIPHERTEXTBYTES)
#define MUPQ_CRYPTO_ALGNAME NAMESPACE(CRYPTO_ALGNAME)

#define MUPQ_crypto_kem_keypair NAMESPACE(crypto_kem_keypair)
#define MUPQ_crypto_kem_enc NAMESPACE(crypto_kem_enc)
#define MUPQ_crypto_kem_dec NAMESPACE(crypto_kem_dec)

#define printcycles(S, U) send_unsignedll((S), (U))

int main(void)
{
  unsigned char key_a[MUPQ_CRYPTO_BYTES], key_b[MUPQ_CRYPTO_BYTES];
  unsigned char sk[MUPQ_CRYPTO_SECRETKEYBYTES];
  unsigned char pk[MUPQ_CRYPTO_PUBLICKEYBYTES];
  unsigned char ct[MUPQ_CRYPTO_CIPHERTEXTBYTES];
  unsigned long long t0, t1;
  int i;

  hal_setup(CLOCK_BENCHMARK);

  hal_send_str("==========================");

  for(i=0;i<MUPQ_ITERATIONS; i++)
  {
    // Key-pair generation
    t0 = hal_get_time();
    MUPQ_crypto_kem_keypair(pk, sk);
    t1 = hal_get_time();
    printcycles("keypair cycles:", t1-t0);

    // Encapsulation
    t0 = hal_get_time();
    MUPQ_crypto_kem_enc(ct, key_a, pk);
    t1 = hal_get_time();
    printcycles("encaps cycles:", t1-t0);

    // Decapsulation
    t0 = hal_get_time();
    MUPQ_crypto_kem_dec(key_b, ct, sk);
    t1 = hal_get_time();
    printcycles("decaps cycles:", t1-t0);

    if (memcmp(key_a, key_b, MUPQ_CRYPTO_BYTES)) {
      hal_send_str("ERROR KEYS\n");
    }
    else {
      hal_send_str("OK KEYS\n");
    }
	unsigned char seed[NTRU_SEEDBYTES];
    randombytes(seed, sizeof seed);

    t0 = hal_get_time();
    owcpa_keypair(pk, sk, seed);
    t1 = hal_get_time();
    printcycles("cpa keypair cycles:", t1-t0);

    uint8_t rm1[NTRU_OWCPA_MSGBYTES];
    uint8_t rm_seed[NTRU_SAMPLE_RM_BYTES];

    randombytes(rm_seed, NTRU_SAMPLE_RM_BYTES);
    owcpa_samplemsg(rm1, rm_seed);

    t0 = hal_get_time();
    owcpa_enc(ct, rm1, pk);
    t1 = hal_get_time();
    printcycles("cpa enc cycles:", t1-t0);

    uint8_t rm2[NTRU_OWCPA_MSGBYTES];
    t0 = hal_get_time();
    owcpa_dec(rm2, ct, sk);
    t1 = hal_get_time();
    printcycles("cpa dec cycles:", t1-t0);

    if(memcmp(rm1, rm2, sizeof rm1)) {
      hal_send_str("ERROR KEYS\n");
    }
    else {
      hal_send_str("OK KEYS\n");
    }
    
	poly r, a, b;
	randombytes((unsigned char *)&a, sizeof(poly));
    randombytes((unsigned char *)&b, sizeof(poly));
    #ifdef TMVP
    t0 = hal_get_time();
    poly_Rq_mul (&r, &a, &b);
    t1 = hal_get_time();
    printcycles("tmvp polymul cycles:", t1-t0);
	#elif defined NTT
	t0 = hal_get_time();
    poly_SignedZ3_Rq_mul (&r, &a, &b);
    t1 = hal_get_time();
    printcycles("ntt polymul cycles:", t1-t0);	
	#elif defined TOOM        
    t0 = hal_get_time();
    poly_Rq_mul(&r, &a, &b);
    t1 = hal_get_time();
    printcycles("toom polymul cycles:", t1-t0);
    #endif
    hal_send_str("+");
  }

  hal_send_str("#");

  return 0;
}
