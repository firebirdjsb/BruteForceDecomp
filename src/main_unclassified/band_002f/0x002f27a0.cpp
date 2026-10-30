/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5E98A4D87B7D499243C895C6CB77A376F50F2252091EA03BBC6AEA099B3BF128
 * Entry: 0x002f27a0, Ghidra index: 10805, label: XLaunchNewImageA
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbe_certificate_layout.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00387478;
extern uint32_t DAT_00387480;
extern uint32_t DAT_003b68a0;
undefined4 XAPILIB__XLaunchNewImageA(char *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  char *pcVar6;
  char *pcVar7;
  undefined1 local_388 [520];
  char local_180 [360];
  undefined4 local_18;
  undefined *local_14;
  undefined4 local_10;
  ushort local_c [2];
  undefined1 *local_8;
  
  pcVar6 = param_1;
  piVar5 = &DAT_003b68a0;
  do {
    if (*piVar5 != 0) {
      uVar4 = (*(code *)*piVar5)(param_1,param_2);
      return uVar4;
    }
    piVar5 = piVar5 + 1;
  } while (piVar5 < (int *)0x3b68a8);
  if (param_1 == (char *)0x0) {
    uVar3 = (uint)(param_2 != 0) * 2;
    pcVar7 = (char *)0x0;
    pcVar6 = (char *)0x0;
    goto LAB_002f28d2;
  }
  if ((((*param_1 != 'D') && (*param_1 != 'd')) || (param_1[1] != ':')) || (param_1[2] != '\\')) {
    return 0x57;
  }
  local_180[0] = '\0';
  local_18 = 0;
  local_10 = 0x40;
  local_14 = &DAT_00387478;
  iVar2 = NtOpenSymbolicLinkObject(&param_1,&local_18);
  if (iVar2 < 0) {
LAB_002f289e:
    iVar2 = 0;
    do {
      cVar1 = (&DAT_00387480)[iVar2];
      local_180[iVar2] = cVar1;
      iVar2 = iVar2 + 1;
    } while (cVar1 != '\0');
  }
  else {
    local_8 = local_388;
    local_c[0] = 0;
    local_c[1] = 0x208;
    iVar2 = NtQuerySymbolicLinkObject(param_1,local_c,0);
    NtClose(param_1);
    if (iVar2 < 0) goto LAB_002f289e;
    uVar3 = 0x168;
    if (local_c[0] + 1 < 0x169) {
      uVar3 = local_c[0] + 1;
    }
    lstrcpynA(local_180,local_388,uVar3);
  }
  uVar3 = (uint)(param_2 != 0);
  pcVar7 = local_180;
  pcVar6 = pcVar6 + 3;
LAB_002f28d2:
  uVar4 = FUN_002f2759(pcVar6,pcVar7,uVar3 - 1,XBE_CERTIFICATE_HEADER_00010180.TitleID,param_2);
  return uVar4;
}
