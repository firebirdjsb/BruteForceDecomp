/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FA2E8BB3A4B99717889B50D6CF1003A904BDCEEA136CF49A677B303AFF51EA4C
 * Entry: 0x0031670a, Ghidra index: 12147, label: FUN_0031670a
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0031670a(uint param_1)

{
  int in_ECX;
  
  if (*(short *)(*(int *)(in_ECX + 0x78) + 0xc) == 0x69) {
    param_1 = param_1 >> 6;
  }
  return *(int *)(*(int *)(in_ECX + 0x78) + 0x14) * param_1;
}
