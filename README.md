# NTRU-tmvp4-m4

This code accompanies the paper "Faster NTRU on ARM Cortex-M4 with TMVP-based multiplication".

This repository contains our TMVP-based implementations for ntruhps2048509, ntruhps2048677, ntruhps4096821 and ntruhrss701 for Cortex-M4.

Please clone this repository recursively to include [libopencm3](http://libopencm3.org/).

```
    git clone --recursive https://github.com/NTRU-tmvp4-m4/NTRU-tmvp4-m4

```
Most parts of the codes in this repository are taken from [PQM4](https://github.com/mupq/pqm4.git). Please check the README.md file in [PQM4](https://github.com/mupq/pqm4.git) for details.

To run all benchmarks for all parameter sets run `benchmarks.py`.

To test the schemes run `test.py`.




