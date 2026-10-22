/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 52380958BCC4B5B43372C5C7F38C2213B96E0C6DBD07958AE3B19D7BE8E83BCF
 * Entry: 0x001e3850, Ghidra index: 6772, label: FUN_001e3850
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004075a0;
extern uint32_t DAT_00469b58;
void FUN_001e3850(void)

{
  char *pcVar1;
  char cVar2;
  int in_EAX;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  char *pcVar8;
  undefined4 *puVar9;
  char local_3a5;
  undefined1 local_3a4 [4];
  undefined4 *local_3a0;
  undefined4 local_39c;
  undefined1 local_398 [4];
  undefined4 local_394;
  undefined1 local_390 [4];
  uint local_38c;
  undefined4 local_37c;
  uint local_378;
  uint local_370;
  undefined4 local_360;
  uint local_35c;
  undefined4 local_358;
  undefined1 local_354;
  undefined1 local_350 [320];
  int local_210;
  undefined4 local_208;
  undefined1 local_100 [256];
  
  puVar3 = (undefined4 *)FUN_001e4530(local_3a4);
  local_39c = 0;
  local_3a0 = puVar3;
  iVar4 = XAPILIB__XFindFirstContent(&DAT_004075a0,0,local_350);
  if (iVar4 == -1) goto LAB_001e39f4;
  piVar6 = *(int **)(in_EAX + 4);
  if (piVar6 == *(int **)(in_EAX + 8)) {
LAB_001e38b3:
    cVar2 = FUN_001e3bc0(in_EAX,local_208,&local_3a5);
    if (cVar2 == '\0') {
      if (local_3a5 != '\0') {
        (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x270))(local_100);
      }
    }
    else {
      iVar5 = FUN_001e46e0(local_3a4,puVar3,puVar3[1],local_350);
      FUN_001e4770();
      puVar3[1] = iVar5;
      **(int **)(iVar5 + 4) = iVar5;
      puVar3 = local_3a0;
    }
  }
  else {
    do {
      if (*piVar6 == local_210) break;
      piVar6 = piVar6 + 0x10;
    } while (piVar6 != *(int **)(in_EAX + 8));
    if (piVar6 == *(int **)(in_EAX + 8)) goto LAB_001e38b3;
  }
  iVar5 = XAPILIB__XFindNextContent(iVar4,local_350);
  while (iVar5 != 0) {
    piVar6 = *(int **)(in_EAX + 4);
    if (piVar6 == *(int **)(in_EAX + 8)) {
LAB_001e3963:
      cVar2 = FUN_001e3bc0(in_EAX,local_208,&local_3a5);
      if (cVar2 == '\0') {
        if (local_3a5 != '\0') {
          (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x270))(local_100);
        }
      }
      else {
        iVar5 = FUN_001e46e0(local_3a4,local_3a0,puVar3[1],local_350);
        FUN_001e4770();
        puVar3[1] = iVar5;
        **(int **)(iVar5 + 4) = iVar5;
        puVar3 = local_3a0;
      }
    }
    else {
      do {
        if (*piVar6 == local_210) break;
        piVar6 = piVar6 + 0x10;
      } while (piVar6 != *(int **)(in_EAX + 8));
      if (piVar6 == *(int **)(in_EAX + 8)) goto LAB_001e3963;
    }
    iVar5 = XAPILIB__XFindNextContent(iVar4,local_350);
  }
  XAPILIB__XFindClose(iVar4);
LAB_001e39f4:
  if (puVar3 == (undefined4 *)0x0) {
    puVar9 = (undefined4 *)0x0;
  }
  else {
    puVar9 = (undefined4 *)*puVar3;
  }
  if (puVar9 != puVar3) {
    do {
      local_394 = puVar9[0x52];
      local_378 = 7;
      local_37c = 0;
      local_38c = local_38c & 0xffff0000;
      local_35c = 0xf;
      local_360 = 0;
      local_370 = local_370 & 0xffffff00;
      uVar7 = FUN_002eaa70(puVar9 + 0x96);
      FUN_000876a0(local_390,uVar7);
      pcVar1 = (char *)(puVar9 + 0x55);
      if (pcVar1 == (char *)0x0) {
        FUN_0001f5a0(0,0xffffffff);
      }
      else {
        pcVar8 = pcVar1;
        do {
          cVar2 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar2 != '\0');
        FUN_0001fed0(pcVar1,(int)pcVar8 - ((int)puVar9 + 0x155));
      }
      iVar4 = *(int *)(in_EAX + 4);
      local_358 = puVar9[0x54];
      local_354 = 1;
      if ((iVar4 == 0) ||
         ((uint)(*(int *)(in_EAX + 0xc) - iVar4 >> 6) <= (uint)(*(int *)(in_EAX + 8) - iVar4 >> 6)))
      {
        FUN_001c85f0(in_EAX,*(undefined4 *)(in_EAX + 8),1);
      }
      else {
        iVar4 = *(int *)(in_EAX + 8);
        FUN_001dc500(iVar4,1);
        *(int *)(in_EAX + 8) = iVar4 + 0x40;
      }
      iVar4 = *(int *)(in_EAX + 0x14);
      iVar5 = FUN_001e45c0(in_EAX + 0x10,iVar4,*(undefined4 *)(iVar4 + 4),&local_394);
      FUN_001e4640();
      *(int *)(iVar4 + 4) = iVar5;
      **(int **)(iVar5 + 4) = iVar5;
      if (0xf < local_35c) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(local_370);
      }
      local_35c = 0xf;
      local_360 = 0;
      local_370 = local_370 & 0xffffff00;
      if (7 < local_378) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(local_38c);
      }
      puVar9 = (undefined4 *)*puVar9;
      local_378 = 7;
      local_37c = 0;
      local_38c = local_38c & 0xffff0000;
      puVar3 = local_3a0;
    } while (puVar9 != local_3a0);
  }
  if (puVar3 == (undefined4 *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *puVar3;
  }
  FUN_001298b0(local_398,uVar7,puVar3);
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(local_3a0);
}
