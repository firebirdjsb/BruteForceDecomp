/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E268FB462C7C7C7CFAEC372919024F85891960A046108C04440B814333A96096
 * Entry: 0x0034e35f, Ghidra index: 13022, label: FUN_0034e35f
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_0034e35f(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  int iVar11;
  uint local_14;
  uint local_10;
  
  piVar1 = (int *)(param_2 + 0x14);
  piVar2 = (int *)(param_2 + 0xa8);
  param_2 = *(int *)(param_1 + 0x54);
  puVar9 = *(uint **)(param_1 + 0x58);
  if (*piVar1 == 0) {
    iVar11 = (-(uint)(param_3 != 0) & 0xfffffec8) + 0x440;
  }
  else {
    iVar11 = (-(uint)(param_3 != 0) & 0x40) + 0x2b0;
  }
  if (param_2 != 0) {
    puVar10 = (uint *)(*piVar2 + 0x20);
    do {
      if (param_3 == 0) {
        uVar5 = *puVar10;
      }
      else {
        uVar5 = puVar10[1];
      }
      if (uVar5 != 0) {
        uVar5 = (uint)(iVar11 * 1000000) / uVar5;
        uVar6 = 10000000;
        if (uVar5 < 10000000) {
          uVar6 = uVar5;
        }
        *puVar9 = uVar6;
        puVar9 = puVar9 + 1;
      }
      puVar10 = puVar10 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  puVar10 = *(uint **)(param_1 + 0x58);
  uVar5 = (int)puVar9 - (int)puVar10 >> 2;
  FUN_0034e2e0(puVar10,uVar5);
  if (2 < uVar5) {
    iVar11 = 0;
    puVar9 = (uint *)(*(int *)(param_1 + 0x5c) + -0x10);
    uVar6 = 0;
    for (; uVar5 != 0; uVar5 = uVar5 - 1) {
      uVar3 = *puVar10;
      if (uVar3 < uVar6) {
        *puVar9 = *puVar9 + uVar3;
        puVar9[1] = puVar9[1] + 1;
      }
      else {
        if (iVar11 != 0) {
          *puVar9 = *puVar9 / puVar9[1];
        }
        puVar9[6] = 0;
        iVar11 = iVar11 + 1;
        puVar9[7] = 0;
        puVar9[4] = uVar3;
        puVar9[5] = 1;
        uVar6 = uVar3 + 5000;
        puVar9 = puVar9 + 4;
      }
      puVar10 = puVar10 + 1;
    }
    *puVar9 = *puVar9 / puVar9[1];
    puVar9 = *(uint **)(param_1 + 0x5c);
    if (iVar11 == 1) {
      return *puVar9;
    }
    local_14 = 0xffffffff;
    local_10 = 0xffffffff;
    if (iVar11 != 0) {
      puVar10 = puVar9 + 2;
      param_2 = iVar11;
      do {
        uVar5 = puVar10[-2];
        puVar8 = puVar9;
        param_3 = iVar11;
        do {
          uVar6 = *puVar8;
          if (uVar6 < uVar5) {
            uVar6 = uVar5 - uVar6;
          }
          else {
            uVar6 = uVar6 - uVar5;
          }
          uVar4 = puVar8[1];
          uVar7 = (uint)((ulonglong)uVar4 * (ulonglong)uVar6);
          uVar3 = *puVar10;
          *puVar10 = *puVar10 + uVar7;
          puVar10[1] = puVar10[1] + (int)((ulonglong)uVar4 * (ulonglong)uVar6 >> 0x20) +
                       (uint)CARRY4(uVar3,uVar7);
          puVar8 = puVar8 + 4;
          param_3 = param_3 + -1;
        } while (param_3 != 0);
        uVar5 = puVar10[1];
        if ((uVar5 <= local_10) && ((local_10 != uVar5 || (*puVar10 < local_14)))) {
          local_14 = *puVar10;
          local_10 = uVar5;
        }
        puVar10 = puVar10 + 4;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
    }
    puVar8 = *(uint **)(param_1 + 0x58);
    for (; iVar11 != 0; iVar11 = iVar11 + -1) {
      if ((puVar9[2] == local_14) && (puVar9[3] == local_10)) {
        *puVar8 = *puVar9;
        puVar8 = puVar8 + 1;
      }
      puVar9 = puVar9 + 4;
    }
    puVar10 = *(uint **)(param_1 + 0x58);
    uVar5 = (int)puVar8 - (int)puVar10 >> 2;
  }
  uVar5 = FUN_0034e2be(puVar10,uVar5);
  return uVar5;
}
