/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9388518065F7A84C0ACCC156DDE1F4F25F3E090EB307B74F4E2D0A85938CF4DD
 * Entry: 0x002930e0, Ghidra index: 9267, label: FUN_002930e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469888;
extern char s__return__00404acc[];
extern char s_undefined_operation_004048d8[];
extern char s_unexpected_type_for_concatenatio_004048b4[];
extern char s_unexpected_type_in_arithmetic_op_0040490c[];
extern uint32_t switchD_00293170_caseD_10[];
extern uint32_t switchD_00293170_caseD_3c[];
extern uint32_t switchD_00293170_caseD_3e[];
int FUN_002930e0(int param_1,int param_2)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  int in_EAX;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  int iVar13;
  undefined4 *puVar14;
  bool bVar15;
  byte *local_30;
  
  piVar7 = DAT_00469888;
  iVar3 = *(int *)(in_EAX + 8);
  iVar13 = *(int *)(in_EAX + 0x10);
  if (DAT_00469888[0xe] != 0) {
    FUN_0028a5e0(0);
  }
  FUN_0028a460();
  if (*(byte *)(iVar13 + 1) < 0x80) {
    FUN_0028a4f0();
  }
  else {
    if ((uint)DAT_00469888[0x1d] <= (uint)DAT_00469888[0x1e]) {
      FUN_002942f0(0);
    }
    FUN_00293090();
  }
  local_30 = (byte *)(iVar13 + 2);
LAB_00293157:
  bVar2 = *local_30;
  iVar13 = 0;
  local_30 = local_30 + 1;
