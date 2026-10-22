/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FD946C7A7645D16843A449401C1CC1E1BEB072258E72548C5A114C6136D61283
 * Entry: 0x002b5c20, Ghidra index: 9810, label: FUN_002b5c20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002b5c20(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *unaff_ESI;
  uint uVar5;
  
  FUN_002b5fd0();
  if (unaff_ESI[0xc] != 0) {
    iVar4 = *(int *)(param_1 + 0x28);
    if (iVar4 == *unaff_ESI) {
      iVar4 = *(int *)(param_1 + 0x44);
    }
    uVar1 = FUN_002b2b80();
    iVar2 = FUN_002bee90(iVar4,uVar1);
    if (iVar2 < 2) {
      uVar1 = FUN_002b2b80();
      FUN_002beda0(unaff_ESI[0xd],uVar1);
      FUN_002b6050();
    }
    else {
      FUN_002beef0(iVar4,iVar2 + -1);
    }
  }
  if (unaff_ESI[0xf] != 0) {
    iVar4 = *(int *)(param_1 + 0x28);
    if (iVar4 == *unaff_ESI) {
      iVar4 = *(int *)(param_1 + 0x44);
    }
    uVar1 = *(undefined4 *)(iVar4 + 0x90);
    uVar3 = FUN_002b2b80();
    iVar4 = FUN_002bee90(uVar1,uVar3);
    if (iVar4 < 2) {
      uVar1 = FUN_002b2b80();
      FUN_002beda0(unaff_ESI[0xe],uVar1);
      FUN_002b60c0();
    }
    else {
      FUN_002beef0(uVar1,iVar4 + -1);
    }
  }
  uVar5 = (uint)*(ushort *)((int)unaff_ESI + 10);
  while (uVar5 = uVar5 - 1, -1 < (int)uVar5) {
    (**(code **)(**(int **)(unaff_ESI[3] + uVar5 * 4) + 4))();
  }
  return;
}
