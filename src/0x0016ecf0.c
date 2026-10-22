/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DCFB42885417F158CC647A316BC8B41597EBA964E5E038C2FE9ACFAE06549A68
 * Entry: 0x0016ecf0, Ghidra index: 4830, label: FUN_0016ecf0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0016ecf0(undefined4 *param_1,int param_2,undefined4 *param_3)

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
  int local_48;
  undefined4 *local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar5 = ((int)param_3 - (int)param_1) / 0x14;
  iVar4 = (param_2 - (int)param_1) / 0x14;
  iVar8 = iVar4;
  local_48 = iVar5;
  while (iVar6 = iVar8, iVar6 != 0) {
    iVar8 = local_48 % iVar6;
    local_48 = iVar6;
  }
  if ((local_48 < iVar5) && (0 < local_48)) {
    puVar12 = param_1 + local_48 * 5 + 2;
    do {
      local_8 = puVar12[1];
      uVar2 = puVar12[-2];
      local_c = *puVar12;
      local_10 = puVar12[-1];
      local_4 = puVar12[2];
      puVar1 = puVar12 + -2;
      if (puVar12 + iVar4 * 5 + -2 == param_3) {
        ppuVar9 = &param_1;
      }
      else {
        local_38 = puVar12 + iVar4 * 5 + -2;
        ppuVar9 = &local_38;
      }
      puVar7 = *ppuVar9;
      puVar10 = puVar1;
      puVar11 = puVar1;
      if (*ppuVar9 != puVar12 + -2) {
        do {
          puVar11 = puVar7;
          local_2c = puVar11[3];
          local_30 = puVar11[2];
          local_34 = puVar11[1];
          uVar3 = *puVar11;
          puVar10[1] = local_34;
          *puVar10 = uVar3;
          puVar10[3] = local_2c;
          puVar10[2] = local_30;
          puVar10[4] = puVar11[4];
          iVar5 = ((int)param_3 - (int)puVar11) / 0x14;
          if (iVar4 < iVar5) {
            local_28 = puVar11 + iVar4 * 5;
            ppuVar9 = &local_28;
          }
          else {
            local_24 = param_1 + (iVar4 - iVar5) * 5;
            ppuVar9 = &local_24;
          }
          puVar7 = *ppuVar9;
          puVar10 = puVar11;
        } while (*ppuVar9 != puVar1);
      }
      *puVar11 = uVar2;
      local_18 = local_8;
      local_1c = local_c;
      local_20 = local_10;
      puVar11[2] = local_c;
      puVar11[4] = local_4;
      puVar11[1] = local_10;
      puVar12 = puVar12 + -5;
      local_48 = local_48 + -1;
      puVar11[3] = local_8;
    } while (local_48 != 0);
  }
  return;
}
