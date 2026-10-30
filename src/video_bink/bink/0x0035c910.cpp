/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F414335371C3601AFFADAC1F7CBFC2EDF65C14CAF3C8D7F561F5F912E0A3BA70
 * Entry: 0x0035c910, Ghidra index: 13209, label: FUN_0035c910
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0035c910(int *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  uint local_14;
  uint *local_10;
  
  if (*param_1 == param_1[1]) {
    local_10 = (uint *)*param_2;
    iVar1 = param_2[1];
    local_14 = param_2[2];
    uVar11 = param_2[3];
    uVar7 = param_1[10];
    bVar5 = (byte)uVar7;
    if (uVar11 < uVar7) {
      local_14 = *local_10 << ((byte)uVar11 & 0x1f) | local_14;
      uVar10 = *local_10 >> (bVar5 - (byte)uVar11 & 0x1f);
      iVar6 = 0x20 - uVar7;
      local_10 = local_10 + 1;
    }
    else {
      uVar10 = local_14 >> (bVar5 & 0x1f);
      iVar6 = -uVar7;
    }
    uVar11 = uVar11 + iVar6;
    local_14 = 0xffffffffU >> (0x20 - bVar5 & 0x1f) & local_14;
    if (local_14 == 0) {
      *param_1 = param_1[0xb] + 4;
      param_1[1] = param_1[0xb];
      puVar8 = local_10;
    }
    else {
      puVar12 = (uint *)param_1[0xb];
      *param_1 = (int)puVar12;
      param_1[1] = (int)((int)puVar12 + local_14);
      if (uVar11 == 0) {
        uVar7 = *local_10;
        local_10 = local_10 + 1;
        uVar11 = 0x1f;
      }
      else {
        uVar11 = uVar11 - 1;
        uVar7 = uVar10;
      }
      uVar10 = uVar7 >> 1;
      if ((uVar7 & 1) == 0) {
        uVar7 = param_1[8];
        iVar6 = param_1[9];
        uVar9 = 0xffffffff >> (0x20U - (char)uVar7 & 0x1f);
        puVar8 = local_10;
        do {
          if (uVar11 < uVar7) {
            uVar2 = *puVar8;
            bVar5 = *(byte *)(((uVar2 << ((byte)uVar11 & 0x1f) | uVar10) & uVar9) + iVar6);
            *(undefined1 *)puVar12 = *(undefined1 *)((bVar5 & 0xf) + 0x10 + (int)param_1);
            bVar5 = bVar5 >> 4;
            uVar4 = (uint)bVar5;
            if (uVar11 < uVar4) {
              uVar10 = uVar2 >> (bVar5 - (byte)uVar11 & 0x1f);
              uVar11 = uVar11 + (0x20 - uVar4);
              puVar8 = local_10 + 1;
              local_10 = puVar8;
            }
            else {
              uVar10 = uVar10 >> bVar5;
              uVar11 = uVar11 - uVar4;
              puVar8 = local_10;
            }
          }
          else {
            bVar5 = *(byte *)((uVar9 & uVar10) + iVar6);
            bVar3 = bVar5 >> 4;
            *(undefined1 *)puVar12 = *(undefined1 *)((bVar5 & 0xf) + 0x10 + (int)param_1);
            uVar10 = uVar10 >> bVar3;
            uVar11 = uVar11 - bVar3;
          }
          puVar12 = (uint *)((int)puVar12 + 1);
          local_14 = local_14 - 1;
        } while (local_14 != 0);
      }
      else {
        if (uVar11 < 4) {
          uVar7 = *local_10;
          bVar5 = (byte)uVar11;
          uVar9 = uVar7 << (bVar5 & 0x1f) | uVar10;
          uVar11 = uVar11 + 0x1c;
          local_10 = local_10 + 1;
          uVar7 = uVar7 >> (4 - bVar5 & 0x1f);
        }
        else {
          uVar11 = uVar11 - 4;
          uVar7 = uVar7 >> 5;
          uVar9 = uVar10;
        }
        uVar10 = uVar7;
        bVar5 = (byte)uVar9;
        for (uVar7 = local_14 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *puVar12 = CONCAT22(CONCAT11(bVar5,bVar5),CONCAT11(bVar5,bVar5)) & 0xf0f0f0f;
          puVar12 = puVar12 + 1;
        }
        for (local_14 = local_14 & 3; puVar8 = local_10, local_14 != 0; local_14 = local_14 - 1) {
          *(byte *)puVar12 = bVar5 & 0xf;
          puVar12 = (uint *)((int)puVar12 + 1);
        }
      }
    }
    *param_2 = (int)puVar8;
    param_2[1] = iVar1;
    param_2[2] = uVar10;
    param_2[3] = uVar11;
  }
  return;
}
