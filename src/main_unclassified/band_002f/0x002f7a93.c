/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 70C27D9464958AA45B117DE9114839F976F397BFEFA9BB809BC208F50A3EF209
 * Entry: 0x002f7a93, Ghidra index: 10937, label: FUN_002f7a93
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_002f7a93(undefined4 param_1,char *param_2,int param_3,undefined4 param_4)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 local_58 [40];
  int local_30;
  int local_2c;
  undefined4 local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  undefined1 local_14 [8];
  undefined1 local_c [8];
  
  pcVar3 = param_2;
  pcVar4 = param_2;
  do {
    cVar2 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar2 != '\0');
  pcVar1 = param_2 + ((int)pcVar4 - (int)(param_2 + 1));
  XAPILIB__lstrcpynA(pcVar1,param_4,param_3 - ((int)pcVar4 - (int)(param_2 + 1)));
  RtlInitAnsiString(local_14,pcVar3);
  local_1c = local_14;
  local_20 = 0;
  local_18 = 0x40;
  iVar5 = NtCreateFile(&param_2,0x40100000,&local_20,local_c,0,4,1,3,0x22);
  *pcVar1 = '\0';
  if (iVar5 < 0) {
    if (iVar5 == -0x3fffffcb) {
      iVar5 = 0;
    }
  }
  else {
    iVar5 = NtQueryInformationFile(param_2,local_c,local_58,0x38,0x22);
    if (((-1 < iVar5) && (local_30 == 0)) && (local_2c == 0)) {
      iVar6 = XAPILIB__XLoadSectionByHandle(param_1);
      if (iVar6 != 0) {
        uVar8 = 0;
        uVar7 = XAPILIB__XGetSectionSize(param_1);
        iVar5 = NtWriteFile(param_2,0,0,0,local_c,iVar6,uVar7,uVar8);
        XAPILIB__XFreeSectionByHandle(param_1);
      }
    }
    NtClose(param_2);
  }
  return iVar5;
}
