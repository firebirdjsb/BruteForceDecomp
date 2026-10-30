/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 40BF1D2F39BD51C80804269E2C31DCA3FA2476FEFB0CD492D491931DFAA7A022
 * Entry: 0x0035cf70, Ghidra index: 13212, label: FUN_0035cf70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0035cf70(int *param_1,int *param_2)

{
  int iVar1;
  sbyte sVar2;
  byte bVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  short sVar12;
  uint uVar13;
  short *psVar14;
  uint local_24;
  short *local_20;
  uint local_14;
  
  if (*param_1 != param_1[1]) {
    return;
  }
  uVar9 = param_1[10];
  puVar10 = (uint *)*param_2;
  iVar1 = param_2[1];
  uVar7 = param_2[2];
  uVar11 = param_2[3];
  bVar3 = (byte)uVar9;
  if (uVar11 < uVar9) {
    uVar13 = 0xffffffffU >> (0x20 - bVar3 & 0x1f) & (*puVar10 << ((byte)uVar11 & 0x1f) | uVar7);
    uVar7 = *puVar10 >> (bVar3 - (byte)uVar11 & 0x1f);
    iVar6 = 0x20 - uVar9;
    puVar10 = puVar10 + 1;
  }
  else {
    uVar13 = 0xffffffffU >> (0x20 - bVar3 & 0x1f) & uVar7;
    uVar7 = uVar7 >> (bVar3 & 0x1f);
    iVar6 = -uVar9;
  }
  uVar11 = uVar11 + iVar6;
  local_20 = (short *)param_1[0xb];
  if (uVar13 == 0) {
    *param_1 = (int)(local_20 + 2);
    param_1[1] = (int)local_20;
    goto LAB_0035d277;
  }
  uVar9 = param_1[2];
  bVar3 = (byte)uVar9;
  bVar5 = (byte)uVar11;
  if (param_1[3] == 0) {
    local_24 = 0xffffffff >> (0x20 - bVar3 & 0x1f);
    if (uVar11 < uVar9) {
      uVar8 = *puVar10 >> (bVar3 - bVar5 & 0x1f);
      local_24 = local_24 & (*puVar10 << (bVar5 & 0x1f) | uVar7);
      uVar11 = uVar11 + (0x20 - uVar9);
      puVar10 = puVar10 + 1;
    }
    else {
      local_24 = local_24 & uVar7;
      uVar8 = uVar7 >> (bVar3 & 0x1f);
      uVar11 = uVar11 - uVar9;
    }
LAB_0035d0e8:
    sVar12 = (short)local_24;
  }
  else {
    if (uVar11 < uVar9 - 1) {
      local_14 = 0xffffffffU >> (0x21 - bVar3 & 0x1f) & 0xffff;
      local_24 = local_14 & (*puVar10 << (bVar5 & 0x1f) | uVar7);
      uVar8 = *puVar10 >> ((bVar3 - bVar5) - 1 & 0x1f);
      iVar6 = 0x21 - uVar9;
      puVar10 = puVar10 + 1;
    }
    else {
      local_24 = 0xffffffffU >> (0x21 - bVar3 & 0x1f) & uVar7;
      uVar8 = uVar7 >> (bVar3 - 1 & 0x1f);
      iVar6 = 1 - uVar9;
    }
    uVar11 = uVar11 + iVar6;
    sVar12 = (short)local_24;
    if (sVar12 != 0) {
      if (uVar11 == 0) {
        uVar9 = *puVar10;
        puVar10 = puVar10 + 1;
        uVar11 = 0x1f;
      }
      else {
        uVar11 = uVar11 - 1;
        uVar9 = uVar8;
      }
      uVar8 = uVar9 >> 1;
      if ((uVar9 & 1) != 0) {
        local_24 = -local_24;
        goto LAB_0035d0e8;
      }
    }
  }
  *local_20 = sVar12;
  local_20 = local_20 + 1;
  *param_1 = param_1[0xb];
  param_1[1] = param_1[0xb] + uVar13 * 2;
  uVar7 = uVar8;
  for (uVar13 = uVar13 - 1; uVar13 != 0; uVar13 = uVar13 - (int)param_1) {
    param_1 = (int *)0x8;
    if (uVar13 < 9) {
      param_1 = (int *)uVar13;
    }
    if (uVar11 < 4) {
      uVar9 = *puVar10 >> (4 - (byte)uVar11 & 0x1f);
      uVar7 = *puVar10 << ((byte)uVar11 & 0x1f) | uVar7;
      uVar11 = uVar11 + 0x1c;
      puVar10 = puVar10 + 1;
    }
    else {
      uVar9 = uVar7 >> 4;
      uVar11 = uVar11 - 4;
    }
    uVar7 = uVar7 & 0xf;
    if (uVar7 == 0) {
      psVar14 = local_20;
      for (uVar7 = (uint)param_1 & 0x7fffffff; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(uint *)psVar14 = CONCAT22((short)local_24,(short)local_24);
        psVar14 = psVar14 + 2;
      }
      for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
        *psVar14 = (short)local_24;
        psVar14 = psVar14 + 1;
      }
      local_20 = local_20 + (int)param_1;
    }
    else if (param_1 != (int *)0x0) {
      sVar2 = (sbyte)uVar7;
      local_14 = (uint)param_1;
      do {
        if (uVar11 < uVar7) {
          uVar8 = *puVar10;
          uVar4 = uVar8 << ((byte)uVar11 & 0x1f) | uVar9;
          iVar6 = 0x20 - uVar7;
          puVar10 = puVar10 + 1;
          uVar8 = uVar8 >> (sVar2 - (byte)uVar11 & 0x1f);
        }
        else {
          iVar6 = -uVar7;
          uVar8 = uVar9 >> sVar2;
          uVar4 = uVar9;
        }
        uVar9 = uVar8;
        uVar4 = 0xffffffffU >> (0x20U - sVar2 & 0x1f) & uVar4;
        uVar11 = uVar11 + iVar6;
        if ((short)uVar4 != 0) {
          if (uVar11 == 0) {
            uVar8 = *puVar10;
            puVar10 = puVar10 + 1;
            uVar11 = 0x1f;
          }
          else {
            uVar11 = uVar11 - 1;
            uVar8 = uVar9;
          }
          uVar9 = uVar8 >> 1;
          if ((uVar8 & 1) != 0) {
            uVar4 = -uVar4;
          }
        }
        local_24 = local_24 + uVar4;
        *local_20 = (short)local_24;
        local_20 = local_20 + 1;
        local_14 = local_14 - 1;
      } while (local_14 != 0);
    }
    uVar7 = uVar9;
  }
LAB_0035d277:
  *param_2 = (int)puVar10;
  param_2[1] = iVar1;
  param_2[2] = uVar7;
  param_2[3] = uVar11;
  return;
}
