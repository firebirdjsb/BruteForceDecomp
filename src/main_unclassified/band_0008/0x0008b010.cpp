/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BAC8B25566867C5F3D41F401F1C5441DFE2D8A18DA1A1548C5BAC7F0655C160D
 * Entry: 0x0008b010, Ghidra index: 1672, label: FUN_0008b010
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
undefined4 FUN_0008b010(undefined4 param_1)

{
  byte *pbVar1;
  int iVar2;
  int *in_EAX;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int in_ECX;
  
  if (in_EAX != (int *)0x0) {
    uVar3 = (**(code **)(*in_EAX + 0x20))(*(undefined4 *)(in_ECX + 8));
    *(undefined4 *)(in_ECX + 0x28) = uVar3;
  }
  FUN_0008af90();
  if (*(int *)(in_ECX + 0x28) == 0) {
    iVar4 = FUN_0005d220(param_1);
    *(int *)(in_ECX + 0x28) = iVar4;
    if (iVar4 != 0) {
      *(byte *)(iVar4 + 0x40) = *(byte *)(iVar4 + 0x40) | 1;
      pbVar1 = (byte *)(*(int *)(in_ECX + 0x28) + 0x40);
      *pbVar1 = *pbVar1 | 2;
    }
  }
  piVar5 = (int *)FUN_000b9fd0(*(undefined4 *)(*(int *)(in_ECX + 0x38) + 0xbe4));
  if (piVar5 != (int *)0x0) {
    piVar5[0xc] = *(int *)(in_ECX + 0x28);
    (**(code **)(*piVar5 + 0x14))();
    (**(code **)(*piVar5 + 0x1c))(0x3f800000);
    *(int **)(in_ECX + 0x30) = piVar5;
    if (piVar5[0x18] != in_ECX) {
      FUN_0008f6a0();
    }
    if (*(int *)(in_ECX + 0x24) != 0) {
      uVar3 = *(undefined4 *)(*(int *)(in_ECX + 0x24) + 0x20);
      iVar4 = *(int *)(in_ECX + 0x30);
      iVar2 = *(int *)(iVar4 + 0x4c);
      if (iVar2 != 0) {
        *(undefined4 *)(iVar2 + 0x88) = uVar3;
      }
      iVar4 = *(int *)(iVar4 + 0x34);
      if (iVar4 != 0) {
        *(undefined4 *)(iVar4 + 0x90) = uVar3;
      }
      iVar4 = *(int *)(in_ECX + 0x30);
      uVar3 = *(undefined4 *)(*(int *)(in_ECX + 0x24) + 0x24);
      iVar2 = *(int *)(iVar4 + 0x4c);
      if (iVar2 != 0) {
        *(undefined4 *)(iVar2 + 0x8c) = uVar3;
      }
      iVar4 = *(int *)(iVar4 + 0x34);
      if (iVar4 != 0) {
        *(undefined4 *)(iVar4 + 0x94) = uVar3;
      }
    }
  }
  if (*(int *)(in_ECX + 0x2c) == 0) {
    iVar4 = FUN_002ea01d(0x38);
    if (iVar4 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_0008dc50();
    }
    iVar4 = DAT_00469b58;
    *(undefined4 *)(in_ECX + 0x2c) = uVar3;
    (**(code **)(**(int **)(iVar4 + 8) + 0x168))(uVar3);
  }
  return 1;
}
