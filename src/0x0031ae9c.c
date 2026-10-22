/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9FE4AD426C51AE6E3EAAD9A3399CF3B45592379153180F60E066556FD42DE9F1
 * Entry: 0x0031ae9c, Ghidra index: 12281, label: FUN_0031ae9c
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0031ae9c(int param_1,int param_2)

{
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + *(int *)(param_2 + 8);
  FUN_003118c0(param_2);
  return param_1;
}
