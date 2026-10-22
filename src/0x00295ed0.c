/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 40E0E28AB9539E22CC4019627037E48167658264A165D8081677225139CB2154
 * Entry: 0x00295ed0, Ghidra index: 9333, label: FUN_00295ed0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469888;
extern char s___100s__last_token_read_____50s__00404560[];
extern char s_unfinished_long_string_00404454[];
extern uint32_t switchD_00295eed_caseD_5b[];
undefined4 FUN_00295ed0(void)

{
  byte *pbVar1;
  byte bVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint *unaff_ESI;
  int iVar7;
  char *pcVar8;
  undefined1 auStack_54 [84];
  
  iVar7 = 0;
LAB_00295ed8:
  uVar4 = *unaff_ESI;
  switch(uVar4) {
  default:
    goto LAB_00295f29;
  case 10:
    FUN_0029d580(10);
    FUN_00295c60();
    goto LAB_00295ed8;
  case 0x5b:
    goto switchD_00295eed_caseD_5b;
  case 0x5d:
    break;
  case 0xffffffff:
    FUN_0029d580(0);
    pcVar8 = (char *)(*(int *)(DAT_00469888 + 0x20) + *(int *)(DAT_00469888 + 0x1c));
    FUN_002953d0();
    if (*pcVar8 == '\0') {
      pcVar8 = s_<eof>_00404598;
    }
    FUN_00295370(s___100s__last_token_read_____50s__00404560,s_unfinished_long_string_00404454,
                 pcVar8,unaff_ESI[7],auStack_54);
    return 0x11d;
  }
  FUN_0029d580(uVar4);
  *(int *)unaff_ESI[6] = *(int *)unaff_ESI[6] + -1;
  piVar3 = (int *)unaff_ESI[6];
  if (*piVar3 < 0) {
    uVar4 = (*(code *)piVar3[2])(piVar3);
  }
  else {
    uVar4 = (uint)*(byte *)piVar3[1];
    piVar3[1] = (int)((byte *)piVar3[1] + 1);
  }
  *unaff_ESI = uVar4;
  if (uVar4 != 0x5d) goto LAB_00295ed8;
  if (iVar7 == 0) {
    FUN_0029d580(0x5d);
    *(int *)unaff_ESI[6] = *(int *)unaff_ESI[6] + -1;
    piVar3 = (int *)unaff_ESI[6];
    if (*piVar3 < 0) {
      uVar4 = (*(code *)piVar3[2])(piVar3);
    }
    else {
      uVar4 = (uint)*(byte *)piVar3[1];
      piVar3[1] = (int)((byte *)piVar3[1] + 1);
    }
    iVar7 = DAT_00469888;
    *unaff_ESI = uVar4;
    iVar5 = (*(int *)(iVar7 + 0x28) - *(int *)(iVar7 + 0x20)) + -4;
    pbVar1 = (byte *)(*(int *)(iVar7 + 0x1c) + 2 + *(int *)(iVar7 + 0x20));
    if (iVar5 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = (int)((uint)*pbVar1 * iVar5) % 0x1f;
    }
    uVar4 = FUN_00294640(pbVar1,iVar5,*(int *)(iVar7 + 0x60) + iVar6 * 0xc);
    unaff_ESI[4] = uVar4;
    return 0x11c;
  }
  iVar7 = iVar7 + -1;
  uVar4 = 0x5d;
LAB_00295f29:
  FUN_0029d580(uVar4);
  *(int *)unaff_ESI[6] = *(int *)unaff_ESI[6] + -1;
  piVar3 = (int *)unaff_ESI[6];
  if (*piVar3 < 0) {
    uVar4 = (*(code *)piVar3[2])(piVar3);
    *unaff_ESI = uVar4;
  }
  else {
    bVar2 = *(byte *)piVar3[1];
    piVar3[1] = (int)((byte *)piVar3[1] + 1);
    *unaff_ESI = (uint)bVar2;
  }
  goto LAB_00295ed8;
switchD_00295eed_caseD_5b:
  FUN_0029d580(uVar4);
  *(int *)unaff_ESI[6] = *(int *)unaff_ESI[6] + -1;
  piVar3 = (int *)unaff_ESI[6];
  if (*piVar3 < 0) {
    uVar4 = (*(code *)piVar3[2])(piVar3);
  }
  else {
    uVar4 = (uint)*(byte *)piVar3[1];
    piVar3[1] = (int)((byte *)piVar3[1] + 1);
  }
  *unaff_ESI = uVar4;
  if (uVar4 != 0x5b) goto LAB_00295ed8;
  iVar7 = iVar7 + 1;
  uVar4 = 0x5b;
  goto LAB_00295f29;
}
