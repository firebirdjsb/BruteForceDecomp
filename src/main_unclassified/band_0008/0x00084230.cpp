/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B13FA886987C65A6B31F43CEF8B36A66FAB66C2A65465448EC9E38E6D6159BE7
 * Entry: 0x00084230, Ghidra index: 1541, label: FUN_00084230
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00401f6c;
extern uint32_t DAT_00401f88;
extern char s_character__d_0040dbe8[];
void FUN_00084230(int *param_1)

{
  char *pcVar1;
  char cVar2;
  float fVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  uint uVar9;
  undefined4 *puVar10;
  int unaff_EBP;
  int unaff_ESI;
  undefined1 *puVar11;
  undefined4 uVar12;
  int iStack_70;
  int iStack_68;
  int *local_5c;
  int *local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 local_40 [4];
  int local_3c;
  undefined4 local_38;
  int *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int *piStack_c;
  int *piStack_4;
  
  local_5c = DAT_00401f6c;
  local_58 = (int *)0x0;
  puVar11 = local_40;
  local_54 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = (int *)0x0;
  iVar6 = (**(code **)(*param_1 + 0xec))(&local_30,puVar11);
  piVar5 = local_30;
  piVar4 = local_34;
  if (0 < iVar6) {
    for (; piVar4 != piVar5; piVar4 = piVar4 + 1) {
      FUN_002eaa19(&local_28,0x20,s_character__d_0040dbe8,unaff_EBP);
      unaff_EBP = unaff_EBP + 1;
      puVar10 = &local_28;
      cVar2 = (char)local_28;
      while (cVar2 != '\0') {
        pcVar1 = (char *)((int)puVar10 + 1);
        puVar10 = (undefined4 *)((int)puVar10 + 1);
        cVar2 = *pcVar1;
      }
      uVar9 = 0;
      iVar6 = 0;
      while( true ) {
        if ((*(int *)(unaff_ESI + 0x14) == 0) ||
           ((uint)(*(int *)(unaff_ESI + 0x18) - *(int *)(unaff_ESI + 0x14) >> 4) <= uVar9))
        goto LAB_00084396;
        if (*(int *)(*(int *)(unaff_ESI + 0x14) + iVar6) == iStack_68) break;
        uVar9 = uVar9 + 1;
        iVar6 = iVar6 + 0x10;
      }
      iVar6 = FUN_00077da0(3);
      if (iVar6 != 0) {
        iVar7 = *(int *)(iVar6 + 0xc);
        if (iVar7 == 1) {
          fVar3 = (float)*piVar4;
          if (*piVar4 < 0) {
            fVar3 = fVar3 + 4.2949673e+09;
          }
          *(float *)(iVar6 + 4) = fVar3;
        }
        else if (iVar7 == 2) {
          *(int *)(iVar6 + 4) = *piVar4;
        }
        else if (iVar7 == 3) {
          *(bool *)(iVar6 + 4) = *piVar4 != 0;
        }
      }
LAB_00084396:
      uVar9 = 0;
      iVar6 = 0;
      while( true ) {
        if ((*(int *)(unaff_ESI + 0x14) == 0) ||
           ((uint)(*(int *)(unaff_ESI + 0x18) - *(int *)(unaff_ESI + 0x14) >> 4) <= uVar9))
        goto LAB_000843e4;
        if (*(int *)(*(int *)(unaff_ESI + 0x14) + iVar6) == iStack_68) break;
        uVar9 = uVar9 + 1;
        iVar6 = iVar6 + 0x10;
      }
      iVar6 = FUN_00077da0(3);
      if (iVar6 != 0) {
        FUN_00077eb0(iVar6,0x3f800000);
      }
LAB_000843e4:
      local_5c = DAT_00401f88;
      uVar9 = 0;
      iVar6 = 0;
      while( true ) {
        if ((*(int *)(unaff_ESI + 0x14) == 0) ||
           ((uint)(*(int *)(unaff_ESI + 0x18) - *(int *)(unaff_ESI + 0x14) >> 4) <= uVar9))
        goto LAB_0008442a;
        if (*(int *)(*(int *)(unaff_ESI + 0x14) + iVar6) == iStack_68) break;
        uVar9 = uVar9 + 1;
        iVar6 = iVar6 + 0x10;
      }
      iVar6 = FUN_00077da0(3);
      if (iVar6 != 0) {
        FUN_00077eb0(iVar6,0);
      }
LAB_0008442a:
      param_1 = piStack_4;
    }
  }
  local_54 = 0;
  uStack_50 = 0;
  iStack_4c = 0;
  iVar6 = (**(code **)(*param_1 + 0xf0))(&local_58,&uStack_48);
  piVar5 = local_58;
  piVar4 = local_5c;
  if (iVar6 < 1) {
LAB_0008465f:
    if (local_5c != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(local_5c);
    }
    local_58 = (int *)0x0;
    local_54 = 0;
    if (iStack_4c == 0) {
      iStack_4c = 0;
      uStack_48 = 0;
      uStack_44 = 0;
      if (local_3c == 0) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(local_3c);
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(iStack_4c);
  }
joined_r0x0008447e:
  if (piVar4 != piVar5) {
    FUN_002eaa19(&local_30,0x20,s_character__d_0040dbe8,puVar11);
    puVar11 = puVar11 + 1;
    puVar10 = &local_30;
    cVar2 = (char)local_30;
    while (cVar2 != '\0') {
      pcVar1 = (char *)((int)puVar10 + 1);
      puVar10 = (undefined4 *)((int)puVar10 + 1);
      cVar2 = *pcVar1;
    }
    uVar9 = 0;
    iVar6 = 0;
    while( true ) {
      if ((*(int *)(unaff_ESI + 0x14) == 0) ||
         ((uint)(*(int *)(unaff_ESI + 0x18) - *(int *)(unaff_ESI + 0x14) >> 4) <= uVar9))
      goto LAB_00084557;
      if (*(int *)(*(int *)(unaff_ESI + 0x14) + iVar6) == iStack_70) break;
      uVar9 = uVar9 + 1;
      iVar6 = iVar6 + 0x10;
    }
    iVar6 = FUN_00077da0(3);
    if (iVar6 != 0) {
      iVar7 = *(int *)(iVar6 + 0xc);
      if (iVar7 == 1) {
        fVar3 = (float)*piVar4;
        if (*piVar4 < 0) {
          fVar3 = fVar3 + 4.2949673e+09;
        }
        *(float *)(iVar6 + 4) = fVar3;
      }
      else if (iVar7 == 2) {
        *(int *)(iVar6 + 4) = *piVar4;
      }
      else if (iVar7 == 3) {
        *(bool *)(iVar6 + 4) = *piVar4 != 0;
      }
    }
LAB_00084557:
    uVar9 = 0;
    iVar6 = 0;
    while( true ) {
      if ((*(int *)(unaff_ESI + 0x14) == 0) ||
         ((uint)(*(int *)(unaff_ESI + 0x18) - *(int *)(unaff_ESI + 0x14) >> 4) <= uVar9))
      goto LAB_000845fb;
      if (*(int *)(*(int *)(unaff_ESI + 0x14) + iVar6) == iStack_70) break;
      uVar9 = uVar9 + 1;
      iVar6 = iVar6 + 0x10;
    }
    iVar6 = FUN_00077da0(3);
    if (iVar6 != 0) {
      uVar12 = 0;
      iVar7 = 0;
      goto LAB_000845b0;
    }
    goto LAB_000845fb;
  }
  goto LAB_0008465f;
  while (iVar7 < 8) {
LAB_000845b0:
    iVar7 = iVar7 + 1;
    pbVar8 = (byte *)(**(code **)(*piStack_c + 0x130))(iVar7);
    if (((pbVar8 != (byte *)0x0) && ((*pbVar8 & 1) != 0)) && (*(int *)(pbVar8 + 0x10) == *piVar4)) {
      uVar12 = 0x3f800000;
      break;
    }
  }
  FUN_00077eb0(iVar6,uVar12);
LAB_000845fb:
  uVar9 = 0;
  iVar6 = 0;
  while( true ) {
    if ((*(int *)(unaff_ESI + 0x14) == 0) ||
       ((uint)(*(int *)(unaff_ESI + 0x18) - *(int *)(unaff_ESI + 0x14) >> 4) <= uVar9))
    goto LAB_00084646;
    if (*(int *)(*(int *)(unaff_ESI + 0x14) + iVar6) == iStack_70) break;
    uVar9 = uVar9 + 1;
    iVar6 = iVar6 + 0x10;
  }
  iVar6 = FUN_00077da0(3);
  if (iVar6 != 0) {
    FUN_00077eb0(iVar6,0);
  }
LAB_00084646:
  piVar4 = piVar4 + 1;
  goto joined_r0x0008447e;
}
