/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EFC1A175E8B539FFF9B5917D4698BB7D713A5225641E489CB18559F91B6CB380
 * Entry: 0x0007ab60, Ghidra index: 1460, label: FUN_0007ab60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00400538;
extern uint32_t DAT_0040054c;
extern uint32_t DAT_00400554;
extern uint32_t DAT_00400568;
extern uint32_t DAT_0040dd4c;
extern uint32_t *DAT_004432f8;
extern uint32_t *DAT_00469908;
extern char s__s_s_s_0040dd8c[];
extern char s_campaign_0040dd68[];
extern char s_campaign_type_dat_0040dd54[];
extern char s_gameflags_0040dd1c[];
extern char s_gameflags_s_0040dd3c[];
extern char s_package_name_dat_0040dd28[];
char FUN_0007ab60(int *param_1,char *param_2,wchar_t *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  int *piVar7;
  int *piVar8;
  bool bVar9;
  char local_685;
  char *local_684;
  int *piStack_680;
  int *piStack_67c;
  int iStack_678;
  int iStack_674;
  int iStack_670;
  undefined4 uStack_66c;
  undefined4 uStack_668;
  undefined4 uStack_664;
  undefined4 uStack_660;
  undefined1 auStack_65c [4];
  int iStack_658;
  undefined4 uStack_654;
  undefined4 uStack_650;
  undefined4 uStack_644;
  int aiStack_640 [5];
  int aiStack_62c [5];
  undefined1 local_618 [260];
  undefined1 auStack_514 [260];
  undefined1 auStack_410 [260];
  undefined1 auStack_30c [260];
  undefined1 auStack_208 [520];
  
  local_685 = '\0';
  if (param_2 == (char *)0x0) goto LAB_0007af5b;
  local_684 = param_2;
  do {
    cVar1 = *local_684;
    local_684 = local_684 + 1;
  } while (cVar1 != '\0');
  local_684 = local_684 + -(int)(param_2 + 1);
  if (((local_684 == (char *)0x0) || (param_3 == (wchar_t *)0x0)) ||
     (iVar2 = FUN_002eaa70(param_3), iVar2 == 0)) goto LAB_0007af5b;
  puVar3 = DAT_00400538;
  if (DAT_0040054c < 0x10) {
    puVar3 = &DAT_00400538;
  }
  FUN_002eaa19(local_618,0x104,s__s_s_s_0040dd8c,param_2,s_campaign_0040dd68,puVar3);
  cVar1 = (**(code **)(*DAT_004432f8 + 0x24))(DAT_004432f8,local_618);
  if ((cVar1 == '\0') || (iVar2 = FUN_0023a280(local_618), iVar2 < 0)) goto LAB_0007af5b;
  iStack_678 = 0;
  iStack_674 = 0;
  FUN_002eaa19(auStack_514,0x104,&DAT_0040dd4c,param_2,s_campaign_type_dat_0040dd54);
  iVar2 = FUN_002f2b3f(auStack_514,0x80000000,0,0,3,0x80,0);
  if ((iVar2 == -1) || (iVar4 = XAPILIB__GetFileSize(iVar2,0), iVar4 != 8)) goto LAB_0007af5b;
  XAPILIB__ReadFile(iVar2,&iStack_678,8,&local_684,0);
  bVar9 = iStack_678 != iStack_674;
  XAPILIB__CloseHandle(iVar2);
  if (bVar9) goto LAB_0007af5b;
  piStack_67c = (int *)0x0;
  piStack_680 = (int *)0x0;
  iStack_658 = 0;
  uStack_654 = 0;
  uStack_650 = 0;
  uStack_644 = 0;
  uStack_66c = 0;
  uStack_668 = 0;
  uStack_664 = 0;
  uStack_660 = 0;
  puVar3 = DAT_00400554;
  if (DAT_00400568 < 0x10) {
    puVar3 = &DAT_00400554;
  }
  FUN_002eaa19(auStack_410,0x104,s_gameflags_s_0040dd3c,puVar3);
  iVar4 = (**(code **)(*param_1 + 0x1a4))(iStack_678);
  iVar2 = 0;
  if ((iVar4 == 0) || (iVar4 = *(int *)(iVar4 + 0x9c), iVar4 == 0)) {
LAB_0007ae2b:
    FUN_00078200(s_gameflags_0040dd1c,iVar2);
    uVar5 = FUN_00076fe0();
    cVar1 = FUN_00078280(&uStack_66c,uVar5);
    if (cVar1 != '\0') {
      iVar2 = *DAT_00469908;
      uVar5 = FUN_00076fe0();
      iVar2 = (**(code **)(iVar2 + 0xc))(DAT_00469908,local_618,0x80000000,uVar5);
      if (((-1 < iVar2) && (iVar2 = FUN_00076a80(), -1 < iVar2)) &&
         (pcVar6 = (char *)FUN_002ea01d(0x54), pcVar6 != (char *)0x0)) {
        pcVar6[0] = '\0';
        pcVar6[1] = '\0';
        pcVar6[2] = '\0';
        pcVar6[3] = '\0';
        pcVar6[0x4c] = '\0';
        pcVar6[0x4d] = '\0';
        pcVar6[0x4e] = '\0';
        pcVar6[0x4f] = '\0';
        pcVar6[0x50] = '\0';
        pcVar6[0x51] = '\0';
        pcVar6[0x52] = '\0';
        pcVar6[0x53] = '\0';
        local_684 = pcVar6;
        FUN_00078f90();
        uVar5 = FUN_002383b0();
        *(undefined4 *)pcVar6 = uVar5;
        _wcsncpy((wchar_t *)(pcVar6 + 8),param_3,0x20);
        *(int *)(pcVar6 + 4) = iStack_678;
        FUN_001611d0();
        local_685 = '\x01';
      }
    }
  }
  else {
    if (*(uint *)(iVar4 + 0x38) < 0x10) {
      iStack_670 = iVar4 + 0x24;
    }
    else {
      iStack_670 = *(int *)(iVar4 + 0x24);
    }
    FUN_002eaa86(auStack_30c,&DAT_0040dd4c,param_2,s_package_name_dat_0040dd28);
    iVar2 = FUN_002f2b3f(auStack_30c,0x80000000,0,0,3,0x80,0);
    if ((iVar2 != -1) && (iVar4 = XAPILIB__GetFileSize(iVar2,0), iVar4 == 0x21c)) {
      XAPILIB__ReadFile(iVar2,aiStack_640,0x14,&local_684,0);
      XAPILIB__ReadFile(iVar2,auStack_208,0x208,&local_684,0);
      uVar5 = XAPILIB__XCalculateSignatureBegin(0);
      XAPILIB__XCalculateSignatureUpdate(uVar5,auStack_208,0x208);
      XAPILIB__XCalculateSignatureEnd(uVar5,aiStack_62c);
      iVar4 = 5;
      bVar9 = true;
      piVar7 = aiStack_62c;
      piVar8 = aiStack_640;
      do {
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        bVar9 = *piVar7 == *piVar8;
        piVar7 = piVar7 + 1;
        piVar8 = piVar8 + 1;
      } while (bVar9);
      XAPILIB__CloseHandle(iVar2);
      iVar2 = iStack_670;
      if (bVar9) goto LAB_0007ae2b;
    }
  }
  if (iStack_658 != 0) {
    FUN_00077820(auStack_65c,local_684);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(iStack_658);
  }
  iStack_658 = 0;
  uStack_654 = 0;
  uStack_650 = 0;
  if (piStack_680 != (int *)0x0) {
    (**(code **)(*piStack_680 + 8))(piStack_680);
    piStack_680 = (int *)0x0;
  }
  if (piStack_67c != (int *)0x0) {
    (**(code **)(*piStack_67c + 8))(piStack_67c);
  }
  if (local_685 != '\0') {
    return local_685;
  }
LAB_0007af5b:
  (**(code **)(*param_1 + 0x270))(param_3);
  return local_685;
}
