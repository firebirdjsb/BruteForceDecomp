/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4E917BDFF5BA310CE28A3AF898814E571E82DE72680528E80CDB0807C0C36493
 * Entry: 0x00078f90, Ghidra index: 1439, label: FUN_00078f90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern int FUN_000782c0(int param_1);

void FUN_00078f90(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int unaff_EDI;
  
  iVar2 = FUN_000782c0(2);
  if (iVar2 == 0) {
LAB_00078fca:
    uVar3 = 0;
  }
  else {
    iVar1 = *(int *)(iVar2 + 0xc);
    if (iVar1 == 1) {
      uVar3 = (uint)*(float *)(iVar2 + 4);
    }
    else if (iVar1 == 2) {
      uVar3 = *(uint *)(iVar2 + 4);
    }
    else {
      if (iVar1 != 3) goto LAB_00078fca;
      uVar3 = (uint)*(byte *)(iVar2 + 4);
    }
  }
  *(uint *)(unaff_EDI + 0x48) = uVar3;
  iVar2 = FUN_000782c0(2);
  if (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 0xc);
    if (iVar1 == 1) {
      uVar3 = (uint)*(float *)(iVar2 + 4);
      goto LAB_00079009;
    }
    if (iVar1 == 2) {
      uVar3 = *(uint *)(iVar2 + 4);
      goto LAB_00079009;
    }
    if (iVar1 == 3) {
      uVar3 = (uint)*(byte *)(iVar2 + 4);
      goto LAB_00079009;
    }
  }
  uVar3 = 0;
LAB_00079009:
  *(uint *)(unaff_EDI + 0x4c) = uVar3;
  iVar2 = FUN_000782c0(2);
  if (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 0xc);
    if (iVar1 == 1) {
      *(int *)(unaff_EDI + 0x50) = (int)*(float *)(iVar2 + 4);
      return;
    }
    if (iVar1 == 2) {
      *(undefined4 *)(unaff_EDI + 0x50) = *(undefined4 *)(iVar2 + 4);
      return;
    }
    if (iVar1 == 3) {
      *(uint *)(unaff_EDI + 0x50) = (uint)*(byte *)(iVar2 + 4);
      return;
    }
  }
  *(undefined4 *)(unaff_EDI + 0x50) = 0;
  return;
}
