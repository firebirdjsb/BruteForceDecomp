/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0D8F22867473BFEDA74DE91A2C58DD496201762BAB8C6991343579401AB2CF55
 * Entry: 0x00068cb0, Ghidra index: 1158, label: FUN_00068cb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00068cb0(void)

{
  int iVar1;
  int in_ECX;
  float10 fVar2;
  
  iVar1 = *(int *)(in_ECX + 0xe0) + 1;
  *(int *)(in_ECX + 0xe0) = iVar1;
  fVar2 = (float10)*(longlong *)(in_ECX + 0x70) / (float10)*(longlong *)(in_ECX + 0x78);
  if (((float10)*(double *)(in_ECX + 0xe8) + (float10)1.0 <= fVar2) && (iVar1 != 0)) {
    *(undefined4 *)(in_ECX + 0xe0) = 0;
    *(float *)(in_ECX + 0xbc) =
         (float)((float10)iVar1 / (fVar2 - (float10)*(double *)(in_ECX + 0xe8)));
    *(double *)(in_ECX + 0xe8) = (double)fVar2;
    return;
  }
  return;
}
