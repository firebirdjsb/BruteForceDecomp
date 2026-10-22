/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 00B6B3E701ADC079933D689FEF43B60225F616CD5EA35E03247BFEA91D3257FE
 * Entry: 0x000daa10, Ghidra index: 2697, label: FUN_000daa10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000daa10(int *param_1)

{
  int *piVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int local_128;
  int iStack_124;
  int local_120;
  int iStack_11c;
  int iStack_114;
  int iStack_10c;
  int iStack_104;
  int iStack_fc;
  int iStack_f4;
  int iStack_ec;
  int iStack_e4;
  int iStack_dc;
  int iStack_d4;
  int iStack_cc;
  int iStack_c4;
  int iStack_bc;
  int iStack_b4;
  int iStack_ac;
  int iStack_a4;
  int iStack_9c;
  int iStack_94;
  int iStack_8c;
  int iStack_84;
  int iStack_7c;
  int iStack_74;
  int iStack_6c;
  int iStack_64;
  int iStack_5c;
  int iStack_54;
  int iStack_4c;
  int iStack_44;
  int iStack_3c;
  int iStack_34;
  int iStack_2c;
  int iStack_24;
  int iStack_1c;
  int iStack_14;
  int iStack_c;
  
  piVar1 = param_1;
  local_128 = *(int *)(in_EAX + 0xf8);
  local_120 = FUN_000ff730(in_EAX + 0xf4,local_128,*(undefined4 *)(local_128 + 4),&param_1);
  FUN_000b2a50();
  *(int *)(local_128 + 4) = local_120;
  **(int **)(local_120 + 4) = local_120;
  iVar2 = (**(code **)(*piVar1 + 0x20))();
  if (iVar2 == 10) {
    iStack_124 = 0;
    FUN_0008f6a0(piVar1);
    iVar2 = *(int *)(in_EAX + 0xb6c);
    iVar3 = FUN_000e1910(in_EAX + 0xb68,iVar2,*(undefined4 *)(iVar2 + 4),&local_128);
    FUN_000389d0();
    *(int *)(iVar2 + 4) = iVar3;
    **(int **)(iVar3 + 4) = iVar3;
  }
  else {
    iVar2 = (**(code **)(*piVar1 + 0x20))();
    if (iVar2 == 7) {
      iStack_124 = 0;
      FUN_0008f6a0(piVar1);
      iVar2 = *(int *)(in_EAX + 0xa50);
      iVar3 = FUN_000e1910(in_EAX + 0xa4c,iVar2,*(undefined4 *)(iVar2 + 4),&local_128);
      FUN_000389d0();
      *(int *)(iVar2 + 4) = iVar3;
      **(int **)(iVar3 + 4) = iVar3;
    }
    else {
      iVar2 = (**(code **)(*piVar1 + 0x20))();
      if (iVar2 != 0xe) {
        return;
      }
      uVar4 = (**(code **)(*piVar1 + 0x3c))();
      switch(uVar4) {
      case 2:
        FUN_0004b5f0();
        FUN_00038440();
        if (iStack_44 != 0) {
          FUN_0008f6e0();
        }
        FUN_0004b5f0();
        FUN_00038440();
        if (iStack_e4 == 0) {
          return;
        }
        FUN_0008f6e0();
        return;
      default:
        iStack_124 = 0;
        FUN_0008f6a0(piVar1);
        FUN_00038440();
        break;
      case 5:
        FUN_0004b5f0();
        FUN_00038440();
        if (iStack_24 != 0) {
          FUN_0008f6e0();
        }
        FUN_0004b5f0();
        FUN_00038440();
        if (iStack_c4 == 0) {
          return;
        }
        FUN_0008f6e0();
        return;
      case 6:
        FUN_0004b5f0();
        FUN_00038440();
        if (iStack_64 != 0) {
          FUN_0008f6e0();
        }
        FUN_0004b5f0();
        FUN_00038440();
        if (iStack_b4 == 0) {
          return;
        }
        FUN_0008f6e0();
        return;
      case 7:
      case 0x16:
        FUN_0004b5f0();
        FUN_00038440();
        if (iStack_34 != 0) {
          FUN_0008f6e0();
        }
        FUN_0004b5f0();
        FUN_00038440();
        if (iStack_a4 == 0) {
          return;
        }
        FUN_0008f6e0();
        return;
      case 8:
        FUN_0004b5f0();
        FUN_00038440();
        if (iStack_74 == 0) {
          return;
        }
        FUN_0008f6e0();
        return;
      case 9:
        FUN_0004b5f0();
        FUN_00038440();
        if (iStack_7c != 0) {
          FUN_0008f6e0();
        }
        FUN_0004b5f0();
        FUN_00038440();
        if (iStack_6c == 0) {
          return;
        }
        FUN_0008f6e0();
        return;
      case 10:
        FUN_0004b5f0();
        FUN_00038440();
        if (iStack_5c != 0) {
          FUN_0008f6e0();
        }
        FUN_0004b5f0();
        FUN_00038440();
        if (iStack_4c == 0) {
          return;
        }
        FUN_0008f6e0();
        return;
      case 0xb:
        FUN_0004b5f0();
        FUN_00038440();
        if (iStack_11c == 0) {
          return;
        }
        FUN_0008f6e0();
        return;
      case 0xc:
        FUN_0004b5f0();
        FUN_00038440();
        if (iStack_94 == 0) {
          return;
        }
        FUN_0008f6e0();
        return;
      case 0xd:
        FUN_0004b5f0();
        FUN_00038440();
        if (iStack_14 != 0) {
          FUN_0008f6e0();
        }
        FUN_0004b5f0();
        FUN_00038440();
        if (iStack_10c == 0) {
          return;
        }
        FUN_0008f6e0();
        return;
      case 0xe:
        FUN_0004b5f0();
        FUN_00038440();
        if (iStack_fc != 0) {
          FUN_0008f6e0();
        }
        FUN_0004b5f0();
        FUN_00038440();
        if (iStack_ec == 0) {
          return;
        }
        FUN_0008f6e0();
        return;
      case 0xf:
        FUN_0004b5f0();
        FUN_00038440();
        if (iStack_d4 == 0) {
          return;
        }
        FUN_0008f6e0();
        return;
      case 0x10:
        FUN_0004b5f0();
        FUN_00038440();
        if (iStack_9c != 0) {
          FUN_0008f6e0();
        }
        FUN_0004b5f0();
        FUN_00038440();
        if (iStack_8c == 0) {
          return;
        }
        FUN_0008f6e0();
        return;
      case 0x11:
        FUN_0004b5f0();
        FUN_00038440();
        if (iStack_104 == 0) {
          return;
        }
        FUN_0008f6e0();
        return;
      case 0x12:
        FUN_0004b5f0();
        FUN_00038440();
        if (iStack_84 == 0) {
          return;
        }
        FUN_0008f6e0();
        return;
      case 0x13:
        FUN_0004b5f0();
        FUN_00038440();
        if (iStack_bc != 0) {
          FUN_0008f6e0();
        }
        FUN_0004b5f0();
        FUN_00038440();
        if (iStack_ac == 0) {
          return;
        }
        FUN_0008f6e0();
        return;
      case 0x14:
        FUN_0004b5f0();
        FUN_00038440();
        if (iStack_dc != 0) {
          FUN_0008f6e0();
        }
        FUN_0004b5f0();
        FUN_00038440();
        if (iStack_cc == 0) {
          return;
        }
        FUN_0008f6e0();
        return;
      case 0x15:
        FUN_0004b5f0();
        FUN_00038440();
        if (iStack_54 != 0) {
          FUN_0008f6e0();
        }
        FUN_0004b5f0();
        FUN_00038440();
        if (iStack_114 == 0) {
          return;
        }
        FUN_0008f6e0();
        return;
      case 0x17:
        FUN_0004b5f0();
        FUN_00038440();
        if (iStack_f4 == 0) {
          return;
        }
        FUN_0008f6e0();
        return;
      case 0x18:
        FUN_0004b5f0();
        FUN_00038440();
        if (iStack_3c != 0) {
          FUN_0008f6e0();
        }
        FUN_0004b5f0();
        FUN_00038440();
        if (iStack_2c == 0) {
          return;
        }
        FUN_0008f6e0();
        return;
      case 0x19:
        FUN_0004b5f0();
        FUN_00038440();
        if (iStack_1c != 0) {
          FUN_0008f6e0();
        }
        FUN_0004b5f0();
        FUN_00038440();
        if (iStack_c == 0) {
          return;
        }
        FUN_0008f6e0();
        return;
      }
    }
  }
  if (iStack_124 != 0) {
    FUN_0008f6e0();
  }
  return;
}
