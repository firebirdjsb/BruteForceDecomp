/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 66E1E9F95275EFAA28D47560CB27F893ED6BE64FE798F04826C43E5313BC13C4
 * Entry: 0x00054690, Ghidra index: 795, label: FUN_00054690
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00054690(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 **ppuVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  int local_3c;
  undefined4 *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 *local_24;
  undefined4 *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar5 = ((int)param_3 - (int)param_1) / 0x14;
  iVar4 = (param_2 - (int)param_1) / 0x14;
  iVar8 = iVar4;
  local_3c = iVar5;
  while (iVar6 = iVar8, iVar6 != 0) {
    iVar8 = local_3c % iVar6;
    local_3c = iVar6;
  }
  if ((local_3c < iVar5) && (0 < local_3c)) {
    puVar12 = param_1 + local_3c * 5 + 2;
    do {
      local_8 = puVar12[1];
      uVar2 = puVar12[-2];
      local_c = *puVar12;
      uVar3 = puVar12[-1];
      local_4 = puVar12[2];
      puVar1 = puVar12 + -2;
      if (puVar12 + iVar4 * 5 + -2 == param_3) {
        ppuVar9 = &param_1;
      }
      else {
        local_30 = puVar12 + iVar4 * 5 + -2;
        ppuVar9 = &local_30;
      }
      puVar7 = *ppuVar9;
      puVar10 = puVar1;
      puVar11 = puVar1;
      if (*ppuVar9 != puVar12 + -2) {
        do {
          puVar11 = puVar7;
          *puVar10 = *puVar11;
          local_28 = puVar11[3];
          local_2c = puVar11[2];
          puVar10[1] = puVar11[1];
          puVar10[2] = local_2c;
          puVar10[3] = local_28;
          puVar10[4] = puVar11[4];
          iVar5 = ((int)param_3 - (int)puVar11) / 0x14;
          if (iVar4 < iVar5) {
            local_24 = puVar11 + iVar4 * 5;
            ppuVar9 = &local_24;
          }
          else {
            local_20 = param_1 + (iVar4 - iVar5) * 5;
            ppuVar9 = &local_20;
          }
          puVar7 = *ppuVar9;
          puVar10 = puVar11;
        } while (*ppuVar9 != puVar1);
      }
      *puVar11 = uVar2;
      local_18 = local_8;
      puVar11[1] = uVar3;
      puVar11[2] = local_c;
      local_1c = local_c;
      puVar11[3] = local_8;
      puVar11[4] = local_4;
      puVar12 = puVar12 + -5;
      local_3c = local_3c + -1;
    } while (local_3c != 0);
  }
  return;
}
