/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 41B35F520C92931F5193D091DE95AE02E95C28CBB6B49FC92867123AFCA75E29
 * Entry: 0x002f7b7a, Ghidra index: 10938, label: XapiMapLetterToDirectory
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_00387a38;
int XAPILIB__XapiMapLetterToDirectory
              (undefined4 param_1,ushort *param_2,char *param_3,int param_4,short *param_5,
              int param_6)

{
  char cVar1;
  ushort uVar2;
  ushort *puVar3;
  short *psVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined1 local_288 [283];
  char acStack_16d [261];
  undefined1 local_68 [16];
  undefined4 local_58 [4];
  undefined1 local_48 [8];
  int local_40;
  int local_3c;
  undefined1 local_30 [8];
  undefined1 local_28 [8];
  int local_20;
  undefined1 local_1c [8];
  undefined4 local_14;
  ushort *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puVar3 = param_2;
  local_14 = 0;
  local_c = 0x40;
  local_10 = param_2;
  param_2 = (ushort *)NtCreateFile(&local_8,0x100001,&local_14,local_1c,0,0x80,3,3,0x4021);
  if ((int)param_2 < 0) {
    if (param_2 == (ushort *)0xc0000103) {
      param_2 = (ushort *)0x0;
    }
  }
  else {
    NtClose(local_8);
  }
  if ((int)param_2 < 0) {
    return (int)param_2;
  }
  pcVar5 = *(char **)(puVar3 + 2);
  iVar6 = 1 - (int)pcVar5;
  do {
    cVar1 = *pcVar5;
    pcVar5[(int)(acStack_16d + iVar6)] = cVar1;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar2 = *puVar3;
  if (acStack_16d[uVar2] == '\\') {
    *puVar3 = uVar2 - 1;
  }
  else {
    acStack_16d[uVar2 + 1] = '\\';
  }
  iVar6 = (uint)*puVar3 - (int)param_3;
  do {
    cVar1 = *param_3;
    (acStack_16d + iVar6 + 2)[(int)param_3] = cVar1;
    param_3 = param_3 + 1;
  } while (cVar1 != '\0');
  RtlInitAnsiString(local_28,acStack_16d + 1);
  local_10 = (ushort *)local_28;
  local_14 = 0;
  local_c = 0x40;
  param_2 = (ushort *)
            NtCreateFile(&local_8,0x120117,&local_14,local_1c,0,0x80,3,
                         (param_4 != 0) * '\x02' + '\x01',0x4021);
  if (-1 < (int)param_2) {
    if (param_6 != 0) {
      puVar9 = local_58;
      for (iVar6 = 10; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar9 = 0;
        puVar9 = puVar9 + 1;
      }
      KeQuerySystemTime(local_48);
      NtSetInformationFile(local_8,local_1c,local_58,0x28,4);
    }
    psVar4 = param_5;
    if (param_5 != (short *)0x0) {
      iVar6 = FUN_002f783f("$$XTINFO");
      param_6 = FUN_002f783f("$$XTIMAGE");
      local_20 = FUN_002f783f("$$XSIMAGE");
      if ((iVar6 != -1) || (*psVar4 != 0)) {
        pcVar5 = acStack_16d + 1;
        do {
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        lstrcpynA(acStack_16d + ((int)pcVar5 - (int)(acStack_16d + 2)) + 1,"\\TitleMeta.xbx",
                  0x104 - ((int)pcVar5 - (int)(acStack_16d + 2)));
        RtlInitAnsiString(local_30,acStack_16d + 1);
        local_10 = (ushort *)local_30;
        local_14 = 0;
        local_c = 0x40;
        param_2 = (ushort *)NtCreateFile(&param_4,0x40100000,&local_14,local_1c,0,4,1,3,0x22);
        acStack_16d[((int)pcVar5 - (int)(acStack_16d + 2)) + 1] = '\0';
        if ((int)param_2 < 0) {
          if (param_2 == (ushort *)0xc0000035) {
            param_2 = (ushort *)0x0;
          }
        }
        else {
          param_2 = (ushort *)NtQueryInformationFile(param_4,local_1c,local_68,0x38,0x22);
          if (((-1 < (int)param_2) && (local_40 == 0)) && (local_3c == 0)) {
            if ((iVar6 == -1) || (iVar7 = XLoadSectionByHandle(iVar6), iVar7 == 0)) {
              iVar6 = FUN_002ea9a9(local_288,0x8e,L"%lc%ls%lc%ls%ls",0xfeff,L"TitleName",0x3d,
                                   param_5,&PTR_LAB_00387a38);
              param_2 = (ushort *)NtWriteFile(param_4,0,0,0,local_1c,local_288,iVar6 << 1,0);
            }
            else {
              uVar10 = 0;
              uVar8 = XGetSectionSize(iVar6);
              param_2 = (ushort *)NtWriteFile(param_4,0,0,0,local_1c,iVar7,uVar8,uVar10);
              XFreeSectionByHandle(iVar6);
            }
          }
          NtClose(param_4);
        }
      }
      if (-1 < (int)param_2) {
        if (param_6 != -1) {
          param_2 = (ushort *)FUN_002f7a93(param_6,acStack_16d + 1,0x104,"\\TitleImage.xbx");
        }
        if ((-1 < (int)param_2) && (local_20 != -1)) {
          param_2 = (ushort *)FUN_002f7a93(local_20,acStack_16d + 1,0x104,"\\SaveImage.xbx");
        }
      }
    }
    NtClose(local_8);
    if (-1 < (int)param_2) {
      param_2 = (ushort *)IoCreateSymbolicLink(param_1,local_28);
    }
    return (int)param_2;
  }
  return (int)param_2;
}
