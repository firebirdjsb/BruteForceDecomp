/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4362A809993C2D583C00290D90B37DC8956108ED20B44081991CB0C2ADC95A97
 * Entry: 0x0035c120, Ghidra index: 13207, label: FUN_0035c120
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00387f9c;
void FUN_0035c120(int *param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint local_24;
  uint *local_20;
  uint *local_10;
  
  if (*param_1 == param_1[1]) {
    uVar5 = param_1[10];
    local_10 = (uint *)*param_2;
    iVar2 = param_2[1];
    uVar10 = param_2[2];
    uVar11 = param_2[3];
    bVar4 = (byte)uVar5;
    if (uVar11 < uVar5) {
      local_24 = 0xffffffffU >> (0x20 - bVar4 & 0x1f) &
                 (*local_10 << ((byte)uVar11 & 0x1f) | uVar10);
      uVar10 = *local_10 >> (bVar4 - (byte)uVar11 & 0x1f);
      iVar8 = 0x20 - uVar5;
      local_10 = local_10 + 1;
    }
    else {
      local_24 = 0xffffffffU >> (0x20 - bVar4 & 0x1f) & uVar10;
      uVar10 = uVar10 >> (bVar4 & 0x1f);
      iVar8 = -uVar5;
    }
    uVar11 = uVar11 + iVar8;
    if (local_24 == 0) {
      *param_1 = param_1[0xb] + 4;
      param_1[1] = param_1[0xb];
    }
    else {
      local_20 = (uint *)param_1[0xb];
      *param_1 = (int)local_20;
      param_1[1] = (int)((int)local_20 + local_24);
      if (uVar11 == 0) {
        uVar5 = *local_10;
        local_10 = local_10 + 1;
        uVar11 = 0x1f;
      }
      else {
        uVar11 = uVar11 - 1;
        uVar5 = uVar10;
      }
      uVar10 = uVar5 >> 1;
      if ((uVar5 & 1) == 0) {
        bVar4 = *(byte *)(param_1 + 8);
        iVar8 = param_1[9];
        uVar5 = 0xffffffff >> (0x20 - bVar4 & 0x1f);
        bVar3 = 0;
        do {
          if (uVar11 < bVar4) {
            bVar1 = *(byte *)(((*local_10 << ((byte)uVar11 & 0x1f) | uVar10) & uVar5) + iVar8);
            bVar7 = *(byte *)((bVar1 & 0xf) + 0x10 + (int)param_1);
            bVar1 = bVar1 >> 4;
            uVar6 = (uint)bVar1;
            if (uVar11 < uVar6) {
              uVar10 = *local_10 >> (bVar1 - (byte)uVar11 & 0x1f);
              iVar9 = 0x20 - uVar6;
              local_10 = local_10 + 1;
            }
            else {
              uVar10 = uVar10 >> bVar1;
              iVar9 = -uVar6;
            }
          }
          else {
            bVar7 = *(byte *)((uVar5 & uVar10) + iVar8);
            bVar1 = bVar7 >> 4;
            bVar7 = *(byte *)((bVar7 & 0xf) + 0x10 + (int)param_1);
            uVar10 = uVar10 >> bVar1;
            iVar9 = -(uint)bVar1;
          }
          uVar11 = uVar11 + iVar9;
          if (bVar7 < 0xc) {
            *(byte *)local_20 = bVar7;
            local_20 = (uint *)((int)local_20 + 1);
            local_24 = local_24 - 1;
            bVar3 = bVar7;
          }
          else {
            bVar7 = (&DAT_00387f9c)[bVar7];
            local_24 = local_24 - bVar7;
            do {
              *local_20 = CONCAT22(CONCAT11(bVar3,bVar3),CONCAT11(bVar3,bVar3));
              local_20 = local_20 + 1;
              bVar7 = bVar7 - 4;
            } while (bVar7 != 0);
          }
        } while (local_24 != 0);
      }
      else {
        bVar4 = (byte)uVar10;
        if (uVar11 < 4) {
          uVar10 = *local_10 >> (4 - (byte)uVar11 & 0x1f);
          bVar4 = (char)*local_10 << ((byte)uVar11 & 0x1f) | bVar4;
          uVar11 = uVar11 + 0x1c;
          local_10 = local_10 + 1;
        }
        else {
          uVar10 = uVar5 >> 5;
          uVar11 = uVar11 - 4;
        }
        for (uVar5 = local_24 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *local_20 = CONCAT22(CONCAT11(bVar4,bVar4),CONCAT11(bVar4,bVar4)) & 0xf0f0f0f;
          local_20 = local_20 + 1;
        }
        for (local_24 = local_24 & 3; local_24 != 0; local_24 = local_24 - 1) {
          *(byte *)local_20 = bVar4 & 0xf;
          local_20 = (uint *)((int)local_20 + 1);
        }
      }
    }
    *param_2 = (int)local_10;
    param_2[1] = iVar2;
    param_2[2] = uVar10;
    param_2[3] = uVar11;
  }
  return;
}
