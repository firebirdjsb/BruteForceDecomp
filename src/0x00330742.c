/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0C24BB8709A8B09311A36D0FA0CDE0F7496EE6581C081CD7485AB759B207F26D
 * Entry: 0x00330742, Ghidra index: 12367, label: XoUpdateLaunchNewImageInternal
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040dd4c;
extern uint32_t DAT_0040f5a4;
undefined4
XONLINES__XoUpdateLaunchNewImageInternal(char *param_1,uint *param_2,byte param_3,char *param_4)

{
  char cVar1;
  int iVar2;
  uint *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  char *pcVar8;
  char *pcVar9;
  uint *puVar10;
  int unaff_FS_OFFSET;
  char *pcVar11;
  undefined1 local_2f0 [360];
  char local_188 [360];
  undefined1 local_20 [8];
  undefined4 local_18;
  undefined1 *local_14;
  undefined4 local_10;
  undefined1 local_c [4];
  int local_8;
  
  puVar3 = param_2;
  pcVar8 = param_1;
  if (param_1 == (char *)0x0) {
    param_4 = (char *)0x0;
    pcVar8 = (char *)0x0;
    if ((param_2 != (uint *)0x0) && (5 < *param_2)) {
      puVar10 = param_2 + 5;
      for (iVar5 = 0x2fb; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar10 = 0;
        puVar10 = puVar10 + 1;
      }
      if (*param_2 == 8) {
        param_2[4] = 0xa0c;
        FUN_00330f89(param_2 + 0x283);
      }
      else {
        param_2[4] = 0;
      }
      if ((param_3 & 1) != 0) {
        FUN_00330554(puVar3);
      }
      RtlInitAnsiString(local_c,"\\Device\\Harddisk0\\partition2\\XODash\\xonlinedash.xbe");
      local_18 = 0;
      local_14 = local_c;
      local_10 = 0x40;
      iVar5 = NtOpenFile(&param_1,0x80100000,&local_18,local_20,1,0x10);
      if (iVar5 < 0) {
        RtlInitAnsiString(local_c,"\\Device\\Cdrom0\\XODash\\xonlinedash.xbe");
        local_18 = 0;
        local_14 = local_c;
        local_10 = 0x40;
        iVar5 = NtOpenFile(&param_1,0x80100000,&local_18,local_20,1,0x10);
        if (iVar5 < 0) goto LAB_00330847;
        param_4 = "\\Device\\Cdrom0\\XODASH";
      }
      else {
        param_4 = "\\Device\\Harddisk0\\partition2\\XODash";
      }
      pcVar8 = "xonlinedash.xbe";
      NtClose(param_1);
    }
LAB_00330847:
    puVar3 = param_2;
    if (DAT_0040f5a4 != 0) {
      FUN_00330066();
    }
    uVar4 = FUN_002f2759(pcVar8,param_4,(uint)(puVar3 != (uint *)0x0) * 2 + -1,
                         XBE_CERTIFICATE_HEADER_00010180.TitleID,puVar3);
    return uVar4;
  }
  local_8 = 0;
  param_1 = (char *)XBE_CERTIFICATE_HEADER_00010180.TitleID;
  uVar4 = 1;
  FUN_003305cb(local_2f0,0x168);
  cVar1 = *pcVar8;
  if ((((cVar1 == 'D') || (cVar1 == 'd')) && (pcVar8[1] == ':')) && (pcVar8[2] == '\\')) {
    pcVar8 = pcVar8 + 3;
    puVar6 = local_2f0;
    local_8 = 1;
    pcVar9 = pcVar8;
LAB_00330959:
    uVar7 = param_4;
    if (param_2 == (uint *)0x0) {
      uVar7 = 0xffffffff;
    }
    iVar5 = FUN_002f2614(pcVar8,puVar6,uVar4,uVar7,param_1,param_2);
    if ((local_8 == 0) || (param_2 != (uint *)0x0)) {
      FUN_0033065d(local_2f0,pcVar9);
    }
    if (-1 < iVar5) {
      if (DAT_0040f5a4 != 0) {
        FUN_00330066();
      }
      iVar2 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x20) + 0x250);
      if (iVar2 != 0) {
        (**(code **)(iVar2 + 0x14))(2,0);
      }
      HalReturnToFirmware(2);
    }
    uVar4 = RtlNtStatusToDosError(iVar5);
  }
  else {
    if (((((cVar1 == 'T') || (cVar1 == 't')) &&
         ((pcVar8[1] == ':' && ((pcVar8[2] == '\\' && (pcVar8[3] == '$')))))) &&
        ((pcVar8[4] == 'U' || (pcVar8[4] == 'u')))) && (pcVar8[5] == '\\')) {
      pcVar9 = pcVar8 + 6;
      pcVar11 = "\\Device\\Harddisk0\\Partition1\\TDATA\\%08x\\$u\\%s";
      pcVar8 = param_1;
LAB_0033093b:
      iVar5 = FUN_0033df31(local_188,0x168,pcVar11,pcVar8,pcVar9);
      if (-1 < iVar5) {
        puVar6 = (undefined1 *)0x0;
        pcVar8 = local_188;
        uVar4 = 0;
        goto LAB_00330959;
      }
    }
    else if (((param_3 & 2) != 0) &&
            ((((cVar1 == 'Y' || (cVar1 == 'y')) && (pcVar8[1] == ':')) && (pcVar8[2] == '\\')))) {
      pcVar9 = pcVar8 + 3;
      pcVar8 = "\\Device\\Harddisk0\\Partition2\\";
      pcVar11 = &DAT_0040dd4c;
      goto LAB_0033093b;
    }
    uVar4 = 0x57;
  }
  return uVar4;
}
