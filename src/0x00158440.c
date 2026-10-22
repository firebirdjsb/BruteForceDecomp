/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E291F1DAD9C99226F0B7EA053C013EA094AF05DCA9E942E6A1669EF1C52B073E
 * Entry: 0x00158440, Ghidra index: 4498, label: FUN_00158440
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00158440(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  int *piVar3;
  undefined1 auStack_8 [4];
  int iStack_4;
  
  FUN_001554d0(param_1,param_2);
  if (in_ECX == (int *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(in_ECX[0x13] + 4) + 0x4c + (int)in_ECX;
  }
  FUN_000e4350(iVar1);
  if (in_ECX == (int *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(in_ECX[0x13] + 4) + 0x50 + (int)in_ECX;
  }
  FUN_000e42f0(iVar1);
  if ((in_ECX[0x1b] != 0) && (in_ECX[0x1b] != -1)) {
    (**(code **)(*in_ECX + 0xb8))(0x3f800000);
  }
  *(undefined1 *)(in_ECX + 0x1d) = 0;
  piVar3 = in_ECX + 0x21;
  iVar1 = 8;
  do {
    FUN_0015b000(piVar3);
    piVar3 = piVar3 + 2;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  if ((*(char *)((int)in_ECX + 0x7a) != '\0') && (*(char *)((int)in_ECX + 0x7a) != '\x05')) {
    FUN_000dfb80(in_ECX);
  }
  if ((*(byte *)(in_ECX[3] + 0xa8) & 1) != 0) {
    iStack_4 = 0;
    FUN_0008f6a0();
    iVar1 = *(int *)(in_ECX[2] + 0xb0);
    iVar2 = FUN_000e1910(in_ECX[2] + 0xac,iVar1,*(undefined4 *)(iVar1 + 4),auStack_8);
    FUN_000389d0();
    *(int *)(iVar1 + 4) = iVar2;
    **(int **)(iVar2 + 4) = iVar2;
    if (iStack_4 != 0) {
      FUN_0008f6e0();
    }
  }
  if ((*(byte *)(in_ECX[3] + 0xa8) & 4) != 0) {
    iStack_4 = 0;
    FUN_0008f6a0();
    iVar1 = *(int *)(in_ECX[2] + 200);
    iVar2 = FUN_000e1910(in_ECX[2] + 0xc4,iVar1,*(undefined4 *)(iVar1 + 4),auStack_8);
    FUN_000389d0();
    *(int *)(iVar1 + 4) = iVar2;
    **(int **)(iVar2 + 4) = iVar2;
    if (iStack_4 != 0) {
      FUN_0008f6e0();
    }
  }
  if ((*(byte *)(in_ECX[3] + 0xa8) & 2) != 0) {
    iStack_4 = 0;
    FUN_0008f6a0();
    iVar1 = *(int *)(in_ECX[2] + 0xbc);
    iVar2 = FUN_000e1910(in_ECX[2] + 0xb8,iVar1,*(undefined4 *)(iVar1 + 4),auStack_8);
    FUN_000389d0();
    *(int *)(iVar1 + 4) = iVar2;
    **(int **)(iVar2 + 4) = iVar2;
    if (iStack_4 != 0) {
      FUN_0008f6e0();
    }
  }
  if ((*(byte *)(in_ECX[3] + 0xa8) & 8) != 0) {
    iStack_4 = 0;
    FUN_0008f6a0();
    iVar1 = *(int *)(in_ECX[2] + 0xd4);
    iVar2 = FUN_000e1910(in_ECX[2] + 0xd0,iVar1,*(undefined4 *)(iVar1 + 4),auStack_8);
    FUN_000389d0();
    *(int *)(iVar1 + 4) = iVar2;
    **(int **)(iVar2 + 4) = iVar2;
    if (iStack_4 != 0) {
      FUN_0008f6e0();
    }
  }
  return;
}