joined_r0x00293168:
  if (0x3f < bVar2) goto LAB_00293157;
  switch(bVar2) {
  case 0:
    *piVar7 = param_2 * 0x10 + piVar7[1];
    goto LAB_00293abf;
  case 1:
    bVar2 = *local_30;
    break;
  case 2:
    bVar2 = *local_30;
    pbVar1 = local_30 + 1;
    local_30 = local_30 + 1;
    FUN_0028a8b0(*pbVar1,bVar2);
  case 0x3f:
    local_30 = local_30 + 1;
    goto LAB_00293157;
  case 3:
    bVar2 = *local_30;
    FUN_0028a8b0(local_30[1],0xff);
    break;
  case 4:
    bVar2 = *local_30;
    local_30 = local_30 + 1;
    uVar8 = (uint)bVar2;
    do {
      *(undefined4 *)*piVar7 = 0xfffffffa;
      bVar15 = uVar8 != 0;
      *piVar7 = *piVar7 + 0x10;
      uVar8 = uVar8 - 1;
    } while (bVar15);
    goto LAB_00293157;
  case 5:
    bVar2 = *local_30;
    local_30 = local_30 + 1;
    *piVar7 = *piVar7 + (uint)bVar2 * -0x10;
    goto LAB_00293157;
  case 6:
    iVar13 = iVar13 + (uint)*local_30 * 0x100;
    local_30 = local_30 + 1;
  case 7:
    bVar2 = *local_30;
    *(undefined4 *)*piVar7 = 0xffffffff;
    local_30 = local_30 + 1;
    *(double *)(*piVar7 + 8) = (double)(int)(iVar13 + (uint)bVar2);
    iVar10 = *piVar7 + 0x10;
LAB_00293228:
    *piVar7 = iVar10;
    goto LAB_00293157;
  case 8:
    iVar13 = iVar13 + (uint)*local_30 * 0x100;
    local_30 = local_30 + 1;
  case 9:
    bVar2 = *local_30;
    *(undefined4 *)*piVar7 = 0xffffffff;
    local_30 = local_30 + 1;
    *(double *)(*piVar7 + 8) = (double)(int)-(iVar13 + (uint)bVar2);
    *piVar7 = *piVar7 + 0x10;
    goto LAB_00293157;
  case 10:
    iVar13 = iVar13 + (uint)*local_30 * 0x100;
    local_30 = local_30 + 1;
  case 0xb:
    puVar11 = (undefined4 *)*piVar7;
    puVar14 = (undefined4 *)((iVar13 + (uint)*local_30) * 0x10 + iVar3);
    *puVar11 = *puVar14;
    puVar11[1] = puVar14[1];
    puVar11[2] = puVar14[2];
    puVar11[3] = puVar14[3];
    local_30 = local_30 + 1;
    *piVar7 = *piVar7 + 0x10;
    goto LAB_00293157;
  case 0xc:
    puVar14 = (undefined4 *)((*local_30 + 2) * 0x10 + param_1);
    puVar11 = (undefined4 *)*piVar7;
    *puVar11 = *puVar14;
    puVar11[1] = puVar14[1];
    puVar11[2] = puVar14[2];
    puVar11[3] = puVar14[3];
    local_30 = local_30 + 1;
    *piVar7 = *piVar7 + 0x10;
    goto LAB_00293157;
  case 0xd:
    puVar11 = (undefined4 *)*piVar7;
    puVar14 = (undefined4 *)(((uint)*local_30 + param_2) * 0x10 + piVar7[1]);
    *puVar11 = *puVar14;
    puVar11[1] = puVar14[1];
    puVar11[2] = puVar14[2];
    puVar11[3] = puVar14[3];
    local_30 = local_30 + 1;
    *piVar7 = *piVar7 + 0x10;
    goto LAB_00293157;
  case 0xe:
    local_30 = local_30 + 1;
  case 0xf:
    local_30 = local_30 + 1;
    FUN_00292ba0();
    goto LAB_00293157;
  case 0x10:
    goto switchD_00293170_caseD_10;
  case 0x11:
    iVar13 = iVar13 + (uint)*local_30 * 0x100;
    local_30 = local_30 + 1;
  case 0x12:
    puVar11 = (undefined4 *)*piVar7;
    puVar14 = (undefined4 *)((iVar13 + (uint)*local_30) * 0x10 + iVar3);
    *puVar11 = *puVar14;
    puVar11[1] = puVar14[1];
    puVar11[2] = puVar14[2];
    puVar11[3] = puVar14[3];
    local_30 = local_30 + 1;
    *piVar7 = *piVar7 + 0x10;
switchD_00293170_caseD_10:
    FUN_00292910();
    goto LAB_00293157;
  case 0x13:
    iVar13 = iVar13 + (uint)*local_30 * 0x100;
    local_30 = local_30 + 1;
  case 0x14:
    bVar2 = *local_30;
    puVar11 = (undefined4 *)*piVar7;
    local_30 = local_30 + 1;
    uVar9 = puVar11[-4];
    uVar4 = puVar11[-3];
    uVar5 = puVar11[-2];
    uVar6 = puVar11[-1];
    puVar14 = (undefined4 *)((iVar13 + (uint)bVar2) * 0x10 + iVar3);
    *puVar11 = *puVar14;
    puVar11[1] = puVar14[1];
    puVar11[2] = puVar14[2];
    puVar11[3] = puVar14[3];
    *piVar7 = *piVar7 + 0x10;
    FUN_00292910();
    puVar11 = (undefined4 *)*piVar7;
    *puVar11 = uVar9;
    puVar11[1] = uVar4;
    puVar11[2] = uVar5;
    puVar11[3] = uVar6;
    *piVar7 = *piVar7 + 0x10;
    goto LAB_00293157;
  case 0x15:
    local_30 = local_30 + 1;
  case 0x16:
    local_30 = local_30 + 1;
    if ((uint)DAT_00469888[0x1d] <= (uint)DAT_00469888[0x1e]) {
      FUN_002942f0(0);
    }
    uVar9 = FUN_00293d60();
    *(undefined4 *)(*piVar7 + 8) = uVar9;
    *(undefined4 *)*piVar7 = 0xfffffffd;
    *piVar7 = *piVar7 + 0x10;
    goto LAB_00293157;
  case 0x17:
    bVar2 = *local_30;
    iVar13 = *piVar7;
    *piVar7 = iVar13 + -0x10;
    local_30 = local_30 + 1;
    puVar11 = (undefined4 *)(((uint)bVar2 + param_2) * 0x10 + piVar7[1]);
    *puVar11 = *(undefined4 *)(iVar13 + -0x10);
    puVar11[1] = *(undefined4 *)(iVar13 + -0xc);
    puVar11[2] = *(undefined4 *)(iVar13 + -8);
    puVar11[3] = *(undefined4 *)(iVar13 + -4);
    goto LAB_00293157;
  case 0x18:
    iVar13 = iVar13 + (uint)*local_30 * 0x100;
    local_30 = local_30 + 1;
  case 0x19:
    bVar2 = *local_30;
    local_30 = local_30 + 1;
    FUN_00292c90(*(undefined4 *)((iVar13 + (uint)bVar2) * 0x10 + 8 + iVar3));
    goto LAB_00293157;
  case 0x1a:
    FUN_00292a00();
    *piVar7 = *piVar7 + -0x20;
    goto LAB_00293157;
  case 0x1b:
    FUN_00292a00();
    local_30 = local_30 + 1;
    goto LAB_00293157;
  case 0x1c:
    local_30 = local_30 + 1;
  case 0x1d:
    pbVar1 = local_30 + 1;
    local_30 = local_30 + 2;
    for (uVar8 = (uint)*pbVar1; uVar8 != 0; uVar8 = uVar8 - 1) {
      *piVar7 = *piVar7 + -0x10;
      FUN_00293f40();
    }
    goto LAB_00293157;
  case 0x1e:
    bVar2 = *local_30;
    local_30 = local_30 + 1;
    uVar8 = (uint)bVar2;
    do {
      FUN_00293f40();
      *piVar7 = *piVar7 + -0x20;
      bVar15 = uVar8 != 0;
      uVar8 = uVar8 - 1;
    } while (bVar15);
    goto LAB_00293157;
  case 0x1f:
    iVar13 = 1;
  case 0x20:
    iVar10 = *piVar7;
    if (*(int *)(iVar10 + -0x20) == *(int *)(iVar10 + -0x10)) {
      uVar8 = FUN_002955a0();
    }
    else {
      uVar8 = 0;
    }
    if (iVar13 != 0) {
      uVar8 = (uint)(uVar8 == 0);
    }
    *piVar7 = iVar10 + -0x10;
    *(uint *)(iVar10 + -0x20) = (-(uint)(uVar8 != 0) & 5) - 6;
    iVar13 = *piVar7;
    *(undefined4 *)(iVar13 + -8) = 0;
    *(undefined4 *)(iVar13 + -4) = 0x3ff00000;
    goto LAB_00293157;
  case 0x21:
    FUN_00292f40(0xffffffff,0xfffffffa,0xfffffffa,0xb);
    goto LAB_00293157;
  case 0x22:
    FUN_00292f40(0xffffffff,0xffffffff,0xfffffffa,0xc);
    goto LAB_00293157;
  case 0x23:
    FUN_00292f40(0xfffffffa,0xfffffffa,0xffffffff,0xd);
    goto LAB_00293157;
  case 0x24:
    FUN_00292f40(0xfffffffa,0xffffffff,0xffffffff,0xe);
    goto LAB_00293157;
  case 0x25:
    iVar13 = *piVar7;
    if (((*(int *)(iVar13 + -0x10) == -1) || (iVar10 = FUN_00292690(), iVar10 == 0)) &&
       ((*(int *)(iVar13 + -0x20) == -1 || (iVar10 = FUN_00292690(), iVar10 == 0)))) {
      *(double *)(iVar13 + -0x18) = *(double *)(iVar13 + -8) + *(double *)(iVar13 + -0x18);
      *piVar7 = *piVar7 + -0x10;
    }
    else {
      FUN_00292dd0(s_unexpected_type_in_arithmetic_op_0040490c);
    }
    goto LAB_00293157;
  case 0x26:
    iVar13 = *piVar7;
    if (((*(int *)(iVar13 + -0x10) == -1) || (iVar10 = FUN_00292690(), iVar10 == 0)) &&
       ((*(int *)(iVar13 + -0x20) == -1 || (iVar10 = FUN_00292690(), iVar10 == 0)))) {
      *(double *)(iVar13 + -0x18) = *(double *)(iVar13 + -0x18) - *(double *)(iVar13 + -8);
      *piVar7 = *piVar7 + -0x10;
    }
    else {
      FUN_00292dd0(s_unexpected_type_in_arithmetic_op_0040490c);
    }
    goto LAB_00293157;
  case 0x27:
    iVar13 = *piVar7;
    if (((*(int *)(iVar13 + -0x10) == -1) || (iVar10 = FUN_00292690(), iVar10 == 0)) &&
       ((*(int *)(iVar13 + -0x20) == -1 || (iVar10 = FUN_00292690(), iVar10 == 0)))) {
      *(double *)(iVar13 + -0x18) = *(double *)(iVar13 + -8) * *(double *)(iVar13 + -0x18);
      *piVar7 = *piVar7 + -0x10;
    }
    else {
      FUN_00292dd0(s_unexpected_type_in_arithmetic_op_0040490c);
    }
    goto LAB_00293157;
  case 0x28:
    iVar13 = *piVar7;
    if (((*(int *)(iVar13 + -0x10) == -1) || (iVar10 = FUN_00292690(), iVar10 == 0)) &&
       ((*(int *)(iVar13 + -0x20) == -1 || (iVar10 = FUN_00292690(), iVar10 == 0)))) {
      *(double *)(iVar13 + -0x18) = *(double *)(iVar13 + -0x18) / *(double *)(iVar13 + -8);
      *piVar7 = *piVar7 + -0x10;
    }
    else {
      FUN_00292dd0(s_unexpected_type_in_arithmetic_op_0040490c);
    }
    goto LAB_00293157;
  case 0x29:
    FUN_00292dd0(s_undefined_operation_004048d8);
    goto LAB_00293157;
  case 0x2a:
    iVar13 = *piVar7;
    if (((*(int *)(iVar13 + -0x20) == -2) || (iVar10 = FUN_00292790(), iVar10 == 0)) &&
       ((*(int *)(iVar13 + -0x10) == -2 || (iVar10 = FUN_00292790(), iVar10 == 0)))) {
      uVar9 = FUN_002925d0(*(undefined4 *)(iVar13 + -8));
      *(undefined4 *)(iVar13 + -0x18) = uVar9;
      *piVar7 = *piVar7 + -0x10;
    }
    else {
      FUN_00292dd0(s_unexpected_type_for_concatenatio_004048b4);
    }
    bVar15 = (uint)DAT_00469888[0x1e] < (uint)DAT_00469888[0x1d];
    goto LAB_0029380f;
  case 0x2b:
    if ((*(int *)(*piVar7 + -0x10) == -1) || (iVar13 = FUN_00292690(), iVar13 == 0)) {
      *(double *)(*piVar7 + -8) = -*(double *)(*piVar7 + -8);
    }
    else {
      *(undefined4 *)*piVar7 = 0xfffffffa;
      *piVar7 = *piVar7 + 0x10;
      FUN_00292dd0(s_unexpected_type_in_arithmetic_op_0040490c);
    }
    goto LAB_00293157;
  case 0x2c:
    *(uint *)(*piVar7 + -0x10) = ((*(int *)(*piVar7 + -0x10) != -6) - 1 & 5) - 6;
    iVar13 = *piVar7;
    *(undefined4 *)(iVar13 + -8) = 0;
    *(undefined4 *)(iVar13 + -4) = 0x3ff00000;
    goto LAB_00293157;
  case 0x2d:
    iVar13 = iVar13 + (uint)*local_30 * 0x100;
    local_30 = local_30 + 1;
  case 0x2e:
    bVar2 = *local_30;
    iVar10 = *piVar7 + -0x10;
    local_30 = local_30 + 1;
    if (*(int *)(*piVar7 + -0x10) == -6) goto LAB_00293228;
    local_30 = local_30 + iVar13 + (uint)bVar2;
    goto LAB_00293157;
  case 0x2f:
    iVar13 = iVar13 + (uint)*local_30 * 0x100;
    local_30 = local_30 + 1;
  case 0x30:
    bVar2 = *local_30;
    iVar10 = *piVar7 + -0x10;
    local_30 = local_30 + 1;
    if (*(int *)(*piVar7 + -0x10) != -6) goto LAB_00293228;
    local_30 = local_30 + iVar13 + (uint)bVar2;
    goto LAB_00293157;
  case 0x31:
    iVar13 = iVar13 + (uint)*local_30 * 0x100;
    local_30 = local_30 + 1;
  case 0x32:
    local_30 = local_30 + (uint)*local_30 + iVar13 + 1;
    goto LAB_00293157;
  case 0x33:
    iVar13 = iVar13 + (uint)*local_30 * 0x100;
    local_30 = local_30 + 1;
  case 0x34:
    bVar2 = *local_30;
    iVar10 = *piVar7;
    *piVar7 = iVar10 + -0x10;
    local_30 = local_30 + 1;
    if (*(int *)(iVar10 + -0x10) == -6) {
      local_30 = local_30 + iVar13 + (uint)bVar2;
    }
    goto LAB_00293157;
  case 0x35:
    iVar13 = iVar13 + (uint)*local_30 * 0x100;
    local_30 = local_30 + 1;
  case 0x36:
    bVar2 = *local_30;
    iVar10 = *piVar7;
    *piVar7 = iVar10 + -0x10;
    local_30 = local_30 + 1;
    if (*(int *)(iVar10 + -0x10) != -6) {
      local_30 = local_30 + -(iVar13 + (uint)bVar2);
    }
    goto LAB_00293157;
  case 0x37:
    iVar13 = iVar13 + (uint)*local_30 * 0x100;
    local_30 = local_30 + 1;
  case 0x38:
    bVar2 = *local_30;
    iVar10 = *piVar7;
    *piVar7 = iVar10 + -0x10;
    local_30 = local_30 + 1;
    if (*(int *)(iVar10 + -0x10) == -6) {
      local_30 = local_30 + -(iVar13 + (uint)bVar2);
    }
    goto LAB_00293157;
  case 0x39:
    iVar13 = iVar13 + (uint)*local_30 * 0x100;
    local_30 = local_30 + 1;
  case 0x3a:
    puVar14 = (undefined4 *)((iVar13 + (uint)*local_30) * 0x10 + iVar3);
    puVar11 = (undefined4 *)*piVar7;
    *puVar11 = *puVar14;
    puVar11[1] = puVar14[1];
    puVar11[2] = puVar14[2];
    puVar11[3] = puVar14[3];
    *piVar7 = *piVar7 + 0x10;
    FUN_00292870();
    local_30 = local_30 + 2;
    bVar15 = (uint)DAT_00469888[0x1e] < (uint)DAT_00469888[0x1d];
LAB_0029380f:
    if (!bVar15) {
      FUN_002942f0(0);
    }
    goto LAB_00293157;
  case 0x3b:
    iVar13 = iVar13 + (uint)*local_30 * 0x100;
    local_30 = local_30 + 1;
  case 0x3c:
    goto switchD_00293170_caseD_3c;
  case 0x3d:
    iVar13 = iVar13 + (uint)*local_30 * 0x100;
    local_30 = local_30 + 1;
  case 0x3e:
    goto switchD_00293170_caseD_3e;
  }
  param_2 = param_2 + (uint)bVar2;
