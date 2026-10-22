/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AEE6D81493A2B1118E1EA6983BAFFCF159F8297974A88DCCEC0A71C588B4E05D
 * Entry: 0x0037fc9e, Ghidra index: 13511, label: FUN_0037fc9e
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0037fc9e(uint *param_1,byte param_2,char param_3)

{
  uint uVar1;
  
  uVar1 = 1 << (param_2 & 0x1f);
  param_1[1] = param_1[1] | uVar1;
  if (param_3 == '\0') {
    *param_1 = *param_1 & ~uVar1;
  }
  else {
    *param_1 = *param_1 | uVar1;
  }
  return;
}
