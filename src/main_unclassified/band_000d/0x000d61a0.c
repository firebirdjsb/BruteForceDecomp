/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B26180EF29604C2FAFE2E7EFF00F0FC85D9AF57B6BFAB771F25811343ED4E416
 * Entry: 0x000d61a0, Ghidra index: 2663, label: FUN_000d61a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00443300;
extern uint32_t *DAT_00443308;
/* 0x000d6270/0x000d629e/0x000d62b0/0x000d62cd load DWORD [0x004698d4].
 * ABI_UNVERIFIED: host pointer width and callee prototype remain unknown. */
extern code *DAT_004698d4;
extern uint32_t DAT_004698d8;
extern uint32_t *DAT_00469980;
void FUN_000d61a0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int unaff_EBX;
  uint uVar6;
  
  iVar2 = FUN_002ea01d(0x70);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    *(undefined4 *)(iVar2 + 4) = 0;
    *(undefined4 *)(iVar2 + 8) = 0;
    *(undefined4 *)(iVar2 + 0xc) = 0;
    *(undefined4 *)(iVar2 + 0x14) = 0;
    *(undefined4 *)(iVar2 + 0x18) = 0;
    *(undefined4 *)(iVar2 + 0x1c) = 0;
    *(undefined4 *)(iVar2 + 0x24) = 0;
    *(undefined4 *)(iVar2 + 0x28) = 0;
    *(undefined4 *)(iVar2 + 0x2c) = 0;
    *(undefined4 *)(iVar2 + 0x34) = 0;
    *(undefined4 *)(iVar2 + 0x38) = 0;
    *(undefined4 *)(iVar2 + 0x3c) = 0;
    *(undefined4 *)(iVar2 + 0x44) = 0;
    *(undefined4 *)(iVar2 + 0x48) = 0;
    *(undefined4 *)(iVar2 + 0x4c) = 0;
    *(undefined4 *)(iVar2 + 0x54) = 0;
    *(undefined4 *)(iVar2 + 0x58) = 0;
    *(undefined4 *)(iVar2 + 0x5c) = 0;
    *(undefined4 *)(iVar2 + 100) = 0;
    *(undefined4 *)(iVar2 + 0x68) = 0;
    *(undefined4 *)(iVar2 + 0x6c) = 0;
  }
  *(int *)(param_1 + 0xc00) = iVar2;
  iVar2 = FUN_002ea01d(0x70);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    *(undefined4 *)(iVar2 + 4) = 0;
    *(undefined4 *)(iVar2 + 8) = 0;
    *(undefined4 *)(iVar2 + 0xc) = 0;
    *(undefined4 *)(iVar2 + 0x14) = 0;
    *(undefined4 *)(iVar2 + 0x18) = 0;
    *(undefined4 *)(iVar2 + 0x1c) = 0;
    *(undefined4 *)(iVar2 + 0x24) = 0;
    *(undefined4 *)(iVar2 + 0x28) = 0;
    *(undefined4 *)(iVar2 + 0x2c) = 0;
    *(undefined4 *)(iVar2 + 0x34) = 0;
    *(undefined4 *)(iVar2 + 0x38) = 0;
    *(undefined4 *)(iVar2 + 0x3c) = 0;
    *(undefined4 *)(iVar2 + 0x44) = 0;
    *(undefined4 *)(iVar2 + 0x48) = 0;
    *(undefined4 *)(iVar2 + 0x4c) = 0;
    *(undefined4 *)(iVar2 + 0x54) = 0;
    *(undefined4 *)(iVar2 + 0x58) = 0;
    *(undefined4 *)(iVar2 + 0x5c) = 0;
    *(undefined4 *)(iVar2 + 100) = 0;
    *(undefined4 *)(iVar2 + 0x68) = 0;
    *(undefined4 *)(iVar2 + 0x6c) = 0;
  }
  *(int *)(param_1 + 0xbf8) = iVar2;
  FUN_001e1940(*(undefined4 *)(param_1 + 0xa70),*(undefined4 *)(param_1 + 0xc00));
  if (DAT_004698d4 != (code *)0x0) {
    (*DAT_004698d4)(DAT_004698d8);
  }
  FUN_000d5f60();
  FUN_001e1ff0();
  if (DAT_004698d4 != (code *)0x0) {
    (*DAT_004698d4)(DAT_004698d8);
  }
  if (*(int *)(param_1 + 0xbfc) != 0) {
    FUN_001e1ff0();
  }
  if (DAT_004698d4 != (code *)0x0) {
    (*DAT_004698d4)(DAT_004698d8);
  }
  (**(code **)(*DAT_00443308 + 0x1c))(DAT_00443308,0);
  iVar2 = *(int *)(param_1 + 0xa70);
  if (iVar2 != 0) {
    for (uVar6 = 0;
        (*(int *)(iVar2 + 0x128) != 0 &&
        (uVar6 < (uint)(*(int *)(iVar2 + 300) - *(int *)(iVar2 + 0x128) >> 2))); uVar6 = uVar6 + 1)
    {
      iVar3 = FUN_00160da0(0,1);
      if (iVar3 != 0) {
        *(uint *)(iVar3 + 0xa8) = *(uint *)(iVar3 + 0xa8) | 2;
      }
    }
    for (uVar6 = 0;
        (*(int *)(iVar2 + 0x138) != 0 &&
        (uVar6 < (uint)(*(int *)(iVar2 + 0x13c) - *(int *)(iVar2 + 0x138) >> 2))); uVar6 = uVar6 + 1
        ) {
      iVar3 = FUN_00160da0(0,1);
      if (iVar3 != 0) {
        *(uint *)(iVar3 + 0xa8) = *(uint *)(iVar3 + 0xa8) | 1;
      }
    }
    for (uVar6 = 0;
        (*(int *)(iVar2 + 0x148) != 0 &&
        (uVar6 < (uint)(*(int *)(iVar2 + 0x14c) - *(int *)(iVar2 + 0x148) >> 2))); uVar6 = uVar6 + 1
        ) {
      iVar3 = FUN_00160da0(0,1);
      if (iVar3 != 0) {
        *(uint *)(iVar3 + 0xa8) = *(uint *)(iVar3 + 0xa8) | 4;
      }
    }
    for (uVar6 = 0;
        (param_1 = unaff_EBX, *(int *)(iVar2 + 0x158) != 0 &&
        (uVar6 < (uint)(*(int *)(iVar2 + 0x15c) - *(int *)(iVar2 + 0x158) >> 2))); uVar6 = uVar6 + 1
        ) {
      iVar3 = FUN_00160da0(0,1);
      if (iVar3 != 0) {
        *(uint *)(iVar3 + 0xa8) = *(uint *)(iVar3 + 0xa8) | 8;
      }
    }
  }
  iVar2 = FUN_002ea01d(0x78);
  if (iVar2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_001f45a0();
  }
  iVar2 = *(int *)(param_1 + 0xbe0);
  *(undefined4 *)(param_1 + 0xa40) = uVar4;
  *(undefined1 *)(iVar2 + 0x60) = 0;
  FUN_00149bd0();
  (**(code **)(*DAT_00469980 + 0x1c))(&stack0xfffffffc,iVar2);
  *(undefined1 *)(iVar2 + 0x60) = 0;
  piVar5 = (int *)(**(code **)(*DAT_00443300 + 0x2c))(&stack0xfffffff4);
  piVar1 = *(int **)(param_1 + 0xc44);
  if (piVar1 != piVar5) {
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(param_1 + 0xc44) = 0;
    }
    *(int **)(param_1 + 0xc44) = piVar5;
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 4))(piVar5);
    }
  }
  FUN_000d8ce0();
  return;
}
