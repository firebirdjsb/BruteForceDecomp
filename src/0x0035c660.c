/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 92F3AC31FA092B8EAA560EA902EDBA70E10F4646FE4306E18EB0F0C56824D17D
 * Entry: 0x0035c660, Ghidra index: 13208, label: FUN_0035c660
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0035c660(int *param_1,int *param_2,int param_3)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 *puVar12;
  uint *puVar13;
  byte local_29;
  uint local_28;
  byte *local_18;
  uint *local_10;
  
  if (*param_1 == param_1[1]) {
    uVar7 = param_1[10];
    puVar13 = (uint *)*param_2;
    iVar3 = param_2[1];
    local_28 = param_2[2];
    uVar11 = param_2[3];
    bVar5 = (byte)uVar7;
    if (uVar11 < uVar7) {
      local_28 = *puVar13 << ((byte)uVar11 & 0x1f) | local_28;
      uVar10 = *puVar13 >> (bVar5 - (byte)uVar11 & 0x1f);
      iVar6 = 0x20 - uVar7;
      puVar13 = puVar13 + 1;
    }
    else {
      uVar10 = local_28 >> (bVar5 & 0x1f);
      iVar6 = -uVar7;
    }
    uVar11 = uVar11 + iVar6;
    local_28 = 0xffffffffU >> (0x20 - bVar5 & 0x1f) & local_28;
    local_18 = (byte *)param_1[0xb];
    if (local_28 == 0) {
      *param_1 = (int)(local_18 + 4);
      param_1[1] = (int)local_18;
    }
    else {
      *param_1 = (int)local_18;
      param_1[1] = (int)(local_18 + local_28);
      uVar7 = param_1[8];
      iVar6 = param_1[9];
      uVar4 = *(uint *)(param_3 + 0x180);
      if (uVar11 == 0) {
        uVar8 = *puVar13;
        local_10 = puVar13 + 1;
        uVar11 = 0x1f;
      }
      else {
        uVar11 = uVar11 - 1;
        uVar8 = uVar10;
        local_10 = puVar13;
      }
      uVar10 = uVar8 >> 1;
      if ((uVar8 & 1) != 0) {
        local_28 = -local_28 - 0x14;
      }
      uVar8 = 0xffffffff >> (0x20U - (char)uVar7 & 0x1f);
      puVar13 = local_10;
      do {
        uVar9 = *(uint *)(param_3 + 0x100 + uVar4 * 4);
        bVar5 = 0x20 - (char)uVar9;
        if (uVar11 < uVar9) {
          bVar5 = *(byte *)((0xffffffffU >> (bVar5 & 0x1f) &
                            (*puVar13 << ((byte)uVar11 & 0x1f) | uVar10)) +
                           *(int *)(param_3 + 0x140 + uVar4 * 4));
          local_29 = *(byte *)(uVar4 * 0x10 + param_3 + (bVar5 & 0xf));
          bVar5 = bVar5 >> 4;
          uVar4 = (uint)bVar5;
          if (uVar11 < uVar4) {
            uVar10 = *puVar13 >> (bVar5 - (byte)uVar11 & 0x1f);
            uVar11 = uVar11 + (0x20 - uVar4);
            puVar13 = local_10 + 1;
            local_10 = puVar13;
          }
          else {
            uVar10 = uVar10 >> bVar5;
            uVar11 = uVar11 - uVar4;
            puVar13 = local_10;
          }
        }
        else {
          bVar5 = *(byte *)((0xffffffffU >> (bVar5 & 0x1f) & uVar10) +
                           *(int *)(param_3 + 0x140 + uVar4 * 4));
          local_29 = *(byte *)(uVar4 * 0x10 + param_3 + (bVar5 & 0xf));
          bVar5 = bVar5 >> 4;
          uVar10 = uVar10 >> bVar5;
          uVar11 = uVar11 - bVar5;
        }
        uVar4 = (uint)local_29;
        if (uVar11 < uVar7) {
          bVar1 = *(byte *)(((*puVar13 << ((byte)uVar11 & 0x1f) | uVar10) & uVar8) + iVar6);
          bVar5 = *(byte *)((bVar1 & 0xf) + 0x10 + (int)param_1);
          bVar1 = bVar1 >> 4;
          uVar9 = (uint)bVar1;
          if (uVar11 < uVar9) {
            uVar10 = *puVar13 >> (bVar1 - (byte)uVar11 & 0x1f);
            uVar11 = uVar11 + (0x20 - uVar9);
            puVar13 = puVar13 + 1;
            local_10 = puVar13;
          }
          else {
            uVar10 = uVar10 >> bVar1;
            uVar11 = uVar11 - uVar9;
          }
        }
        else {
          bVar5 = *(byte *)((uVar8 & uVar10) + iVar6);
          bVar1 = bVar5 >> 4;
          bVar5 = *(byte *)((bVar5 & 0xf) + 0x10 + (int)param_1);
          uVar10 = uVar10 >> bVar1;
          uVar11 = uVar11 - bVar1;
        }
        *local_18 = local_29 << 4 | bVar5;
        local_18 = local_18 + 1;
        local_28 = local_28 - 1;
      } while (0 < (int)local_28);
      if ((int)local_28 < -0x16) {
        uVar2 = *(undefined1 *)param_1[0xb];
        puVar12 = (undefined4 *)param_1[0xb];
        for (uVar7 = -local_28 - 0x15 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *puVar12 = CONCAT22(CONCAT11(uVar2,uVar2),CONCAT11(uVar2,uVar2));
          puVar12 = puVar12 + 1;
        }
        for (uVar7 = -local_28 - 0x15 & 3; puVar13 = local_10, uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined1 *)puVar12 = uVar2;
          puVar12 = (undefined4 *)((int)puVar12 + 1);
        }
      }
      *(uint *)(param_3 + 0x180) = uVar4;
    }
    *param_2 = (int)puVar13;
    param_2[1] = iVar3;
    param_2[2] = uVar10;
    param_2[3] = uVar11;
  }
  return;
}
