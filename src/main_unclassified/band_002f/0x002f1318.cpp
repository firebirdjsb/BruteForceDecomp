/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AAF43E63B3E56383A933C99710FCCCA7078303D444791B0D9AE909391DB295A6
 * Entry: 0x002f1318, Ghidra index: 10779, label: FUN_002f1318
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003b6c30;
extern uint32_t DAT_003b6c34;
extern uint32_t *PTR_DAT_003b6c3c;
extern uint32_t switchD_002f1375_caseD_a[];
undefined4
FUN_002f1318(undefined2 *param_1,int *param_2,byte *param_3,undefined4 param_4,int param_5,
            int param_6,int param_7)

{
  uint uVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  undefined4 uVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  int iVar10;
  char local_58 [23];
  char local_41;
  undefined2 local_3c;
  undefined2 uStack_3a;
  undefined2 uStack_38;
  undefined4 local_36;
  ushort local_32;
  undefined4 local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  int local_14;
  char *local_10;
  int local_c;
  uint local_8;
  
  local_10 = local_58;
  local_2c = 0;
  local_1c = 1;
  local_8 = 0;
  local_14 = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_c = 0;
  local_18 = 0;
  for (pbVar7 = param_3;
      (((bVar5 = *pbVar7, bVar5 == 0x20 || (bVar5 == 9)) || (bVar5 == 10)) || (bVar5 == 0xd));
      pbVar7 = pbVar7 + 1) {
  }
  iVar3 = 4;
  iVar10 = 0;
LAB_002f1369:
  iVar4 = 1;
  bVar5 = *pbVar7;
  pbVar8 = pbVar7 + 1;
  pbVar9 = param_3;
  switch(iVar10) {
  case 0:
    if (('0' < (char)bVar5) && ((char)bVar5 < ':')) {
LAB_002f1386:
      iVar10 = 3;
      goto LAB_002f1596;
    }
    if (bVar5 == DAT_003b6c34) goto LAB_002f1395;
    if (bVar5 == 0x2b) {
      local_2c = 0;
      iVar10 = 2;
      pbVar7 = pbVar8;
    }
    else if (bVar5 == 0x2d) {
      local_2c = 0x8000;
      iVar10 = 2;
      pbVar7 = pbVar8;
    }
    else {
      iVar10 = iVar4;
      pbVar7 = pbVar8;
      if (bVar5 != 0x30) goto LAB_002f13b1;
    }
    goto LAB_002f1369;
  case 1:
    local_14 = 1;
    if (('0' < (char)bVar5) && ((char)bVar5 < ':')) goto LAB_002f1386;
    iVar10 = iVar3;
    pbVar7 = pbVar8;
    if (bVar5 != DAT_003b6c34) {
      if ((bVar5 == 0x2b) || (bVar5 == 0x2d)) goto LAB_002f140f;
      iVar10 = iVar4;
      if (bVar5 != 0x30) goto LAB_002f13f4;
    }
    goto LAB_002f1369;
  case 2:
    if (('0' < (char)bVar5) && ((char)bVar5 < ':')) goto LAB_002f1386;
    if (bVar5 == DAT_003b6c34) {
LAB_002f1395:
      iVar10 = 5;
      pbVar7 = pbVar8;
    }
    else {
      iVar10 = iVar4;
      pbVar7 = pbVar8;
      if (bVar5 != 0x30) goto LAB_002f1670;
    }
    goto LAB_002f1369;
  case 3:
    local_14 = 1;
    while( true ) {
      if (DAT_003b6c30 < 2) {
        uVar1 = (byte)PTR_DAT_003b6c3c[(uint)bVar5 * 2] & 4;
      }
      else {
        uVar1 = FUN_002eba73((uint)bVar5,4);
      }
      if (uVar1 == 0) break;
      if (local_8 < 0x19) {
        local_8 = local_8 + 1;
        pcVar2 = local_10 + 1;
        *local_10 = bVar5 - 0x30;
        local_10 = pcVar2;
      }
      else {
        local_c = local_c + 1;
      }
      bVar5 = *pbVar8;
      pbVar8 = pbVar8 + 1;
    }
    iVar10 = iVar3;
    pbVar7 = pbVar8;
    if (bVar5 != DAT_003b6c34) goto LAB_002f14f8;
    goto LAB_002f1369;
  case 4:
    local_14 = 1;
    local_28 = 1;
    if (local_8 == 0) {
      while (bVar5 == 0x30) {
        local_c = local_c + -1;
        bVar5 = *pbVar8;
        pbVar8 = pbVar8 + 1;
      }
    }
    while( true ) {
      if (DAT_003b6c30 < 2) {
        uVar1 = (byte)PTR_DAT_003b6c3c[(uint)bVar5 * 2] & 4;
      }
      else {
        uVar1 = FUN_002eba73((uint)bVar5,4);
      }
      if (uVar1 == 0) break;
      if (local_8 < 0x19) {
        local_8 = local_8 + 1;
        local_c = local_c + -1;
        pcVar2 = local_10 + 1;
        *local_10 = bVar5 - 0x30;
        local_10 = pcVar2;
      }
      bVar5 = *pbVar8;
      pbVar8 = pbVar8 + 1;
    }
LAB_002f14f8:
    if ((bVar5 == 0x2b) || (bVar5 == 0x2d)) {
LAB_002f140f:
      iVar10 = 0xb;
      pbVar7 = pbVar8 + -1;
    }
    else {
LAB_002f13f4:
      if (((char)bVar5 < 'D') ||
         (('E' < (char)bVar5 && (((char)bVar5 < 'd' || ('e' < (char)bVar5)))))) goto LAB_002f13b1;
      iVar10 = 6;
      pbVar7 = pbVar8;
    }
    goto LAB_002f1369;
  case 5:
    local_28 = 1;
    if (DAT_003b6c30 < 2) {
      uVar1 = (byte)PTR_DAT_003b6c3c[(uint)bVar5 * 2] & 4;
    }
    else {
      uVar1 = FUN_002eba73((uint)bVar5,4);
    }
    iVar10 = iVar3;
    if (uVar1 != 0) goto LAB_002f1596;
    goto LAB_002f1670;
  case 6:
    param_3 = pbVar7 + -1;
    if (((char)bVar5 < '1') || ('9' < (char)bVar5)) {
      if (bVar5 == 0x2b) goto LAB_002f15d1;
      if (bVar5 == 0x2d) goto LAB_002f15c5;
      pbVar9 = param_3;
      if (bVar5 != 0x30) goto LAB_002f1670;
LAB_002f1564:
      iVar10 = 8;
      pbVar7 = pbVar8;
      goto LAB_002f1369;
    }
    break;
  case 7:
    if (((char)bVar5 < '1') || ('9' < (char)bVar5)) {
      if (bVar5 == 0x30) goto LAB_002f1564;
      goto LAB_002f1670;
    }
    break;
  case 8:
    local_24 = 1;
    while (bVar5 == 0x30) {
      bVar5 = *pbVar8;
      pbVar8 = pbVar8 + 1;
    }
    if (((char)bVar5 < '1') || ('9' < (char)bVar5)) goto LAB_002f13b1;
    break;
  case 9:
    local_24 = 1;
    iVar3 = 0;
    goto LAB_002f15f4;
  default:
    goto switchD_002f1375_caseD_a;
  case 0xb:
    if (param_7 != 0) {
      param_3 = pbVar7;
      if (bVar5 == 0x2b) {
LAB_002f15d1:
        iVar10 = 7;
        pbVar7 = pbVar8;
      }
      else {
        pbVar9 = pbVar7;
        if (bVar5 != 0x2d) goto LAB_002f1670;
LAB_002f15c5:
        local_1c = -1;
        iVar10 = 7;
        pbVar7 = pbVar8;
      }
      goto LAB_002f1369;
    }
    iVar10 = 10;
    pbVar8 = pbVar7;
switchD_002f1375_caseD_a:
    pbVar7 = pbVar8;
    pbVar9 = pbVar8;
    if (iVar10 != 10) goto LAB_002f1369;
    goto LAB_002f1670;
  }
  iVar10 = 9;
LAB_002f1596:
  pbVar7 = pbVar8 + -1;
  goto LAB_002f1369;
LAB_002f15f4:
  if (DAT_003b6c30 < 2) {
    uVar1 = (byte)PTR_DAT_003b6c3c[(uint)bVar5 * 2] & 4;
  }
  else {
    uVar1 = FUN_002eba73((uint)bVar5,4);
  }
  if (uVar1 == 0) goto LAB_002f163c;
  iVar3 = (char)bVar5 + -0x30 + iVar3 * 10;
  if (0x1450 < iVar3) goto LAB_002f1634;
  bVar5 = *pbVar8;
  pbVar8 = pbVar8 + 1;
  goto LAB_002f15f4;
LAB_002f1634:
  iVar3 = 0x1451;
LAB_002f163c:
  while( true ) {
    local_20 = iVar3;
    if (DAT_003b6c30 < 2) {
      uVar1 = (byte)PTR_DAT_003b6c3c[(uint)bVar5 * 2] & 4;
    }
    else {
      uVar1 = FUN_002eba73((uint)bVar5,4);
    }
    if (uVar1 == 0) break;
    bVar5 = *pbVar8;
    pbVar8 = pbVar8 + 1;
    iVar3 = local_20;
  }
LAB_002f13b1:
  pbVar9 = pbVar8 + -1;
LAB_002f1670:
  *param_2 = (int)pbVar9;
  if (local_14 == 0) {
    local_18 = 4;
  }
  else {
    pcVar2 = local_10;
    if (0x18 < local_8) {
      if ('\x04' < local_41) {
        local_41 = local_41 + '\x01';
      }
      local_8 = 0x18;
      local_c = local_c + 1;
      pcVar2 = local_10 + -1;
    }
    if (local_8 != 0) {
      while (pcVar2 = pcVar2 + -1, *pcVar2 == '\0') {
        local_8 = local_8 - 1;
        local_c = local_c + 1;
      }
      FUN_002f1eda(local_58,local_8,&local_3c);
      iVar3 = local_20;
      if (local_1c < 0) {
        iVar3 = -local_20;
      }
      iVar3 = iVar3 + local_c;
      if (local_24 == 0) {
        iVar3 = iVar3 + param_5;
      }
      if (local_28 == 0) {
        iVar3 = iVar3 - param_6;
      }
      if (0x1450 < iVar3) {
        uVar6 = 0;
        local_32 = 0x7fff;
        local_36 = 0x80000000;
        local_3c = 0;
        local_18 = 2;
        goto LAB_002f1744;
      }
      if (-0x1451 < iVar3) {
        FUN_002f21ca(&local_3c,iVar3,param_4);
        uVar6 = CONCAT22(uStack_38,uStack_3a);
        goto LAB_002f1744;
      }
      local_18 = 1;
    }
  }
  local_3c = 0;
  local_32 = 0;
  local_36 = 0;
  uVar6 = 0;
LAB_002f1744:
  *(undefined4 *)(param_1 + 3) = local_36;
  *(undefined4 *)(param_1 + 1) = uVar6;
  param_1[5] = local_32 | (ushort)local_2c;
  *param_1 = local_3c;
  return local_18;
}
