/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3E5F6C84B556DFF1573BA06AC27ACEC910D0D7A328BA384F569EE418DE6F49DD
 * Entry: 0x000a4110, Ghidra index: 1954, label: FUN_000a4110
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern uint32_t FUN_002ea01d(uint32_t guest_size);
extern void FUN_000a3b80(void);
extern int FUN_000a7770(uint *param_1);

void FUN_000a4110(void)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 4) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(unaff_ESI + 4));
  }
  if (*(int *)(unaff_ESI + 4) == 0) {
    iVar5 = FUN_002ea01d(0x80);
    if (iVar5 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = FUN_000a3b80();
    }
    *(undefined4 *)(unaff_ESI + 4) = uVar6;
  }
  if (*(int *)(unaff_ESI + 8) != 0) {
    *(undefined4 *)(*(int *)(unaff_ESI + 8) + 0xc) = *(undefined4 *)(*(int *)(unaff_ESI + 4) + 4);
    (**(code **)(**(int **)(unaff_ESI + 8) + 0x14))(*(int **)(unaff_ESI + 8));
  }
  if (*(int *)(unaff_ESI + 0xc) != 0) {
    *(undefined4 *)(*(int *)(unaff_ESI + 0xc) + 0xc) = **(undefined4 **)(unaff_ESI + 4);
    (**(code **)(**(int **)(unaff_ESI + 0xc) + 0x14))(*(int **)(unaff_ESI + 0xc));
  }
  if (*(int *)(unaff_ESI + 0x10) != 0) {
    *(undefined4 *)(*(int *)(unaff_ESI + 0x10) + 0xc) =
         *(undefined4 *)(*(int *)(unaff_ESI + 4) + 0x18);
    *(undefined4 *)(*(int *)(unaff_ESI + 0x10) + 0x1c) =
         *(undefined4 *)(*(int *)(unaff_ESI + 4) + 0x1c);
    *(undefined1 *)(*(int *)(unaff_ESI + 0x10) + 0x20) =
         *(undefined1 *)(*(int *)(unaff_ESI + 4) + 0x20);
    iVar5 = *(int *)(unaff_ESI + 4);
    bVar1 = *(byte *)(iVar5 + 0x2c);
    bVar2 = *(byte *)(iVar5 + 0x28);
    iVar3 = *(int *)(unaff_ESI + 0x10);
    *(float *)(iVar3 + 0x24) = (float)*(byte *)(iVar5 + 0x24) * 0.003921569;
    *(float *)(iVar3 + 0x28) = (float)bVar2 * 0.003921569;
    *(float *)(iVar3 + 0x2c) = (float)bVar1 * 0.003921569;
    (**(code **)(**(int **)(unaff_ESI + 0x10) + 0x14))(*(int **)(unaff_ESI + 0x10));
  }
  if (*(int *)(unaff_ESI + 0x14) != 0) {
    *(undefined4 *)(*(int *)(unaff_ESI + 0x14) + 0xc) =
         *(undefined4 *)(*(int *)(unaff_ESI + 4) + 0x30);
    *(undefined4 *)(*(int *)(unaff_ESI + 0x14) + 0x1c) =
         *(undefined4 *)(*(int *)(unaff_ESI + 4) + 0x34);
    *(undefined1 *)(*(int *)(unaff_ESI + 0x14) + 0x20) =
         *(undefined1 *)(*(int *)(unaff_ESI + 4) + 0x38);
    iVar5 = *(int *)(unaff_ESI + 4);
    bVar1 = *(byte *)(iVar5 + 0x44);
    bVar2 = *(byte *)(iVar5 + 0x40);
    iVar3 = *(int *)(unaff_ESI + 0x14);
    *(float *)(iVar3 + 0x24) = (float)*(byte *)(iVar5 + 0x3c) * 0.003921569;
    *(float *)(iVar3 + 0x28) = (float)bVar2 * 0.003921569;
    *(float *)(iVar3 + 0x2c) = (float)bVar1 * 0.003921569;
    (**(code **)(**(int **)(unaff_ESI + 0x14) + 0x14))(*(int **)(unaff_ESI + 0x14));
  }
  iVar5 = *(int *)(unaff_ESI + 4);
  *(float *)(unaff_ESI + 0x2c) = 1.0 / *(float *)(iVar5 + 0xc);
  *(float *)(unaff_ESI + 0x30) = 1.0 / *(float *)(iVar5 + 0x10);
  *(undefined4 *)(unaff_ESI + 0x3c) = *(undefined4 *)(iVar5 + 0x14);
  piVar7 = (int *)FUN_000a7770(iVar5 + 8);
  piVar4 = *(int **)(unaff_ESI + 0x18);
  if (piVar4 != piVar7) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 8))(piVar4);
      *(undefined4 *)(unaff_ESI + 0x18) = 0;
    }
    *(int **)(unaff_ESI + 0x18) = piVar7;
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 4))(piVar7);
    }
  }
  return;
}
