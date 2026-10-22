/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CC74015227A92774806260A6750CE6585FC4FE1066B401AA074C52D92678A324
 * Entry: 0x00342562, Ghidra index: 12691, label: FUN_00342562
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004b1398;
void FUN_00342562(char *param_1,int *param_2,int param_3)

{
  uint uVar1;
  byte bVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  byte *pbVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  byte *pbVar10;
  undefined4 *puVar11;
  byte *pbVar12;
  bool bVar13;
  undefined4 auStackY_370 [4];
  undefined4 local_340;
  undefined1 local_33c [20];
  undefined1 local_328 [20];
  undefined1 local_314 [4];
  undefined4 local_310 [183];
  char *local_34;
  undefined4 *local_30;
  int local_2c;
  undefined4 *local_24;
  undefined4 *local_20;
  undefined1 *local_1c;
  undefined1 *local_18;
  undefined4 *local_14;
  undefined4 *local_10;
  int local_c;
  uint local_8;
  
  pbVar10 = (byte *)0x0;
  local_8 = 0;
  local_c = 0;
  local_2c = 0;
  local_34 = param_1;
  if (*param_1 == '\0') {
    return;
  }
  local_10 = local_310;
  local_18 = local_328;
  local_1c = local_33c;
  local_24 = (undefined4 *)&stack0xfffffca4;
  puVar9 = &local_340;
  local_14 = puVar9;
  local_20 = auStackY_370;
  param_1 = local_314;
  do {
    if (*local_34 == '<') {
      if (pbVar10 != (byte *)0x0) {
LAB_00342820:
        *(undefined4 *)(param_3 + 0x208) = 0x80151918;
        return;
      }
      *local_34 = '\0';
      pbVar10 = (byte *)(local_34 + 1);
      if (*pbVar10 == 0) goto LAB_00342820;
    }
    else if (*local_34 == '>') {
      if (pbVar10 == (byte *)0x0) goto LAB_00342820;
      *local_34 = '\0';
      if (*pbVar10 == 0x2f) {
        pbVar10 = pbVar10 + 1;
        if (local_8 == 0) goto LAB_00342820;
        pbVar5 = (byte *)puVar9[-0xd];
        pbVar12 = pbVar10;
        do {
          bVar2 = *pbVar12;
          bVar13 = bVar2 < *pbVar5;
          if (bVar2 != *pbVar5) {
LAB_00342629:
            iVar6 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
            goto LAB_0034262e;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar12[1];
          bVar13 = bVar2 < pbVar5[1];
          if (bVar2 != pbVar5[1]) goto LAB_00342629;
          pbVar12 = pbVar12 + 2;
          pbVar5 = pbVar5 + 2;
        } while (bVar2 != 0);
        iVar6 = 0;
LAB_0034262e:
        if (iVar6 != 0) goto LAB_00342820;
LAB_00342742:
        if (local_c != 0) {
          if (local_8 == param_2[1]) {
            if (*(int *)(param_3 + 4) == 0) {
              FUN_00342480(param_2,param_3,&local_340,&local_c);
            }
            else {
              FUN_00341c77(param_2,param_3,&local_340,&local_c);
            }
            if (local_c == 0) {
              return;
            }
            local_c = 0;
            param_2[4] = 0;
          }
          else if ((local_8 - param_2[1] == 1) && ((uint)param_2[4] < (uint)param_2[3])) {
            puVar7 = (undefined4 *)(param_2[4] * 0x34 + param_2[2]);
            iVar6 = *(int *)(param_1 + -0x34);
            *puVar7 = pbVar10;
            puVar7[0xb] = iVar6;
            puVar11 = local_20;
            puVar9 = puVar7;
            if (iVar6 != 0) {
              for (; iVar6 != 0; iVar6 = iVar6 + -1) {
                puVar9[1] = *puVar11;
                puVar11 = puVar11 + 1;
                puVar9 = puVar9 + 1;
              }
              puVar9 = local_24;
              puVar11 = puVar7 + 6;
              for (uVar8 = puVar7[0xb] & 0x3fffffff; uVar8 != 0; uVar8 = uVar8 - 1) {
                *puVar11 = *puVar9;
                puVar9 = puVar9 + 1;
                puVar11 = puVar11 + 1;
              }
              for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
                *(undefined1 *)puVar11 = *(undefined1 *)puVar9;
                puVar9 = (undefined4 *)((int)puVar9 + 1);
                puVar11 = (undefined4 *)((int)puVar11 + 1);
              }
            }
            puVar7[0xc] = local_10[-0xd];
            param_2[4] = param_2[4] + 1;
          }
        }
        local_8 = local_8 - 1;
        local_14 = local_14 + -0xd;
        param_1 = param_1 + -0x34;
        local_1c = local_1c + -0x34;
        local_20 = local_20 + -0xd;
        local_18 = local_18 + -0x34;
        local_24 = local_24 + -0xd;
        local_10 = local_10 + -0xd;
      }
      else {
        if (local_34[-1] == '/') {
          local_34[-1] = '\0';
          local_2c = 1;
        }
        if (0xe < local_8) goto LAB_00342820;
        *puVar9 = pbVar10;
        puVar4 = local_18;
        puVar3 = local_1c;
        do {
          pbVar5 = pbVar10;
          pbVar10 = pbVar5;
          if (*pbVar5 == 0) goto LAB_00342682;
          pbVar10 = pbVar5 + 1;
          bVar2 = *pbVar10;
        } while ((((bVar2 != 0x20) && (bVar2 != 9)) && (bVar2 != 0xd)) && (bVar2 != 10));
        *pbVar10 = 0;
        pbVar5 = pbVar5 + 2;
        pbVar10 = pbVar5;
LAB_00342682:
        do {
          bVar2 = *pbVar5;
          pbVar5 = pbVar5 + 1;
        } while (bVar2 != 0);
        *local_10 = pbVar5;
        FUN_00341d7a(pbVar10,puVar3,puVar4,5,param_1);
        iVar6 = __stricmp(*local_14,&DAT_004b1398);
        if (iVar6 != 0) {
          local_8 = local_8 + 1;
          local_14 = local_14 + 0xd;
          param_1 = param_1 + 0x34;
          local_1c = local_1c + 0x34;
          local_20 = local_20 + 0xd;
          local_18 = local_18 + 0x34;
          local_24 = local_24 + 0xd;
          local_10 = local_10 + 0xd;
          if (local_8 == param_2[1]) {
            uVar8 = 0;
            if (local_8 != 0) {
              local_30 = &local_340;
              do {
                uVar1 = uVar8 + 1;
                iVar6 = FUN_00342002(*local_30,*(undefined4 *)(*param_2 + uVar8 * 4),&local_340,0,
                                     uVar1);
                if (iVar6 == 0) break;
                local_30 = local_30 + 0xd;
                uVar8 = uVar1;
              } while (uVar1 < local_8);
            }
            if (uVar8 == local_8) {
              local_c = 1;
            }
          }
        }
        if (local_2c != 0) {
          local_2c = 0;
          goto LAB_00342742;
        }
      }
      pbVar10 = (byte *)0x0;
      puVar9 = local_14;
    }
    local_34 = local_34 + 1;
    if (*local_34 == '\0') {
      return;
    }
  } while( true );
}
