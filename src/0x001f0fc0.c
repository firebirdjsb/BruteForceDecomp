/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 88CB9821E0632363BA66995E0C0F591B04EFEA21256A56F0BE506D39D9256487
 * Entry: 0x001f0fc0, Ghidra index: 6986, label: FUN_001f0fc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t switchD_001f10ee_caseD_2[];
void FUN_001f0fc0(char *param_1)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_8;
  undefined4 local_4;
  
  do {
    if (*(int *)(param_1 + 8) != 0) {
      return;
    }
    local_8 = *(undefined4 *)(param_1 + 0x30);
    local_4 = *(undefined4 *)(param_1 + 0x18);
    iVar2 = XAPILIB__WaitForMultipleObjects(2,&local_8,0,0xffffffff);
    if (iVar2 == -1) {
LAB_001f11a8:
      XAPILIB__ExitThread(0);
      return;
    }
    if (iVar2 == 0) {
      XAPILIB__SetEvent(*(undefined4 *)(param_1 + 0x30));
      goto LAB_001f11a8;
    }
    iVar2 = *(int *)(param_1 + 4);
    while (iVar2 != 0) {
      if ((*param_1 != '\0') && (*(int *)(param_1 + 4) != 0)) {
        if (*(int *)(param_1 + 0x29c) == 0) {
LAB_001f1080:
          if (*(int *)(param_1 + 0x240) != -1) {
            XAPILIB__CloseHandle(*(int *)(param_1 + 0x240));
            param_1[0x240] = -1;
            param_1[0x241] = -1;
            param_1[0x242] = -1;
            param_1[0x243] = -1;
          }
          FUN_001f1770();
          param_1[4] = '\0';
          param_1[5] = '\0';
          param_1[6] = '\0';
          param_1[7] = '\0';
          *param_1 = '\0';
        }
        else {
          if (((param_1 != (char *)0xfffffd80) && (*(int *)(param_1 + 0x29c) != 0)) &&
             (*(int *)(param_1 + 0x2a4) != 0)) {
            iVar2 = *(int *)(*(int *)(param_1 + 0x29c) + 0x14);
            if (iVar2 != 0) {
              FUN_0027e7f0();
              (**(code **)(param_1 + 0x2a4))
                        (*(undefined4 *)(param_1 + 0x2a8),*(undefined4 *)(iVar2 + 0x28));
              (**(code **)(param_1 + 0x2a4))
                        (*(undefined4 *)(param_1 + 0x2a8),*(undefined4 *)(iVar2 + 0x24));
              (**(code **)(param_1 + 0x2a4))(*(undefined4 *)(param_1 + 0x2a8),iVar2);
            }
            (**(code **)(param_1 + 0x2a4))
                      (*(undefined4 *)(param_1 + 0x2a8),*(undefined4 *)(param_1 + 0x29c));
            param_1[0x29c] = '\0';
            param_1[0x29d] = '\0';
            param_1[0x29e] = '\0';
            param_1[0x29f] = '\0';
            goto LAB_001f1080;
          }
          param_1[8] = '\b';
          param_1[9] = '\0';
          param_1[10] = '\0';
          param_1[0xb] = '\0';
          param_1[4] = '\0';
          param_1[5] = '\0';
          param_1[6] = '\0';
          param_1[7] = '\0';
        }
        pcVar1 = param_1 + 0x138;
        uVar3 = FUN_002f3071(pcVar1);
        if (uVar3 == 0xffffffff) {
          XAPILIB__GetLastError();
        }
        else if ((uVar3 & 0x10) == 0) {
          FUN_002f30bc(pcVar1);
        }
        else {
          FUN_0023aff0(pcVar1,0);
        }
        *param_1 = '\0';
      }
      switch(*(undefined4 *)(param_1 + 4)) {
      case 1:
        iVar2 = FUN_001f11d0();
        break;
      default:
        goto switchD_001f10ee_caseD_2;
      case 3:
        iVar2 = FUN_001f1330();
        break;
      case 4:
        iVar2 = FUN_001f1410();
        break;
      case 5:
        iVar2 = FUN_001f1590();
        break;
      case 6:
        if (*(int *)(param_1 + 0x29c) == 0) {
LAB_001f116a:
          if (*(int *)(param_1 + 0x240) != -1) {
            XAPILIB__CloseHandle(*(int *)(param_1 + 0x240));
            param_1[0x240] = -1;
            param_1[0x241] = -1;
            param_1[0x242] = -1;
            param_1[0x243] = -1;
          }
          FUN_001f1770();
          param_1[4] = '\0';
          param_1[5] = '\0';
          param_1[6] = '\0';
          param_1[7] = '\0';
          *param_1 = '\0';
          goto switchD_001f10ee_caseD_2;
        }
        if (((param_1 != (char *)0xfffffd80) && (*(int *)(param_1 + 0x29c) != 0)) &&
           (*(int *)(param_1 + 0x2a4) != 0)) {
          if (*(int *)(*(int *)(param_1 + 0x29c) + 0x14) != 0) {
            FUN_0027f3f0();
          }
          (**(code **)(param_1 + 0x2a4))
                    (*(undefined4 *)(param_1 + 0x2a8),*(undefined4 *)(param_1 + 0x29c));
          param_1[0x29c] = '\0';
          param_1[0x29d] = '\0';
          param_1[0x29e] = '\0';
          param_1[0x29f] = '\0';
          goto LAB_001f116a;
        }
        goto LAB_001f1197;
      }
      if (iVar2 < 0) {
LAB_001f1197:
        param_1[4] = '\0';
        param_1[5] = '\0';
        param_1[6] = '\0';
        param_1[7] = '\0';
        break;
      }
switchD_001f10ee_caseD_2:
      iVar2 = *(int *)(param_1 + 4);
    }
  } while( true );
}
