/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 225A93743113B909FCB7DA3635B022E965C286C15BC2EC4E3C3C27AAC7413913
 * Entry: 0x001654c0, Ghidra index: 4697, label: FUN_001654c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001654c0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int in_EAX;
  undefined4 *puVar12;
  undefined4 *puVar13;
  int local_20;
  
  iVar9 = ((int)param_2 - (int)param_1) / 0x18;
  iVar8 = (in_EAX - (int)param_1) / 0x18;
  iVar11 = iVar8;
  local_20 = iVar9;
  while (iVar10 = iVar11, iVar10 != 0) {
    iVar11 = local_20 % iVar10;
    local_20 = iVar10;
  }
  if ((local_20 < iVar9) && (0 < local_20)) {
    puVar13 = param_1 + local_20 * 6;
    do {
      uVar2 = *puVar13;
      puVar12 = puVar13 + iVar8 * 6;
      uVar3 = puVar12[iVar8 * -6 + 1];
      puVar1 = puVar12 + iVar8 * -6 + 2;
      uVar4 = *puVar1;
      uVar5 = puVar1[1];
      uVar6 = puVar1[2];
      uVar7 = puVar1[3];
      puVar1 = puVar13;
      if (puVar12 == param_2) {
        puVar12 = param_1;
      }
      while (puVar12 != puVar13) {
        *puVar1 = *puVar12;
        puVar1[1] = puVar12[1];
        puVar1[2] = puVar12[2];
        puVar1[3] = puVar12[3];
        puVar1[4] = puVar12[4];
        puVar1[5] = puVar12[5];
        iVar9 = ((int)param_2 - (int)puVar12) / 0x18;
        puVar1 = puVar12;
        if (iVar8 < iVar9) {
          puVar12 = puVar12 + iVar8 * 6;
        }
        else {
          puVar12 = param_1 + (iVar8 - iVar9) * 6;
        }
      }
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      puVar1[2] = uVar4;
      puVar1[3] = uVar5;
      puVar1[4] = uVar6;
      puVar1[5] = uVar7;
      puVar13 = puVar13 + -6;
      local_20 = local_20 + -1;
    } while (local_20 != 0);
  }
  return;
}
