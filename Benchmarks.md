# Speed Evaluation
## Key Encapsulation Schemes
| scheme | implementation | key generation [cycles] | encapsulation [cycles] | decapsulation [cycles] |
| ------ | -------------- | ----------------------- | ---------------------- | ---------------------- |
| ntruhps2048509 (1 executions) | m4f | AVG: 2,869,539 <br /> MIN: 2,869,539 <br /> MAX: 2,869,539 | AVG: 566,365 <br /> MIN: 566,365 <br /> MAX: 566,365 | AVG: 539,060 <br /> MIN: 539,060 <br /> MAX: 539,060 |
| ntruhps2048509 (1 executions) | tmvp | AVG: 2,517,388 <br /> MIN: 2,517,388 <br /> MAX: 2,517,388 | AVG: 543,886 <br /> MIN: 543,886 <br /> MAX: 543,886 | AVG: 460,278 <br /> MIN: 460,278 <br /> MAX: 460,278 |
| ntruhps2048509 (1 executions) | toom | AVG: 2,886,996 <br /> MIN: 2,886,996 <br /> MAX: 2,886,996 | AVG: 572,210 <br /> MIN: 572,210 <br /> MAX: 572,210 | AVG: 544,746 <br /> MIN: 544,746 <br /> MAX: 544,746 |
| ntruhps2048677 (1 executions) | m4f | AVG: 4,591,636 <br /> MIN: 4,591,636 <br /> MAX: 4,591,636 | AVG: 812,297 <br /> MIN: 812,297 <br /> MAX: 812,297 | AVG: 806,460 <br /> MIN: 806,460 <br /> MAX: 806,460 |
| ntruhps2048677 (1 executions) | tmvp | AVG: 4,172,035 <br /> MIN: 4,172,035 <br /> MAX: 4,172,035 | AVG: 806,786 <br /> MIN: 806,786 <br /> MAX: 806,786 | AVG: 719,195 <br /> MIN: 719,195 <br /> MAX: 719,195 |
| ntruhps2048677 (1 executions) | tmvp_ | AVG: 4,199,914 <br /> MIN: 4,199,914 <br /> MAX: 4,199,914 | AVG: 808,981 <br /> MIN: 808,981 <br /> MAX: 808,981 | AVG: 725,762 <br /> MIN: 725,762 <br /> MAX: 725,762 |
| ntruhps2048677 (1 executions) | toom | AVG: 4,692,376 <br /> MIN: 4,692,376 <br /> MAX: 4,692,376 | AVG: 847,634 <br /> MIN: 847,634 <br /> MAX: 847,634 | AVG: 841,939 <br /> MIN: 841,939 <br /> MAX: 841,939 |
| ntruhps4096821 (1 executions) | m4f | AVG: 6,071,097 <br /> MIN: 6,071,097 <br /> MAX: 6,071,097 | AVG: 1,010,947 <br /> MIN: 1,010,947 <br /> MAX: 1,010,947 | AVG: 1,011,291 <br /> MIN: 1,011,291 <br /> MAX: 1,011,291 |
| ntruhps4096821 (1 executions) | tmvp | AVG: 5,633,579 <br /> MIN: 5,633,579 <br /> MAX: 5,633,579 | AVG: 1,019,512 <br /> MIN: 1,019,512 <br /> MAX: 1,019,512 | AVG: 916,879 <br /> MIN: 916,879 <br /> MAX: 916,879 |
| ntruhps4096821 (1 executions) | tmvp_ | AVG: 5,631,723 <br /> MIN: 5,631,723 <br /> MAX: 5,631,723 | AVG: 1,020,402 <br /> MIN: 1,020,402 <br /> MAX: 1,020,402 | AVG: 927,347 <br /> MIN: 927,347 <br /> MAX: 927,347 |
| ntruhps4096821 (1 executions) | toom | AVG: 6,239,440 <br /> MIN: 6,239,440 <br /> MAX: 6,239,440 | AVG: 1,066,590 <br /> MIN: 1,066,590 <br /> MAX: 1,066,590 | AVG: 1,066,825 <br /> MIN: 1,066,825 <br /> MAX: 1,066,825 |
| ntruhrss701 (1 executions) | m4f | AVG: 4,204,388 <br /> MIN: 4,204,388 <br /> MAX: 4,204,388 | AVG: 367,907 <br /> MIN: 367,907 <br /> MAX: 367,907 | AVG: 861,585 <br /> MIN: 861,585 <br /> MAX: 861,585 |
| ntruhrss701 (1 executions) | tmvp | AVG: 3,803,223 <br /> MIN: 3,803,223 <br /> MAX: 3,803,223 | AVG: 362,452 <br /> MIN: 362,452 <br /> MAX: 362,452 | AVG: 778,784 <br /> MIN: 778,784 <br /> MAX: 778,784 |
| ntruhrss701 (1 executions) | tmvp_ | AVG: 3,823,956 <br /> MIN: 3,823,956 <br /> MAX: 3,823,956 | AVG: 364,534 <br /> MIN: 364,534 <br /> MAX: 364,534 | AVG: 785,048 <br /> MIN: 785,048 <br /> MAX: 785,048 |
| ntruhrss701 (1 executions) | toom | AVG: 4,304,108 <br /> MIN: 4,304,108 <br /> MAX: 4,304,108 | AVG: 400,949 <br /> MIN: 400,949 <br /> MAX: 400,949 | AVG: 894,943 <br /> MIN: 894,943 <br /> MAX: 894,943 |
# Memory Evaluation
## Key Encapsulation Schemes
| Scheme | Implementation | Key Generation [bytes] | Encapsulation [bytes] | Decapsulation [bytes] |
| ------ | -------------- | ---------------------- | --------------------- | --------------------- |
| ntruhps2048509 | m4f | 21,344 | 14,060 | 14,800 |
| ntruhps2048509 | tmvp | 18,676 | 12,756 | 12,132 |
| ntruhps2048509 | toom | 21,344 | 15,424 | 14,800 |
| ntruhps2048677 | m4f | 28,460 | 19,976 | 19,732 |
| ntruhps2048677 | tmvp | 26,772 | 18,900 | 18,052 |
| ntruhps2048677 | tmvp_ | 26,132 | 18,260 | 17,412 |
| ntruhps2048677 | toom | 28,460 | 20,580 | 19,732 |
| ntruhps4096821 | m4f | 35,208 | 23,412 | 24,280 |
| ntruhps4096821 | tmvp | 32,272 | 22,224 | 21,360 |
| ntruhps4096821 | tmvp_ | 32,812 | 22,764 | 21,900 |
| ntruhps4096821 | toom | 35,208 | 25,144 | 24,280 |
| ntruhrss701 | m4f | 27,512 | 18,316 | 20,560 |
| ntruhrss701 | tmvp | 25,384 | 17,240 | 18,448 |
| ntruhrss701 | tmvp_ | 24,744 | 16,600 | 17,808 |
| ntruhrss701 | toom | 27,512 | 19,352 | 20,560 |
# Hashing Evaluation
## Key Encapsulation Schemes
| Scheme | Implementation | Key Generation [%] | Encapsulation [%] | Decapsulation [%] |
| ------ | -------------- | ------------------ | ----------------- | ----------------- |
| ntruhps2048509 | m4f | 0.0% | 4.5% | 18.8% |
| ntruhps2048509 | tmvp | 0.0% | 4.7% | 22.0% |
| ntruhps2048509 | toom | 0.0% | 4.5% | 18.6% |
| ntruhps2048677 | m4f | 0.0% | 4.6% | 17.2% |
| ntruhps2048677 | tmvp | 0.0% | 4.7% | 19.3% |
| ntruhps2048677 | tmvp_ | 0.0% | 4.6% | 19.1% |
| ntruhps2048677 | toom | 0.0% | 4.4% | 16.5% |
| ntruhps4096821 | m4f | 0.0% | 3.8% | 16.2% |
| ntruhps4096821 | tmvp | 0.0% | 3.7% | 17.6% |
| ntruhps4096821 | tmvp_ | 0.0% | 3.7% | 17.6% |
| ntruhps4096821 | toom | 0.0% | 3.6% | 15.3% |
| ntruhrss701 | m4f | 0.0% | 10.2% | 17.6% |
| ntruhrss701 | tmvp | 0.0% | 10.4% | 19.5% |
| ntruhrss701 | tmvp_ | 0.0% | 10.3% | 19.3% |
| ntruhrss701 | toom | 0.0% | 9.4% | 17.0% |
# Size Evaluation
## Key Encapsulation Schemes
| Scheme | Implementation | .text [bytes] | .data [bytes] | .bss [bytes] | Total [bytes] |
| ------ | -------------- | ------------- | ------------- | ------------ | ------------- |
| ntruhps2048509 | m4f | 191,912 | 0 | 0 | 191,912 |
| ntruhps2048509 | tmvp | 161,272 | 0 | 0 | 161,272 |
| ntruhps2048509 | toom | 181,128 | 0 | 0 | 181,128 |
| ntruhps2048677 | m4f | 281,692 | 0 | 0 | 281,692 |
| ntruhps2048677 | tmvp | 239,120 | 0 | 0 | 239,120 |
| ntruhps2048677 | tmvp_ | 242,672 | 0 | 0 | 242,672 |
| ntruhps2048677 | toom | 267,820 | 0 | 0 | 267,820 |
| ntruhps4096821 | m4f | 370,184 | 0 | 0 | 370,184 |
| ntruhps4096821 | tmvp | 315,784 | 0 | 0 | 315,784 |
| ntruhps4096821 | tmvp_ | 310,468 | 0 | 0 | 310,468 |
| ntruhps4096821 | toom | 346,504 | 0 | 0 | 346,504 |
| ntruhrss701 | m4f | 264,688 | 0 | 0 | 264,688 |
| ntruhrss701 | tmvp | 219,560 | 0 | 0 | 219,560 |
| ntruhrss701 | tmvp_ | 222,748 | 0 | 0 | 222,748 |
| ntruhrss701 | toom | 250,024 | 0 | 0 | 250,024 |
