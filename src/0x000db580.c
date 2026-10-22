/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2F0788D1595EEF05A4CF790E879B57C9723639356D0D586293D90E8AF1D19002
 * Entry: 0x000db580, Ghidra index: 2699, label: FUN_000db580
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t switchD_000db64e_caseD_3[];
void FUN_000db580(undefined4 param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined1 auStack_a0 [4];
  int iStack_9c;
  undefined1 auStack_98 [4];
  int iStack_94;
  undefined1 auStack_90 [4];
  int iStack_8c;
  undefined1 auStack_88 [4];
  int iStack_84;
  undefined1 auStack_80 [4];
  int iStack_7c;
  undefined1 auStack_78 [4];
  int iStack_74;
  undefined1 auStack_70 [4];
  int iStack_6c;
  undefined1 auStack_68 [4];
  int iStack_64;
  undefined1 auStack_60 [4];
  int iStack_5c;
  undefined1 auStack_58 [4];
  int iStack_54;
  undefined1 auStack_50 [4];
  int iStack_4c;
  undefined1 auStack_48 [4];
  int iStack_44;
  undefined1 auStack_40 [4];
  int iStack_3c;
  undefined1 auStack_38 [4];
  int iStack_34;
  undefined1 auStack_30 [4];
  int iStack_2c;
  undefined1 auStack_28 [4];
  int iStack_24;
  undefined1 auStack_20 [4];
  int iStack_1c;
  undefined1 auStack_18 [4];
  int iStack_14;
  undefined1 auStack_10 [4];
  int iStack_c;
  
  piVar3 = param_2;
  if (param_2 == (int *)0x0) {
    return;
  }
  (**(code **)(*param_2 + 0x2c))();
  FUN_000de780(param_1,piVar3,0xffffffff);
  FUN_000e0860(&param_2);
  iVar1 = (**(code **)(*piVar3 + 0x20))();
  if (iVar1 == 10) {
    iStack_9c = 0;
    FUN_0008f6a0(piVar3);
    FUN_000e0950(auStack_a0);
  }
  else {
    iVar1 = (**(code **)(*piVar3 + 0x20))();
    if (iVar1 == 0xe) {
      iStack_9c = 0;
      FUN_0008f6a0(piVar3);
      FUN_000e0950(auStack_a0);
      if (iStack_9c != 0) {
        FUN_0008f6e0();
      }
      piVar3 = param_2;
      uVar2 = (**(code **)(*param_2 + 0x3c))();
      switch(uVar2) {
      case 2:
        FUN_0004b5f0();
        FUN_000e0950(auStack_18);
        if (iStack_14 != 0) {
          FUN_0008f6e0();
          (**(code **)*piVar3)(1);
          return;
        }
        break;
      case 5:
        FUN_0004b5f0();
        FUN_000e0950(auStack_48);
        if (iStack_44 != 0) {
          FUN_0008f6e0();
          (**(code **)*piVar3)(1);
          return;
        }
        break;
      case 6:
        FUN_0004b5f0();
        FUN_000e0950(auStack_78);
        if (iStack_74 != 0) {
          FUN_0008f6e0();
          (**(code **)*piVar3)(1);
          return;
        }
        break;
      case 7:
      case 0x16:
        FUN_0004b5f0();
        FUN_000e0950(auStack_68);
        if (iStack_64 != 0) {
          FUN_0008f6e0();
          (**(code **)*piVar3)(1);
          return;
        }
        break;
      case 8:
        FUN_0004b5f0();
        FUN_000e0950(auStack_88);
        if (iStack_84 != 0) {
          FUN_0008f6e0();
          (**(code **)*piVar3)(1);
          return;
        }
        break;
      case 9:
        FUN_0004b5f0();
        FUN_000e0950(auStack_60);
        if (iStack_5c != 0) {
          FUN_0008f6e0();
          (**(code **)*piVar3)(1);
          return;
        }
        break;
      case 10:
        FUN_0004b5f0();
        FUN_000e0950(auStack_50);
        if (iStack_4c != 0) {
          FUN_0008f6e0();
          (**(code **)*piVar3)(1);
          return;
        }
        break;
      case 0xb:
        FUN_0004b5f0();
        FUN_000e0950(auStack_40);
        if (iStack_3c != 0) {
          FUN_0008f6e0();
          (**(code **)*piVar3)(1);
          return;
        }
        break;
      case 0xc:
        FUN_0004b5f0();
        FUN_000e0950(auStack_30);
        if (iStack_2c != 0) {
          FUN_0008f6e0();
          (**(code **)*piVar3)(1);
          return;
        }
        break;
      case 0xd:
        FUN_0004b5f0();
        FUN_000e0950(auStack_58);
        if (iStack_54 != 0) {
          FUN_0008f6e0();
          (**(code **)*piVar3)(1);
          return;
        }
        break;
      case 0xe:
        FUN_0004b5f0();
        FUN_000e0950(auStack_98);
        if (iStack_94 != 0) {
          FUN_0008f6e0();
          (**(code **)*piVar3)(1);
          return;
        }
        break;
      case 0xf:
        FUN_0004b5f0();
        FUN_000e0950(auStack_28);
        if (iStack_24 != 0) {
          FUN_0008f6e0();
          (**(code **)*piVar3)(1);
          return;
        }
        break;
      case 0x10:
        FUN_0004b5f0();
        FUN_000e0950(auStack_70);
        if (iStack_6c != 0) {
          FUN_0008f6e0();
          (**(code **)*piVar3)(1);
          return;
        }
        break;
      case 0x11:
      case 0x12:
      case 0x17:
        FUN_0004b5f0();
        FUN_000e0950(auStack_a0);
        if (iStack_9c != 0) {
          FUN_0008f6e0();
          (**(code **)*piVar3)(1);
          return;
        }
        break;
      case 0x13:
        FUN_0004b5f0();
        FUN_000e0950(auStack_80);
        if (iStack_7c != 0) {
          FUN_0008f6e0();
          (**(code **)*piVar3)(1);
          return;
        }
        break;
      case 0x14:
        FUN_0004b5f0();
        FUN_000e0950(auStack_90);
        if (iStack_8c != 0) {
          FUN_0008f6e0();
          (**(code **)*piVar3)(1);
          return;
        }
        break;
      case 0x15:
        FUN_0004b5f0();
        FUN_000e0950(auStack_38);
        if (iStack_34 != 0) {
          FUN_0008f6e0();
          (**(code **)*piVar3)(1);
          return;
        }
        break;
      case 0x18:
        FUN_0004b5f0();
        FUN_000e0950(auStack_20);
        if (iStack_1c != 0) {
          FUN_0008f6e0();
          (**(code **)*piVar3)(1);
          return;
        }
        break;
      case 0x19:
        FUN_0004b5f0();
        FUN_000e0950(auStack_10);
        if (iStack_c != 0) {
          FUN_0008f6e0();
          (**(code **)*piVar3)(1);
          return;
        }
      }
      goto switchD_000db64e_caseD_3;
    }
    iVar1 = (**(code **)(*piVar3 + 0x20))();
    if (iVar1 != 7) {
      return;
    }
    iStack_9c = 0;
    FUN_0008f6a0(piVar3);
    FUN_000e0950(auStack_a0);
  }
  piVar3 = param_2;
  if (iStack_9c != 0) {
    FUN_0008f6e0();
    piVar3 = param_2;
  }
switchD_000db64e_caseD_3:
  (**(code **)*piVar3)(1);
  return;
}
