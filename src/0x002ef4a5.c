/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8434F60D3DA451B5ABAD503D00E3592119F523E294AD0EB7E275567FE057F047
 * Entry: 0x002ef4a5, Ghidra index: 10712, label: FUN_002ef4a5
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

int FUN_002ef4a5(uint param_1,char *param_2,uint param_3)

{
  char *pcVar1;
  byte bVar2;
  char cVar3;
  char *pcVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  char local_41c [1028];
  int *local_18;
  int local_14;
  int local_10;
  int local_c;
  char *local_8;
  
  if (param_1 < DAT_004a8e98) {
    piVar6 = &DAT_004a8ea0 + ((int)param_1 >> 5);
    iVar7 = (param_1 & 0x1f) * 8;
    bVar2 = *(byte *)(*piVar6 + 4 + iVar7);
    if ((bVar2 & 1) != 0) {
      local_c = 0;
      local_14 = 0;
      if (param_3 == 0) {
        return 0;
      }
      local_18 = piVar6;
      if ((bVar2 & 0x20) != 0) {
        FUN_002f178f(param_1,0,0,2);
      }
      if ((*(byte *)((undefined4 *)(*piVar6 + iVar7) + 1) & 0x80) == 0) {
        iVar8 = XAPILIB__WriteFile(*(undefined4 *)(*piVar6 + iVar7),param_2,param_3,&local_10,0);
        if (iVar8 == 0) {
          param_1 = XAPILIB__GetLastError();
        }
        else {
          param_1 = 0;
          local_c = local_10;
        }
LAB_002ef5a9:
        if (local_c != 0) {
          return local_c - local_14;
        }
        if (param_1 != 0) {
          if (param_1 == 5) {
            _DAT_0040f4d8 = 9;
            DAT_0040f4dc = 5;
            return -1;
          }
          __dosmaperr(param_1);
          return -1;
        }
      }
      else {
        local_8 = param_2;
        param_1 = 0;
        if (param_3 != 0) {
          do {
            iVar8 = 0;
            uVar5 = (int)local_8 - (int)param_2;
            pcVar4 = local_41c;
            do {
              if (param_3 <= uVar5) break;
              pcVar1 = local_8 + 1;
              cVar3 = *local_8;
              uVar5 = uVar5 + 1;
              local_8 = pcVar1;
              if (cVar3 == '\n') {
                local_14 = local_14 + 1;
                *pcVar4 = '\r';
                pcVar4 = pcVar4 + 1;
                iVar8 = iVar8 + 1;
              }
              piVar6 = local_18;
              *pcVar4 = cVar3;
              pcVar4 = pcVar4 + 1;
              iVar8 = iVar8 + 1;
            } while (iVar8 < 0x400);
            iVar8 = XAPILIB__WriteFile(*(undefined4 *)(*piVar6 + iVar7),local_41c,
                                       (int)pcVar4 - (int)local_41c,&local_10,0);
            if (iVar8 == 0) {
              param_1 = XAPILIB__GetLastError();
              goto LAB_002ef5a9;
            }
            local_c = local_c + local_10;
            if ((local_10 < (int)pcVar4 - (int)local_41c) ||
               (param_3 <= (uint)((int)local_8 - (int)param_2))) goto LAB_002ef5a9;
          } while( true );
        }
      }
      if (((*(byte *)(*piVar6 + 4 + iVar7) & 0x40) != 0) && (*param_2 == '\x1a')) {
        return 0;
      }
      _DAT_0040f4d8 = 0x1c;
      DAT_0040f4dc = 0;
      return -1;
    }
  }
  DAT_0040f4dc = 0;
  _DAT_0040f4d8 = 9;
  return -1;
}
