/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4181A77683E0BCCCD90693CC06D0E7001B0B8B7D52AD3BCC55016042524E7E9F
 * Entry: 0x0027e8f0, Ghidra index: 9016, label: FUN_0027e8f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0038ccf8;
extern uint32_t DAT_003b97a0;
extern uint32_t DAT_003b97e4;
extern uint32_t DAT_003b97e8;
extern uint32_t DAT_003b97f0;
extern uint32_t DAT_003ba7f0;
extern char s_invalid_bit_length_repeat_00404eac[];
extern char s_invalid_block_type_00404f0c[];
extern char s_invalid_stored_block_lengths_00404eec[];
extern char s_too_many_length_or_distance_symb_00404ec8[];
extern uint32_t switchD_0027e94a_caseD_4[];
extern uint32_t switchD_0027e94a_caseD_5[];
extern uint32_t switchD_0027e94a_caseD_6[];
extern uint32_t switchD_0027e94a_caseD_7[];
extern uint32_t switchD_0027e94a_caseD_8[];
extern uint32_t switchD_0027e94a_caseD_9[];
void FUN_0027e8f0(uint *param_1,int *param_2,int param_3)

{
  uint *puVar1;
  uint *puVar2;
  byte *pbVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  byte *pbVar9;
  uint uVar10;
  byte *pbVar11;
  int iVar12;
  byte *local_28;
  byte *local_24;
  byte *local_20;
  byte *local_1c;
  uint local_18;
  uint uStack_14;
  uint uStack_10;
  uint uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  puVar2 = param_1;
  puVar1 = param_1 + 7;
  local_24 = (byte *)*param_2;
  local_28 = (byte *)param_2[1];
  local_20 = (byte *)param_1[0xd];
  if (local_20 < (byte *)param_1[0xc]) {
    local_1c = (byte *)param_1[0xc] + (-1 - (int)local_20);
  }
  else {
    local_1c = (byte *)(param_1[0xb] - (int)local_20);
  }
  uVar8 = *param_1;
  param_1 = (uint *)param_1[8];
  uVar10 = *puVar1;
  do {
    local_18 = uVar10;
    switch(uVar8) {
    case 0:
      for (; local_18 = uVar10, uVar10 < 3; uVar10 = uVar10 + 8) {
        if (local_28 == (byte *)0x0) goto LAB_0027f210;
        local_28 = local_28 + -1;
        param_3 = 0;
        param_1 = (uint *)((uint)param_1 | (uint)*local_24 << ((byte)uVar10 & 0x1f));
        local_24 = local_24 + 1;
      }
      puVar2[6] = (uint)param_1 & 1;
      switch(((uint)param_1 & 7) >> 1) {
      case 0:
        local_18 = uVar10 - 3 & 7;
        param_1 = (uint *)(((uint)param_1 >> 3) >> (sbyte)local_18);
        local_18 = (uVar10 - 3) - local_18;
        *puVar2 = 1;
        break;
      case 1:
        uVar8 = FUN_0028fe60(DAT_003b97e4,DAT_003b97e8,&DAT_003b97f0,&DAT_003ba7f0);
        puVar2[1] = uVar8;
        if (uVar8 != 0) {
          param_1 = (uint *)((uint)param_1 >> 3);
          local_18 = uVar10 - 3;
          *puVar2 = 6;
          break;
        }
        goto LAB_0027f31f;
      case 2:
        param_1 = (uint *)((uint)param_1 >> 3);
        local_18 = uVar10 - 3;
        *puVar2 = 3;
        break;
      case 3:
        *puVar2 = 9;
        param_2[6] = (int)s_invalid_block_type_00404f0c;
        puVar2[8] = (uint)param_1 >> 3;
        puVar2[7] = uVar10 - 3;
        param_2[1] = (int)local_28;
        iVar12 = -3;
        goto LAB_0027f0bb;
      }
      break;
    case 1:
      for (; uVar10 < 0x20; uVar10 = uVar10 + 8) {
        if (local_28 == (byte *)0x0) goto LAB_0027f210;
        local_28 = local_28 + -1;
        param_3 = 0;
        param_1 = (uint *)((uint)param_1 | (uint)*local_24 << ((byte)uVar10 & 0x1f));
        local_24 = local_24 + 1;
      }
      if (~(uint)param_1 >> 0x10 != ((uint)param_1 & 0xffff)) {
        *puVar2 = 9;
        param_2[6] = (int)s_invalid_stored_block_lengths_00404eec;
        iVar12 = -3;
        goto LAB_0027f0aa;
      }
      puVar2[1] = (uint)param_1 & 0xffff;
      local_18 = 0;
      param_1 = (uint *)0x0;
      if (puVar2[1] == 0) {
        *puVar2 = -(uint)(puVar2[6] != 0) & 7;
      }
      else {
        *puVar2 = 2;
      }
      break;
    case 2:
      if (local_28 == (byte *)0x0) {
LAB_0027f210:
        puVar2[8] = (uint)param_1;
        puVar2[7] = uVar10;
        iVar7 = *param_2;
        *param_2 = (int)local_24;
        param_2[1] = 0;
        iVar12 = param_3;
        goto LAB_0027f0c5;
      }
      if (local_1c == (byte *)0x0) {
        if (local_20 == (byte *)puVar2[0xb]) {
          local_1c = (byte *)puVar2[0xc];
          pbVar3 = (byte *)puVar2[10];
          if (pbVar3 != local_1c) {
            if (pbVar3 < local_1c) {
              local_1c = local_1c + (-1 - (int)pbVar3);
            }
            else {
              local_1c = (byte *)puVar2[0xb] + -(int)pbVar3;
            }
            local_20 = pbVar3;
            if (local_1c != (byte *)0x0) goto LAB_0027eb6e;
          }
        }
        puVar2[0xd] = (uint)local_20;
        uVar4 = FUN_0028fd20(param_2,param_3);
        local_20 = (byte *)puVar2[0xd];
        pbVar3 = (byte *)puVar2[0xc];
        if (local_20 < pbVar3) {
          local_1c = pbVar3 + (-1 - (int)local_20);
        }
        else {
          local_1c = (byte *)(puVar2[0xb] - (int)local_20);
        }
        if ((local_20 == (byte *)puVar2[0xb]) && (pbVar9 = (byte *)puVar2[10], pbVar3 != pbVar9)) {
          local_20 = pbVar9;
          if (pbVar9 < pbVar3) {
            local_1c = pbVar3 + (-1 - (int)pbVar9);
          }
          else {
            local_1c = (byte *)puVar2[0xb] + -(int)pbVar9;
          }
        }
        if (local_1c == (byte *)0x0) {
          puVar2[8] = (uint)param_1;
          puVar2[7] = uVar10;
          iVar12 = *param_2;
          param_2[1] = (int)local_28;
          *param_2 = (int)local_24;
          param_2[2] = (int)(local_24 + (param_2[2] - iVar12));
          puVar2[0xd] = (uint)local_20;
          FUN_0028fd20(param_2,uVar4);
          return;
        }
      }
LAB_0027eb6e:
      param_3 = 0;
      pbVar3 = (byte *)puVar2[1];
      if (local_28 < (byte *)puVar2[1]) {
        pbVar3 = local_28;
      }
      if (local_1c < pbVar3) {
        pbVar3 = local_1c;
      }
      pbVar9 = local_24;
      pbVar11 = local_20;
      for (uVar8 = (uint)pbVar3 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pbVar11 = *(undefined4 *)pbVar9;
        pbVar9 = pbVar9 + 4;
        pbVar11 = pbVar11 + 4;
      }
      local_20 = local_20 + (int)pbVar3;
      for (uVar8 = (uint)pbVar3 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pbVar11 = *pbVar9;
        pbVar9 = pbVar9 + 1;
        pbVar11 = pbVar11 + 1;
      }
      uVar8 = puVar2[1];
      local_24 = local_24 + (int)pbVar3;
      local_28 = local_28 + -(int)pbVar3;
      local_1c = local_1c + -(int)pbVar3;
      puVar2[1] = uVar8 - (int)pbVar3;
      if (uVar8 - (int)pbVar3 == 0) {
        *puVar2 = -(uint)(puVar2[6] != 0) & 7;
      }
      break;
    case 3:
      for (; uVar10 < 0xe; uVar10 = uVar10 + 8) {
        if (local_28 == (byte *)0x0) goto LAB_0027f235;
        local_28 = local_28 + -1;
        param_3 = 0;
        param_1 = (uint *)((uint)param_1 | (uint)*local_24 << ((byte)uVar10 & 0x1f));
        local_24 = local_24 + 1;
      }
      puVar2[1] = (uint)param_1 & 0x3fff;
      if ((0x1d < ((uint)param_1 & 0x1f)) ||
         (uVar8 = ((uint)param_1 & 0x3fff) >> 5 & 0x1f, 0x1d < uVar8)) {
        *puVar2 = 9;
        param_2[6] = (int)s_too_many_length_or_distance_symb_00404ec8;
        goto switchD_0027e94a_caseD_9;
      }
      uVar8 = (*(code *)param_2[8])(param_2[10],uVar8 + 0x102 + ((uint)param_1 & 0x1f),4);
      puVar2[3] = uVar8;
      if (uVar8 != 0) {
        param_1 = (uint *)((uint)param_1 >> 0xe);
        uVar10 = uVar10 - 0xe;
        puVar2[2] = 0;
        *puVar2 = 4;
        goto switchD_0027e94a_caseD_4;
      }
      puVar2[8] = (uint)param_1;
      puVar2[7] = uVar10;
      param_2[1] = (int)local_28;
      iVar12 = -4;
      goto LAB_0027f0bb;
    case 4:
switchD_0027e94a_caseD_4:
      if (puVar2[2] < (puVar2[1] >> 10) + 4) {
        do {
          for (; uVar10 < 3; uVar10 = uVar10 + 8) {
            if (local_28 == (byte *)0x0) {
LAB_0027f235:
              puVar2[8] = (uint)param_1;
              puVar2[7] = uVar10;
              iVar12 = *param_2;
              *param_2 = (int)local_24;
              param_2[2] = (int)(local_24 + (param_2[2] - iVar12));
              param_2[1] = 0;
              puVar2[0xd] = (uint)local_20;
              FUN_0028fd20(param_2,param_3);
              return;
            }
            local_28 = local_28 + -1;
            param_3 = 0;
            param_1 = (uint *)((uint)param_1 | (uint)*local_24 << ((byte)uVar10 & 0x1f));
            local_24 = local_24 + 1;
          }
          *(uint *)(puVar2[3] + *(int *)(&DAT_0038ccf8 + puVar2[2] * 4) * 4) = (uint)param_1 & 7;
          uVar8 = puVar2[2];
          puVar2[2] = uVar8 + 1;
          param_1 = (uint *)((uint)param_1 >> 3);
          uVar10 = uVar10 - 3;
        } while (uVar8 + 1 < (puVar2[1] >> 10) + 4);
      }
      uVar8 = puVar2[2];
      while (uVar8 < 0x13) {
        *(undefined4 *)(puVar2[3] + *(int *)(&DAT_0038ccf8 + puVar2[2] * 4) * 4) = 0;
        uVar8 = puVar2[2] + 1;
        puVar2[2] = uVar8;
      }
      puVar2[4] = 7;
      iVar12 = FUN_0028fb00(puVar2[3],puVar2 + 4,puVar2 + 5,puVar2[9]);
      if (iVar12 != 0) {
        (*(code *)param_2[9])(param_2[10],puVar2[3]);
        if (iVar12 == -3) {
          *puVar2 = 9;
        }
        puVar2[8] = (uint)param_1;
        puVar2[7] = uVar10;
        param_2[1] = (int)local_28;
        param_2[2] = (int)(local_24 + (param_2[2] - *param_2));
        *param_2 = (int)local_24;
        goto LAB_0027f0cf;
      }
      puVar2[2] = 0;
      *puVar2 = 5;
switchD_0027e94a_caseD_5:
      if (puVar2[2] < (puVar2[1] >> 5 & 0x1f) + 0x102 + (puVar2[1] & 0x1f)) {
        do {
          uVar8 = puVar2[4];
          if (uVar10 < uVar8) {
            do {
              if (local_28 == (byte *)0x0) goto LAB_0027f210;
              local_28 = local_28 + -1;
              bVar6 = (byte)uVar10;
              uVar8 = puVar2[4];
              uVar10 = uVar10 + 8;
              param_3 = 0;
              param_1 = (uint *)((uint)param_1 | (uint)*local_24 << (bVar6 & 0x1f));
              local_24 = local_24 + 1;
            } while (uVar10 < uVar8);
          }
          iVar12 = puVar2[5] + (*(uint *)(&DAT_003b97a0 + uVar8 * 4) & (uint)param_1) * 8;
          bVar6 = *(byte *)(iVar12 + 1);
          uStack_14 = (uint)bVar6;
          uStack_c = *(uint *)(iVar12 + 4);
          if (uStack_c < 0x10) {
            param_1 = (uint *)((uint)param_1 >> (bVar6 & 0x1f));
            uVar10 = uVar10 - uStack_14;
            *(uint *)(puVar2[3] + puVar2[2] * 4) = uStack_c;
            puVar2[2] = puVar2[2] + 1;
          }
          else {
            if (uStack_c == 0x12) {
              local_1c = (byte *)0x7;
            }
            else {
              local_1c = (byte *)(uStack_c - 0xe);
            }
            local_18 = (uint)(uStack_c == 0x12) * 8 + 3;
            uStack_10 = uStack_14 + (int)local_1c;
            for (; uVar10 < uStack_10; uVar10 = uVar10 + 8) {
              if (local_28 == (byte *)0x0) goto LAB_0027f235;
              local_28 = local_28 + -1;
              param_3 = 0;
              param_1 = (uint *)((uint)param_1 | (uint)*local_24 << ((byte)uVar10 & 0x1f));
              local_24 = local_24 + 1;
            }
            uVar8 = (uint)param_1 >> (bVar6 & 0x1f);
            local_18 = local_18 + (*(uint *)(&DAT_003b97a0 + (int)local_1c * 4) & uVar8);
            param_1 = (uint *)(uVar8 >> ((byte)local_1c & 0x1f));
            uVar10 = uVar10 - ((int)local_1c + uStack_14);
            uVar8 = puVar2[2];
            if ((puVar2[1] >> 5 & 0x1f) + 0x102 + (puVar2[1] & 0x1f) < local_18 + uVar8) {
LAB_0027f279:
              (*(code *)param_2[9])(param_2[10],puVar2[3]);
              *puVar2 = 9;
              param_2[6] = (int)s_invalid_bit_length_repeat_00404eac;
              puVar2[8] = (uint)param_1;
              puVar2[7] = uVar10;
              param_2[1] = (int)local_28;
              param_2[2] = (int)(local_24 + (param_2[2] - *param_2));
              *param_2 = (int)local_24;
              puVar2[0xd] = (uint)local_20;
              FUN_0028fd20(param_2,0xfffffffd);
              return;
            }
            if (uStack_c == 0x10) {
              if (uVar8 == 0) goto LAB_0027f279;
              uVar4 = *(undefined4 *)((puVar2[3] - 4) + uVar8 * 4);
            }
            else {
              uVar4 = 0;
            }
            do {
              *(undefined4 *)(puVar2[3] + uVar8 * 4) = uVar4;
              uVar8 = uVar8 + 1;
              local_18 = local_18 - 1;
            } while (local_18 != 0);
            puVar2[2] = uVar8;
            local_18 = 0;
          }
        } while (puVar2[2] < (puVar2[1] >> 5 & 0x1f) + 0x102 + (puVar2[1] & 0x1f));
      }
      puVar2[5] = 0;
      uStack_14 = 9;
      local_18 = 6;
      iVar12 = FUN_0028fba0((puVar2[1] & 0x1f) + 0x101,(puVar2[1] >> 5 & 0x1f) + 1,puVar2[3],
                            &uStack_14,&local_18,&uStack_8,&uStack_4,puVar2[9]);
      (*(code *)param_2[9])(param_2[10],puVar2[3]);
      if (iVar12 != 0) {
        if (iVar12 == -3) {
          *puVar2 = 9;
        }
        puVar2[8] = (uint)param_1;
        puVar2[7] = uVar10;
        iVar7 = *param_2;
        param_2[1] = (int)local_28;
        *param_2 = (int)local_24;
        param_2[2] = (int)(local_24 + (param_2[2] - iVar7));
        puVar2[0xd] = (uint)local_20;
        FUN_0028fd20(param_2,iVar12);
        return;
      }
      puVar5 = (undefined4 *)(*(code *)param_2[8])(param_2[10],1,0x1c);
      if (puVar5 == (undefined4 *)0x0) {
LAB_0027f31f:
        iVar12 = -4;
LAB_0027f0aa:
        puVar2[7] = uVar10;
        puVar2[8] = (uint)param_1;
        param_2[1] = (int)local_28;
        goto LAB_0027f0bb;
      }
      *(undefined1 *)(puVar5 + 4) = (undefined1)uStack_14;
      *(undefined1 *)((int)puVar5 + 0x11) = (undefined1)local_18;
      *puVar5 = 0;
      puVar5[5] = uStack_8;
      puVar5[6] = uStack_4;
      puVar2[1] = (uint)puVar5;
      *puVar2 = 6;
switchD_0027e94a_caseD_6:
      puVar2[8] = (uint)param_1;
      puVar2[7] = uVar10;
      param_2[1] = (int)local_28;
      iVar12 = *param_2;
      *param_2 = (int)local_24;
      param_2[2] = (int)(local_24 + (param_2[2] - iVar12));
      puVar2[0xd] = (uint)local_20;
      iVar12 = FUN_0028fea0(param_3);
      if (iVar12 != 1) goto LAB_0027f37e;
      param_3 = 0;
      (*(code *)param_2[9])(param_2[10],puVar2[1]);
      local_24 = (byte *)*param_2;
      local_28 = (byte *)param_2[1];
      param_1 = (uint *)puVar2[8];
      local_18 = puVar2[7];
      local_20 = (byte *)puVar2[0xd];
      if (local_20 < (byte *)puVar2[0xc]) {
        local_1c = (byte *)puVar2[0xc] + (-1 - (int)local_20);
      }
      else {
        local_1c = (byte *)(puVar2[0xb] - (int)local_20);
      }
      if (puVar2[6] != 0) {
        *puVar2 = 7;
        goto switchD_0027e94a_caseD_7;
      }
      *puVar2 = 0;
      break;
    case 5:
      goto switchD_0027e94a_caseD_5;
    case 6:
      goto switchD_0027e94a_caseD_6;
    case 7:
switchD_0027e94a_caseD_7:
      uVar10 = local_18;
      puVar2[0xd] = (uint)local_20;
      iVar12 = FUN_0028fd20(param_2,param_3);
      local_20 = (byte *)puVar2[0xd];
      if ((byte *)puVar2[0xc] != local_20) {
        puVar2[8] = (uint)param_1;
        puVar2[7] = uVar10;
        iVar7 = *param_2;
        param_2[1] = (int)local_28;
        *param_2 = (int)local_24;
        param_2[2] = (int)(local_24 + (param_2[2] - iVar7));
        puVar2[0xd] = (uint)local_20;
LAB_0027f37e:
        FUN_0028fd20(param_2,iVar12);
        return;
      }
      *puVar2 = 8;
    case 8:
      goto switchD_0027e94a_caseD_8;
    case 9:
switchD_0027e94a_caseD_9:
      puVar2[8] = (uint)param_1;
      puVar2[7] = uVar10;
      param_2[1] = (int)local_28;
      iVar12 = *param_2;
      *param_2 = (int)local_24;
      param_2[2] = (int)(local_24 + (param_2[2] - iVar12));
      puVar2[0xd] = (uint)local_20;
      FUN_0028fd20(param_2,0xfffffffd);
      return;
    default:
      iVar12 = -2;
      goto LAB_0027f0aa;
    }
    uVar8 = *puVar2;
    uVar10 = local_18;
  } while( true );
switchD_0027e94a_caseD_8:
  puVar2[8] = (uint)param_1;
  puVar2[7] = uVar10;
  param_2[1] = (int)local_28;
  iVar12 = 1;
LAB_0027f0bb:
  iVar7 = *param_2;
  *param_2 = (int)local_24;
LAB_0027f0c5:
  param_2[2] = (int)(local_24 + (param_2[2] - iVar7));
LAB_0027f0cf:
  puVar2[0xd] = (uint)local_20;
  FUN_0028fd20(param_2,iVar12);
  return;
}
