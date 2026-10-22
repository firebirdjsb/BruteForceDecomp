/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FEB472051CE7CFC9F01D793A8872D9F606BEE1FDF5D525BB0FDC3B3441D89FD1
 * Entry: 0x002b9f30, Ghidra index: 9876, label: FUN_002b9f30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002b9f30(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *in_ECX;
  int in_EDX;
  
  fVar1 = *in_ECX - *(float *)(in_EDX + 4);
  fVar3 = in_ECX[1] - *(float *)(in_EDX + 8);
  fVar2 = in_ECX[2] - *(float *)(in_EDX + 0xc);
  if (fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2 != 0.0) {
    *(float *)(in_EDX + 4) = *in_ECX;
    *(float *)(in_EDX + 8) = in_ECX[1];
    *(float *)(in_EDX + 0xc) = in_ECX[2];
    *(float *)(in_EDX + 0x10) = in_ECX[3];
    FUN_002bdd50(*(undefined4 *)(*(int *)(in_EDX + 0x54) + 0x98));
  }
  return;
}
