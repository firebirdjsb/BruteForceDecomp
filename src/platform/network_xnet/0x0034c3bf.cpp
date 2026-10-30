/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 93FEB8D21AB4712D1D045EF8C152A153AEF9CCD11B377ACA4C8AA4E4E7E634FD
 * Entry: 0x0034c3bf, Ghidra index: 12957, label: FUN_0034c3bf
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_0034c3bf(int param_1,int param_2)

{
  int in_ECX;
  uint uVar1;
  
  uVar1 = *(int *)(in_ECX + 0x1d8) + param_2;
  if (uVar1 < *(uint *)(param_1 + 8)) {
    FUN_0034c35a(param_1,uVar1);
  }
  return uVar1;
}
