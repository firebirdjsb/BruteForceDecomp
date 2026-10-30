/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D34FB1468BB070C48AB8DCB0ADA5066A0EA44DD5D542A7592BF4E7608301EBDB
 * Entry: 0x002f1aaf, Ghidra index: 10786, label: FUN_002f1aaf
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040f4dc;
extern uint32_t DAT_004a8e98;
extern uint32_t DAT_004a8ea0;
extern uint32_t _DAT_0040f4d8;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_002f1aaf(uint param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 local_100c [1018];
  undefined4 uStack_24;
  uint uStack_20;
  uint uStack_1c;
  undefined4 *puStack_18;
  int iStack_14;
  
  FUN_002ebea0();
  iVar5 = 0;
  if ((param_1 < DAT_004a8e98) &&
     ((*(byte *)((&DAT_004a8ea0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 8) & 1) != 0)) {
    iStack_14 = 0;
    puStack_18 = (undefined4 *)param_1;
    uStack_1c = 0x2f1af4;
    iVar1 = FUN_002ef651();
    if (iVar1 != -1) {
      iStack_14 = 0;
      puStack_18 = (undefined4 *)param_1;
      uStack_1c = 0x2f1b0c;
      iVar2 = FUN_002ef651();
      if (iVar2 != -1) {
        iVar2 = param_2 - iVar2;
        if (iVar2 < 1) {
          if (iVar2 < 0) {
            iStack_14 = 0;
            puStack_18 = (undefined4 *)param_2;
            uStack_1c = param_1;
            uStack_20 = 0x2f1ba5;
            FUN_002ef651();
            uStack_20 = param_1;
            uStack_24 = 0x2f1bab;
            iStack_14 = __get_osfhandle();
            puStack_18 = (undefined4 *)0x2f1bb4;
            iVar5 = XAPILIB__SetEndOfFile();
            iVar5 = (iVar5 != 0) - 1;
            if (iVar5 == -1) {
              _DAT_0040f4d8 = 0xd;
              iStack_14 = 0x2f1bd1;
              DAT_0040f4dc = XAPILIB__GetLastError();
            }
          }
        }
        else {
          iStack_14 = 0x8000;
          puStack_18 = (undefined4 *)param_1;
          puVar6 = local_100c;
          for (iVar4 = 0x400; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar6 = 0;
            puVar6 = puVar6 + 1;
          }
          uStack_1c = 0x2f1b3e;
          uVar3 = FUN_002f24d3();
          do {
            iStack_14 = 0x1000;
            if (iVar2 < 0x1000) {
              iStack_14 = iVar2;
            }
            puStack_18 = local_100c;
            uStack_1c = param_1;
            uStack_20 = 0x2f1b60;
            iVar4 = FUN_002ef4a5();
            if (iVar4 == -1) {
              if (DAT_0040f4dc == 5) {
                _DAT_0040f4d8 = 0xd;
              }
              iVar5 = -1;
              break;
            }
            iVar2 = iVar2 - iVar4;
          } while (0 < iVar2);
          puStack_18 = (undefined4 *)param_1;
          uStack_1c = 0x2f1b91;
          iStack_14 = uVar3;
          FUN_002f24d3();
        }
        iStack_14 = 0;
        uStack_20 = 0x2f1be1;
        uStack_1c = param_1;
        puStack_18 = (undefined4 *)iVar1;
        FUN_002ef651();
        return iVar5;
      }
    }
  }
  else {
    _DAT_0040f4d8 = 9;
  }
  return -1;
}
