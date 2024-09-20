# Technical Specification

## About

This documentation describes the smart contracts and functions supported by the kiln plugin.

## Smart Contracts

Smart contracts covered by the plugin:

| Network | Version | Smart Contract                        | Address                                      |
| ------- | ------- | ------------------------------------- | -------------------------------------------- |
| Mainnet | v2.2    | OCV2-N20 - CoinbaseStaking On-Chain v2 Native20 | `0x2e3956e1ee8b44ab826556770f69e3b9ca04a2a7` |
| Mainnet | v2.2    | OCV2-EQ - CoinbaseStaking On-Chain v2 ExitQueue | `0x86358f7b33b599c484e0335b8ee4f7f7f92d8b60` |


## Functions

For the smart contracts implemented, the functions covered by the plugin are:

| Contract | Function                  | Selector     | Displayed Parameters                                                                                                                                                                                   |
| -------- | ------------------------- | ------------ | ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------ |
| OCV2-N20 | stake                     | `0x3a4b66f1` | <table><tbody> <tr><td><code>uint tx.value</code></td></tr> </tbody></table>                                                                                                                           |
| OCV2-N20 | requestExit               | `0x721c6513` | <table><tbody> <tr><td>n/r</td></tr> </tbody></table>                                                                                                                                                  |
| OCV2-N20 | multiClaim                | `0xb7ba18c7` | <table><tbody> <tr><td>n/r</td></tr> </tbody></table>                                                                                                                                                  |
| OCV2-EQ  | claim                     | `0xadcf1163` | <table><tbody> <tr><td>n/r</td></tr> </tbody></table>                                                                                                                                                  |
