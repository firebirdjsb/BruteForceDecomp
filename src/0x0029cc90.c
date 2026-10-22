/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2C8003653D7336109CD6659876D7A6C99E606B86BA154C848260BDF44756DD38
 * Entry: 0x0029cc90, Ghidra index: 9452, label: FUN_0029cc90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003b97a0;
extern char s_invalid_distance_code_00404960[];
extern char s_invalid_literal_length_code_00404978[];
undefined4 FUN_0029cc90(int param_1,int param_2,int param_3,int param_4,int param_5,int *param_6)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  int iVar14;
  byte *pbVar15;
  uint local_14;
  undefined1 *local_10;
  byte *local_c;
  
  puVar12 = *(undefined1 **)(param_5 + 0x34);
  uVar9 = *(uint *)(param_5 + 0x20);
  pbVar15 = (byte *)*param_6;
  local_14 = param_6[1];
  uVar4 = *(uint *)(param_5 + 0x1c);
  if (puVar12 < *(undefined1 **)(param_5 + 0x30)) {
    local_10 = *(undefined1 **)(param_5 + 0x30) + (-1 - (int)puVar12);
  }
  else {
    local_10 = (undefined1 *)(*(int *)(param_5 + 0x2c) - (int)puVar12);
  }
  uVar8 = *(uint *)(&DAT_003b97a0 + param_1 * 4);
  uVar3 = *(uint *)(&DAT_003b97a0 + param_2 * 4);
  local_c = pbVar15;
  do {
    for (; uVar4 < 0x14; uVar4 = uVar4 + 8) {
      local_14 = local_14 - 1;
      uVar9 = uVar9 | (uint)*pbVar15 << ((byte)uVar4 & 0x1f);
      pbVar15 = pbVar15 + 1;
      local_c = pbVar15;
    }
    bVar1 = *(byte *)(param_3 + (uVar8 & uVar9) * 8);
    uVar11 = (uint)bVar1;
    iVar14 = param_3 + (uVar8 & uVar9) * 8;
    bVar2 = *(byte *)(iVar14 + 1);
    uVar9 = uVar9 >> (bVar2 & 0x1f);
    if (uVar11 == 0) {
LAB_0029ceb3:
      uVar4 = uVar4 - bVar2;
      *puVar12 = *(undefined1 *)(iVar14 + 4);
      puVar12 = puVar12 + 1;
      local_10 = local_10 + -1;
    }
    else {
      uVar4 = uVar4 - *(byte *)(iVar14 + 1);
      while ((bVar1 & 0x10) == 0) {
        if ((uVar11 & 0x40) != 0) {
          if ((uVar11 & 0x20) != 0) {
            uVar8 = param_6[1] - local_14;
            if (uVar4 >> 3 < param_6[1] - local_14) {
              uVar8 = uVar4 >> 3;
            }
            *(uint *)(param_5 + 0x20) = uVar9;
            *(uint *)(param_5 + 0x1c) = uVar4 + uVar8 * -8;
            iVar14 = *param_6;
            param_6[1] = uVar8 + local_14;
            *param_6 = (int)pbVar15 - uVar8;
            param_6[2] = param_6[2] + (((int)pbVar15 - uVar8) - iVar14);
            *(undefined1 **)(param_5 + 0x34) = puVar12;
            return 1;
          }
          param_6[6] = (int)s_invalid_literal_length_code_00404978;
          goto LAB_0029cfa4;
        }
        iVar5 = (*(uint *)(&DAT_003b97a0 + uVar11 * 4) & uVar9) + *(int *)(iVar14 + 4);
        bVar1 = *(byte *)(iVar14 + iVar5 * 8);
        uVar11 = (uint)bVar1;
        iVar14 = iVar14 + iVar5 * 8;
        bVar2 = *(byte *)(iVar14 + 1);
        uVar9 = uVar9 >> (bVar2 & 0x1f);
        if (uVar11 == 0) goto LAB_0029ceb3;
        uVar4 = uVar4 - *(byte *)(iVar14 + 1);
      }
      uVar11 = uVar11 & 0xf;
      uVar6 = (*(uint *)(&DAT_003b97a0 + uVar11 * 4) & uVar9) + *(int *)(iVar14 + 4);
      uVar10 = uVar9 >> (sbyte)uVar11;
      for (uVar4 = uVar4 - uVar11; uVar4 < 0xf; uVar4 = uVar4 + 8) {
        local_14 = local_14 - 1;
        uVar10 = uVar10 | (uint)*pbVar15 << ((byte)uVar4 & 0x1f);
        pbVar15 = pbVar15 + 1;
        local_c = pbVar15;
      }
      iVar14 = param_4 + (uVar3 & uVar10) * 8;
      uVar9 = uVar10 >> (*(byte *)(iVar14 + 1) & 0x1f);
      uVar4 = uVar4 - *(byte *)(iVar14 + 1);
      bVar1 = *(byte *)(param_4 + (uVar3 & uVar10) * 8);
      while ((bVar1 & 0x10) == 0) {
        if ((bVar1 & 0x40) != 0) {
          param_6[6] = (int)s_invalid_distance_code_00404960;
LAB_0029cfa4:
          uVar8 = uVar4 >> 3;
          if (param_6[1] - local_14 <= uVar4 >> 3) {
            uVar8 = param_6[1] - local_14;
          }
          *(uint *)(param_5 + 0x20) = uVar9;
          *(uint *)(param_5 + 0x1c) = uVar4 + uVar8 * -8;
          param_6[1] = uVar8 + local_14;
          iVar14 = *param_6;
          *param_6 = (int)pbVar15 - uVar8;
          param_6[2] = param_6[2] + (((int)pbVar15 - uVar8) - iVar14);
          *(undefined1 **)(param_5 + 0x34) = puVar12;
          return 0xfffffffd;
        }
        iVar5 = (*(uint *)(&DAT_003b97a0 + (uint)bVar1 * 4) & uVar9) + *(int *)(iVar14 + 4);
        pbVar7 = (byte *)(iVar14 + iVar5 * 8);
        iVar14 = iVar14 + iVar5 * 8;
        uVar9 = uVar9 >> (*(byte *)(iVar14 + 1) & 0x1f);
        uVar4 = uVar4 - *(byte *)(iVar14 + 1);
        bVar1 = *pbVar7;
      }
      uVar11 = bVar1 & 0xf;
      pbVar7 = pbVar15;
      pbVar15 = local_c;
      for (; uVar4 < uVar11; uVar4 = uVar4 + 8) {
        local_14 = local_14 - 1;
        uVar9 = uVar9 | (uint)*pbVar7 << ((byte)uVar4 & 0x1f);
        pbVar7 = pbVar15 + 1;
        pbVar15 = pbVar7;
      }
      uVar10 = (*(uint *)(&DAT_003b97a0 + uVar11 * 4) & uVar9) + *(int *)(iVar14 + 4);
      uVar9 = uVar9 >> (sbyte)uVar11;
      uVar4 = uVar4 - uVar11;
      local_10 = local_10 + -uVar6;
      if ((uint)((int)puVar12 - *(int *)(param_5 + 0x28)) < uVar10) {
        uVar10 = (*(int *)(param_5 + 0x28) - (int)puVar12) + uVar10;
        puVar13 = (undefined1 *)(*(int *)(param_5 + 0x2c) - uVar10);
        if (uVar10 < uVar6) {
          uVar6 = uVar6 - uVar10;
          do {
            *puVar12 = *puVar13;
            puVar12 = puVar12 + 1;
            puVar13 = puVar13 + 1;
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
          puVar13 = *(undefined1 **)(param_5 + 0x28);
        }
      }
      else {
        puVar13 = puVar12 + -uVar10;
        *puVar12 = *puVar13;
        puVar12[1] = puVar13[1];
        puVar12 = puVar12 + 2;
        puVar13 = puVar13 + 2;
        uVar6 = uVar6 - 2;
      }
      do {
        *puVar12 = *puVar13;
        puVar12 = puVar12 + 1;
        puVar13 = puVar13 + 1;
        uVar6 = uVar6 - 1;
        local_c = pbVar15;
      } while (uVar6 != 0);
    }
    if ((local_10 < (undefined1 *)0x102) || (local_14 < 10)) {
      uVar8 = param_6[1] - local_14;
      if (uVar4 >> 3 < param_6[1] - local_14) {
        uVar8 = uVar4 >> 3;
      }
      *(uint *)(param_5 + 0x20) = uVar9;
      *(uint *)(param_5 + 0x1c) = uVar4 + uVar8 * -8;
      iVar14 = *param_6;
      param_6[1] = uVar8 + local_14;
      *param_6 = (int)pbVar15 - uVar8;
      param_6[2] = param_6[2] + (((int)pbVar15 - uVar8) - iVar14);
      *(undefined1 **)(param_5 + 0x34) = puVar12;
      return 0;
    }
  } while( true );
}