LAB_00293abf:
  piVar7 = DAT_00469888;
  if (DAT_00469888[0xe] != 0) {
    iVar3 = DAT_00469888[3];
    iVar13 = DAT_00469888[4];
    iVar10 = DAT_00469888[5];
    iVar12 = *DAT_00469888 - DAT_00469888[1] >> 4;
    DAT_00469888[3] = iVar12;
    piVar7[4] = iVar12;
    piVar7[5] = 0;
    (*(code *)piVar7[0xe])(0,s__return__00404acc,0);
    piVar7 = DAT_00469888;
    *DAT_00469888 = iVar12 * 0x10 + DAT_00469888[1];
    piVar7[3] = iVar3;
    piVar7[4] = iVar13;
    piVar7[5] = iVar10;
  }
  return param_2;
switchD_00293170_caseD_3e:
  bVar2 = local_30[1];
  iVar13 = (iVar13 + (uint)*local_30) * 0x10000;
  local_30 = local_30 + 2;
  goto joined_r0x00293168;
switchD_00293170_caseD_3c:
  bVar2 = *local_30;
  local_30 = local_30 + 1;
  iVar10 = param_2 * 0x10;
  if (*(int *)(piVar7[1] + -0x10 + iVar10) != -0xb) {
    FUN_0028a540((*piVar7 - piVar7[1] >> 4) - param_2);
    param_2 = param_2 + 1;
    iVar10 = param_2 * 0x10;
    *(undefined4 *)(piVar7[1] + -0x10 + iVar10) = 0xfffffff5;
  }
  *(uint *)(piVar7[1] + -8 + iVar10) = iVar13 + (uint)bVar2;
  if (DAT_00469888[0xf] != 0) {
    FUN_0028a580(iVar13 + (uint)bVar2);
  }
  goto LAB_00293157;
}
