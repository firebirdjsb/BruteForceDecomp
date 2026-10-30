/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FC64724F0585C1F9D187B7B6963FB8E855F81895CFD8F40A5C37DF6F38385A0B
 * Entry: 0x00317a6a, Ghidra index: 12184, label: FUN_00317a6a
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00317a6a(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x78);
  if ((*(uint *)(iVar1 + 8) & 0x182000) == 0) {
    iVar3 = *(int *)(iVar1 + 0x18);
    if (((*(uint *)(iVar1 + 8) & 0x10) != 0) && (*(int *)(*(int *)(iVar1 + 0xb4) + 0x3c) != 2)) {
      iVar3 = iVar3 + *(int *)(*(int *)(in_ECX + 0x70) + 0x38);
    }
    if ((*(int *)(iVar1 + 0xb0) != 0) &&
       (iVar1 = *(int *)(*(int *)(iVar1 + 0xb0) + 0x20), iVar1 != 0)) {
      iVar2 = *(int *)(iVar1 + 0x88);
      iVar3 = iVar3 + *(int *)(iVar2 + 0x18);
      if (((*(byte *)(iVar2 + 8) & 0x10) != 0) && (*(int *)(*(int *)(iVar2 + 0xb4) + 0x3c) != 2)) {
        iVar3 = iVar3 + *(int *)(*(int *)(iVar1 + 0x70) + 0x38);
      }
    }
    iVar1 = -0x7fff;
    if ((iVar3 < -0x7fff) || (iVar1 = 0x1fff, 0x1fff < iVar3)) {
      iVar3 = iVar1;
    }
  }
  else {
    iVar3 = 0;
  }
  *param_1 = iVar3 << 0x10;
  return;
}
