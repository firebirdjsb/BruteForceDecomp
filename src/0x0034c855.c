/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9D2CCF14CB43AE572EA2F73D63F3A6CECD8748BA0D7A3872BFF4D07E8FEEFEDB
 * Entry: 0x0034c855, Ghidra index: 12972, label: FUN_0034c855
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0034c855(void)

{
  int *in_ECX;
  
  return ((uint)in_ECX[2] >> 0x12 & 0x3c) + 0x14 + *in_ECX;
}
