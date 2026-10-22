/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3EFA6AFCDC052F00F8BDDA2886619441320CEE4953555910D373F43ED89318D0
 * Entry: 0x002e7f50, Ghidra index: 10533, label: FUN_002e7f50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003b6974;
extern uint32_t DAT_003b6978;
extern uint32_t PTR_LAB_00386630;
extern uint32_t PTR_LAB_00386690;
int FUN_002e7f50(int param_1,int *param_2,char param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int in_ECX;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uStack_a0;
  char cStack_9c;
  undefined4 uStack_98;
  int *piStack_94;
  int *piStack_90;
  char cStack_8c;
  undefined **ppuStack_88;
  undefined4 uStack_84;
  uint uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 uStack_60;
  undefined4 uStack_48;
  undefined **ppuStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 uStack_1c;
  undefined4 uStack_4;
  
  iVar4 = 0;
  param_2[4] = param_1;
  param_2[3] = 0;
  uStack_a0 = (**(code **)(in_ECX + 0x38))();
  cStack_9c = param_3;
  uStack_98 = param_4;
  piStack_94 = param_2;
  uVar6 = 0;
  cStack_8c = '\x01';
  piStack_90 = param_2;
  piVar2 = param_2;
  if (DAT_003b6974 != 0) {
    uVar3 = DAT_003b6974;
    if (DAT_003b6974 == 0) goto LAB_002e7fe1;
    do {
      puVar1 = *(undefined4 **)(DAT_003b6978 + uVar6 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        iVar4 = (**(code **)*puVar1)(&uStack_a0);
        piVar2 = piStack_90;
        if ((iVar4 < 0) || (cStack_8c == '\0')) break;
        piStack_94 = piStack_90;
        uVar3 = DAT_003b6974;
      }
LAB_002e7fe1:
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar3);
    if (iVar4 != 0) {
      return iVar4;
    }
  }
  iVar4 = 0;
  if (param_3 == '\0') {
    if (param_1 == -3) {
      uVar6 = 0;
      if (*(int *)(in_ECX + 8) != 0) {
        do {
          if (*(int *)(*(int *)(in_ECX + 0x24) + uVar6 * 4) != 0) {
            param_2[4] = uVar6;
            iVar4 = FUN_002e9cc0(piVar2);
            piVar2 = piStack_90;
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < *(uint *)(in_ECX + 8));
        return iVar4;
      }
    }
    else {
      iVar4 = FUN_002e9cc0(piVar2);
    }
    return iVar4;
  }
  uVar7 = 0x40e8a0;
  uVar5 = 0x3fc;
  uVar6 = (**(code **)(*piVar2 + 0x1c))();
  if (0x3fc < uVar6) {
    ppuStack_88 = &PTR_LAB_00386630;
    uStack_84 = 0;
    uStack_80 = 0;
    uStack_7c = 0;
    FUN_002e9b20();
    uStack_74 = 0;
    uStack_70 = 0;
    uStack_6c = 0;
    ppuStack_88 = &PTR_LAB_00386690;
    uStack_68 = 0;
    uStack_64 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    iVar4 = FUN_002e9970(piStack_90);
    if (iVar4 < 0) {
      return iVar4;
    }
    if (0x3fc < uStack_80) {
      uVar7 = **(undefined4 **)(in_ECX + 0x18);
      uVar5 = *(undefined4 *)(in_ECX + 0x20);
    }
  }
  ppuStack_44 = &PTR_LAB_00386630;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  FUN_002e9b20();
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  ppuStack_44 = &PTR_LAB_00386690;
  uStack_1c = 0;
  uStack_4 = 0;
  uStack_24 = uVar7;
  uStack_20 = uVar5;
  FUN_002e9970(piStack_90);
  iVar4 = FUN_002e7b70(param_1,uVar7,uStack_3c,param_4);
  return iVar4;
}
