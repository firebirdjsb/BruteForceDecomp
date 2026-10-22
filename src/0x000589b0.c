/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CBE6F76183F705F4ABC3875523FE1A9F7156EBD3AD1B620F966D06E722CC38AD
 * Entry: 0x000589b0, Ghidra index: 875, label: FUN_000589b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000589b0(void)

{
  float fVar1;
  int *in_ECX;
  
  if (((((*(byte *)(in_ECX + 0xc) & 1) == 0) || ((*(byte *)(in_ECX + 0xc) >> 1 & 1) == 0)) ||
      (*in_ECX == in_ECX[1])) || (in_ECX[1] < 2)) {
    return;
  }
  fVar1 = (float)in_ECX[8];
  *in_ECX = 2;
  if (0.0 < (float)in_ECX[9]) {
    fVar1 = (float)in_ECX[9];
  }
  if (1.1920929e-07 < fVar1) {
    in_ECX[0xd] = (int)fVar1;
    in_ECX[0xb] = (int)fVar1;
    *(byte *)(in_ECX + 0xc) = *(byte *)(in_ECX + 0xc) & 0xf9 | 1;
    return;
  }
  return;
}
