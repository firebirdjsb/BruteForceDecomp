/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EC00D812A390FDC67C49394EBE169DA4039D1CFBBCFE9811BFEC07A4FF1FF328
 * Entry: 0x0035cd00, Ghidra index: 13211, label: FUN_0035cd00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0035cd00(int *param_1,int *param_2)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte local_25;
  byte *local_1c;
  uint local_18;
  uint *local_10;
  
  if (*param_1 == param_1[1]) {
    uVar5 = param_1[10];
    local_10 = (uint *)*param_2;
    iVar1 = param_2[1];
    local_18 = param_2[2];
    uVar8 = param_2[3];
    bVar2 = (byte)uVar5;
    if (uVar8 < uVar5) {
      local_18 = *local_10 << ((byte)uVar8 & 0x1f) | local_18;
      uVar6 = *local_10 >> (bVar2 - (byte)uVar8 & 0x1f);
      iVar4 = 0x20 - uVar5;
      local_10 = local_10 + 1;
    }
    else {
      uVar6 = local_18 >> (bVar2 & 0x1f);
      iVar4 = -uVar5;
    }
    local_18 = 0xffffffffU >> (0x20 - bVar2 & 0x1f) & local_18;
    uVar8 = uVar8 + iVar4;
    if (local_18 == 0) {
      *param_1 = param_1[0xb] + 4;
      param_1[1] = param_1[0xb];
    }
    else {
      local_1c = (byte *)param_1[0xb];
      *param_1 = (int)local_1c;
      param_1[1] = (int)(local_1c + local_18);
      if (uVar8 == 0) {
        uVar5 = *local_10;
        local_10 = local_10 + 1;
        uVar8 = 0x1f;
      }
      else {
        uVar8 = uVar8 - 1;
        uVar5 = uVar6;
      }
      uVar6 = uVar5 >> 1;
      if ((uVar5 & 1) == 0) {
        uVar5 = param_1[8];
        iVar4 = param_1[9];
        uVar7 = 0xffffffff >> (0x20U - (char)uVar5 & 0x1f);
        do {
          if (uVar8 < uVar5) {
            bVar2 = *(byte *)(((*local_10 << ((byte)uVar8 & 0x1f) | uVar6) & uVar7) + iVar4);
            local_25 = *(byte *)((bVar2 & 0xf) + 0x10 + (int)param_1);
            bVar2 = bVar2 >> 4;
            uVar3 = (uint)bVar2;
            if (uVar8 < uVar3) {
              uVar6 = *local_10 >> (bVar2 - (byte)uVar8 & 0x1f);
              uVar8 = uVar8 + (0x20 - uVar3);
              local_10 = local_10 + 1;
            }
            else {
              uVar6 = uVar6 >> bVar2;
              uVar8 = uVar8 - uVar3;
            }
          }
          else {
            bVar2 = *(byte *)((uVar7 & uVar6) + iVar4);
            local_25 = *(byte *)((bVar2 & 0xf) + 0x10 + (int)param_1);
            bVar2 = bVar2 >> 4;
            uVar6 = uVar6 >> bVar2;
            uVar8 = uVar8 - bVar2;
          }
          if (local_25 != 0) {
            if (uVar8 == 0) {
              uVar3 = *local_10;
              local_10 = local_10 + 1;
              uVar8 = 0x1f;
            }
            else {
              uVar8 = uVar8 - 1;
              uVar3 = uVar6;
            }
            uVar6 = uVar3 >> 1;
            if ((uVar3 & 1) != 0) {
              local_25 = -local_25;
            }
          }
          *local_1c = local_25;
          local_1c = local_1c + 1;
          local_18 = local_18 - 1;
        } while (local_18 != 0);
      }
      else {
        bVar2 = (byte)uVar6;
        if (uVar8 < 4) {
          uVar6 = *local_10 >> (4 - (byte)uVar8 & 0x1f);
          bVar2 = (char)*local_10 << ((byte)uVar8 & 0x1f) | bVar2;
          uVar8 = uVar8 + 0x1c;
          local_10 = local_10 + 1;
        }
        else {
          uVar6 = uVar5 >> 5;
          uVar8 = uVar8 - 4;
        }
        bVar2 = bVar2 & 0xf;
        if (bVar2 != 0) {
          if (uVar8 == 0) {
            uVar5 = *local_10;
            local_10 = local_10 + 1;
            uVar8 = 0x1f;
          }
          else {
            uVar8 = uVar8 - 1;
            uVar5 = uVar6;
          }
          uVar6 = uVar5 >> 1;
          if ((uVar5 & 1) != 0) {
            bVar2 = -bVar2;
          }
        }
        for (uVar5 = local_18 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(uint *)local_1c = CONCAT22(CONCAT11(bVar2,bVar2),CONCAT11(bVar2,bVar2));
          local_1c = local_1c + 4;
        }
        for (local_18 = local_18 & 3; local_18 != 0; local_18 = local_18 - 1) {
          *local_1c = bVar2;
          local_1c = local_1c + 1;
        }
      }
    }
    *param_2 = (int)local_10;
    param_2[1] = iVar1;
    param_2[2] = uVar6;
    param_2[3] = uVar8;
  }
  return;
}
