/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B0AC9AF400121DC039664B1118890B7C9DA7B4045445FD0429716742101C4F32
 * Entry: 0x002e6a90, Ghidra index: 10499, label: FUN_002e6a90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003b68f8;
extern uint32_t PTR_FUN_003b68ec;
int FUN_002e6a90(uint param_1,int param_2,undefined1 *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int in_ECX;
  uint uVar4;
  int iVar5;
  
  *(uint *)(in_ECX + 0x20) = param_1;
  *(int *)(in_ECX + 0x24) = param_2;
  *(undefined4 *)(in_ECX + 0x28) = 0;
  *(undefined1 *)(in_ECX + 0x34) = 0;
  *(undefined4 *)(in_ECX + 0x4898) = 0;
  *(undefined4 *)(in_ECX + 0x2c) = 0;
  *(undefined1 *)(in_ECX + 0x4890) = 0;
  *(undefined4 *)(in_ECX + 0x4894) = 0;
  *(undefined4 *)(in_ECX + 0x4878) = 0;
  *(undefined4 *)(in_ECX + 0x487c) = 0;
  *(undefined4 *)(in_ECX + 0x4880) = 0;
  *(undefined4 *)(in_ECX + 0x4884) = 0;
  *(undefined4 *)(in_ECX + 0x4888) = 0;
  *(undefined4 *)(in_ECX + 0x488c) = 0;
  *(undefined4 *)(in_ECX + 0x489c) = *(undefined4 *)(param_3 + 0x24);
  uVar2 = XAPILIB__CreateEventA(0,0,0,0);
  *(undefined4 *)(in_ECX + 0x48a4) = uVar2;
  *(undefined4 *)(in_ECX + 0x48a8) = 0;
  *(undefined4 *)(in_ECX + 0x48ac) = 0;
  *(undefined4 *)(in_ECX + 0x48b0) = 0;
  *(undefined1 *)(in_ECX + 0x48a0) = 0;
  *(undefined4 *)(in_ECX + 0x4954) = *(undefined4 *)(param_3 + 0x14);
  *(undefined4 *)(in_ECX + 0x4958) = *(undefined4 *)(param_3 + 0x18);
  puVar3 = (undefined4 *)FUN_002ea01d(*(int *)(param_2 + 8) * 4 + 4);
  *(undefined4 **)(in_ECX + 0x1c) = puVar3;
  if (puVar3 != (undefined4 *)0x0) {
    for (uVar4 = *(uint *)(param_2 + 8) & 0x3fffffff; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined1 *)puVar3 = 0;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
    param_1 = 0;
    if (*(int *)(param_2 + 8) != -1) {
      do {
        if (*(code **)(in_ECX + 0x4954) == (code *)0x0) {
          iVar5 = FUN_002ea01d(0x2c);
          if (iVar5 == 0) {
            uVar2 = 0;
          }
          else {
            uVar2 = FUN_002e7580();
          }
        }
        else {
          uVar2 = (**(code **)(in_ECX + 0x4954))();
        }
        *(undefined4 *)(*(int *)(in_ECX + 0x1c) + param_1 * 4) = uVar2;
        piVar1 = *(int **)(*(int *)(in_ECX + 0x1c) + param_1 * 4);
        if (piVar1 == (int *)0x0) goto LAB_002e6b64;
        iVar5 = (**(code **)(*piVar1 + 0x10))
                          (*(undefined4 *)(param_3 + 0x1c),*(undefined4 *)(param_3 + 0x20));
        if (iVar5 < 0) {
          FUN_002e5b10();
          return iVar5;
        }
        param_1 = param_1 + 1;
      } while (param_1 < *(int *)(param_2 + 8) + 1U);
    }
    FUN_002e75c0(1);
    FUN_002e75c0(1);
    *(undefined4 *)(in_ECX + 0x48bc) = 0;
    *(undefined4 *)(in_ECX + 0x48c4) = *(undefined4 *)(param_3 + 4);
    *(undefined4 *)(in_ECX + 0x48c8) = *(undefined4 *)(param_3 + 8);
    *(undefined4 *)(in_ECX + 0x4944) = *(undefined4 *)(param_3 + 0xc);
    *(undefined4 *)(in_ECX + 0x494c) = *(undefined4 *)(param_3 + 0x10);
    *(undefined1 *)(**(int **)(in_ECX + 0x1c) + 4) = *param_3;
    uVar4 = 0;
    *(undefined1 *)(in_ECX + 0x18) = 0xff;
    do {
      if (*(int *)((int)&DAT_003b68f8 + uVar4) == -1) {
        uVar2 = (**(code **)((int)&PTR_FUN_003b68ec + uVar4))();
        *(undefined4 *)((int)&DAT_003b68f8 + uVar4) = uVar2;
      }
      FUN_002e7aa0(*(undefined4 *)((int)&DAT_003b68f8 + uVar4));
      uVar4 = uVar4 + 0x18;
    } while (uVar4 < 0x78);
    *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(in_ECX + 0x24);
    *(int *)(in_ECX + 0x10) = in_ECX;
    *(undefined4 *)(in_ECX + 0x14) = 5;
    *(undefined4 *)(in_ECX + 0x4950) = 0xffffffff;
    iVar5 = (**(code **)(**(int **)(in_ECX + 0x20) + 0x24))(in_ECX + 8);
    return iVar5;
  }
LAB_002e6b64:
  FUN_002e5b10();
  return -0x7ff8fff2;
}
