/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EE1B0C8EA543EBCE2321DC2222207F55938103B4F0ABAE2ED0EFB6A35226D8BD
 * Entry: 0x002ef6db, Ghidra index: 10715, label: FUN_002ef6db
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

int FUN_002ef6db(uint param_1,char *param_2,int param_3)

{
  int *piVar1;
  byte *pbVar2;
  char cVar3;
  char *pcVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  int local_14;
  char *local_10;
  char *local_c;
  char local_5;
  
  if (param_1 < DAT_004a8e98) {
    piVar1 = &DAT_004a8ea0 + ((int)param_1 >> 5);
    iVar7 = (param_1 & 0x1f) * 8;
    bVar5 = *(byte *)(*piVar1 + iVar7 + 4);
    if ((bVar5 & 1) != 0) {
      local_10 = (char *)0x0;
      if ((param_3 == 0) || ((bVar5 & 2) != 0)) {
        return 0;
      }
      pcVar8 = param_2;
      if (((bVar5 & 0x48) != 0) && (cVar3 = *(char *)(*piVar1 + iVar7 + 5), cVar3 != '\n')) {
        param_3 = param_3 + -1;
        *param_2 = cVar3;
        pcVar8 = param_2 + 1;
        local_10 = (char *)0x1;
        *(undefined1 *)(*piVar1 + 5 + iVar7) = 10;
      }
      iVar6 = XAPILIB__ReadFile(*(undefined4 *)(*piVar1 + iVar7),pcVar8,param_3,&local_14,0);
      if (iVar6 == 0) {
        iVar7 = XAPILIB__GetLastError();
        if (iVar7 == 5) {
          _DAT_0040f4d8 = 9;
          DAT_0040f4dc = 5;
          return -1;
        }
        if (iVar7 == 0x6d) {
          return 0;
        }
        __dosmaperr(iVar7);
        return -1;
      }
      pbVar2 = (byte *)(*piVar1 + 4 + iVar7);
      bVar5 = *pbVar2;
      if (-1 < (char)bVar5) {
        return (int)local_10 + local_14;
      }
      if ((local_14 == 0) || (*param_2 != '\n')) {
        bVar5 = bVar5 & 0xfb;
      }
      else {
        bVar5 = bVar5 | 4;
      }
      *pbVar2 = bVar5;
      local_10 = param_2 + (int)local_10 + local_14;
      local_c = param_2;
      pcVar8 = param_2;
      if (param_2 < local_10) {
        do {
          cVar3 = *local_c;
          if (cVar3 == '\x1a') {
            pbVar2 = (byte *)(*piVar1 + 4 + iVar7);
            bVar5 = *pbVar2;
            if ((bVar5 & 0x40) == 0) {
              *pbVar2 = bVar5 | 2;
            }
            break;
          }
          if (cVar3 == '\r') {
            if (local_c < local_10 + -1) {
              pcVar4 = local_c + 1;
              if (local_c[1] == '\n') {
                local_c = local_c + 2;
                goto LAB_002ef857;
              }
LAB_002ef871:
              local_c = pcVar4;
              *pcVar8 = '\r';
            }
            else {
              local_c = local_c + 1;
              iVar6 = XAPILIB__ReadFile(*(undefined4 *)(*piVar1 + iVar7),&local_5,1,&local_14,0);
              if (((iVar6 == 0) && (iVar6 = XAPILIB__GetLastError(), pcVar4 = local_c, iVar6 != 0))
                 || (pcVar4 = local_c, local_14 == 0)) goto LAB_002ef871;
              if ((*(byte *)(*piVar1 + 4 + iVar7) & 0x48) == 0) {
                if ((pcVar8 == param_2) && (local_5 == '\n')) goto LAB_002ef857;
                FUN_002ef651(param_1,0xffffffff,1);
                pcVar4 = local_c;
                if (local_5 == '\n') goto LAB_002ef875;
                goto LAB_002ef871;
              }
              if (local_5 == '\n') {
LAB_002ef857:
                *pcVar8 = '\n';
              }
              else {
                *pcVar8 = '\r';
                *(char *)(*piVar1 + 5 + iVar7) = local_5;
              }
            }
            pcVar8 = pcVar8 + 1;
          }
          else {
            *pcVar8 = cVar3;
            pcVar8 = pcVar8 + 1;
            local_c = local_c + 1;
          }
LAB_002ef875:
        } while (local_c < local_10);
      }
      return (int)pcVar8 - (int)param_2;
    }
  }
  DAT_0040f4dc = 0;
  _DAT_0040f4d8 = 9;
  return -1;
}
