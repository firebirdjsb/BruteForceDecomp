/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8C93BFE678929DB5DD2FA9F029E0C61878AA0E2994C4689AA16F1B05543DD8B0
 * Entry: 0x0035cb00, Ghidra index: 13210, label: FUN_0035cb00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0035cb00(int *param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int *unaff_EDI;
  byte local_21;
  byte *local_18;
  uint local_14;
  uint *local_10;
  
  if (*unaff_EDI == unaff_EDI[1]) {
    uVar2 = unaff_EDI[10];
    local_10 = (uint *)*param_1;
    iVar3 = param_1[1];
    uVar10 = param_1[2];
    uVar5 = param_1[3];
    bVar1 = (byte)uVar2;
    if (uVar5 < uVar2) {
      uVar11 = *local_10 >> (bVar1 - (byte)uVar5 & 0x1f);
      iVar6 = 0x20 - uVar2;
      local_14 = 0xffffffffU >> (0x20 - bVar1 & 0x1f) & (*local_10 << ((byte)uVar5 & 0x1f) | uVar10)
      ;
      local_10 = local_10 + 1;
    }
    else {
      local_14 = 0xffffffffU >> (0x20 - bVar1 & 0x1f) & uVar10;
      uVar11 = uVar10 >> (bVar1 & 0x1f);
      iVar6 = -uVar2;
    }
    uVar5 = uVar5 + iVar6;
    local_18 = (byte *)unaff_EDI[0xb];
    if (local_14 == 0) {
      *unaff_EDI = (int)(local_18 + 4);
      unaff_EDI[1] = (int)local_18;
    }
    else {
      uVar2 = unaff_EDI[8];
      *unaff_EDI = (int)local_18;
      iVar6 = unaff_EDI[9];
      unaff_EDI[1] = (int)(local_18 + local_14);
      uVar10 = 0xffffffff >> (0x20U - (char)uVar2 & 0x1f);
      do {
        if (uVar5 < uVar2) {
          bVar1 = *(byte *)(((*local_10 << ((byte)uVar5 & 0x1f) | uVar11) & uVar10) + iVar6);
          local_21 = *(byte *)((bVar1 & 0xf) + 0x10 + (int)unaff_EDI);
          bVar1 = bVar1 >> 4;
          uVar9 = (uint)bVar1;
          if (uVar5 < uVar9) {
            uVar11 = *local_10 >> (bVar1 - (byte)uVar5 & 0x1f);
            uVar5 = uVar5 + (0x20 - uVar9);
            local_10 = local_10 + 1;
          }
          else {
            uVar11 = uVar11 >> bVar1;
            uVar5 = uVar5 - uVar9;
          }
        }
        else {
          bVar1 = *(byte *)((uVar10 & uVar11) + iVar6);
          local_21 = *(byte *)((bVar1 & 0xf) + 0x10 + (int)unaff_EDI);
          bVar1 = bVar1 >> 4;
          uVar11 = uVar11 >> bVar1;
          uVar5 = uVar5 - bVar1;
        }
        if (uVar5 < uVar2) {
          bVar1 = *(byte *)(((*local_10 << ((byte)uVar5 & 0x1f) | uVar11) & uVar10) + iVar6);
          cVar8 = *(char *)((bVar1 & 0xf) + 0x10 + (int)unaff_EDI);
          bVar1 = bVar1 >> 4;
          uVar9 = (uint)bVar1;
          if (uVar5 < uVar9) {
            uVar11 = *local_10 >> (bVar1 - (byte)uVar5 & 0x1f);
            iVar7 = 0x20 - uVar9;
            local_10 = local_10 + 1;
          }
          else {
            uVar11 = uVar11 >> bVar1;
            iVar7 = -uVar9;
          }
        }
        else {
          bVar1 = *(byte *)((uVar10 & uVar11) + iVar6);
          bVar4 = bVar1 >> 4;
          cVar8 = *(char *)((bVar1 & 0xf) + 0x10 + (int)unaff_EDI);
          uVar11 = uVar11 >> bVar4;
          iVar7 = -(uint)bVar4;
        }
        uVar5 = uVar5 + iVar7;
        *local_18 = cVar8 << 4 | local_21;
        local_18 = local_18 + 1;
        local_14 = local_14 - 1;
      } while (local_14 != 0);
    }
    *param_1 = (int)local_10;
    param_1[1] = iVar3;
    param_1[2] = uVar11;
    param_1[3] = uVar5;
  }
  return;
}
