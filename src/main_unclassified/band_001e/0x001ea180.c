/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 95E6F9741F8950BFB1D904B4C92718E9C99453F7A8E9E996A14F6DD6F78D1C74
 * Entry: 0x001ea180, Ghidra index: 6871, label: FUN_001ea180
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001ea180(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  int local_34;
  int local_2c;
  int local_28;
  int local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  uint local_18;
  undefined4 local_8;
  uint local_4;
  
  iVar9 = param_3 - param_1 >> 5;
  iVar8 = param_2 - param_1 >> 5;
  iVar5 = iVar8;
  local_34 = iVar9;
  while (iVar1 = iVar5, iVar1 != 0) {
    iVar5 = local_34 % iVar1;
    local_34 = iVar1;
  }
  if ((local_34 < iVar9) && (0 < local_34)) {
    puVar7 = (undefined4 *)(local_34 * 0x20 + param_1);
    param_2 = iVar8 * 0x20;
    do {
      local_20 = *puVar7;
      iVar5 = (int)puVar7 + param_2;
      local_8 = 0;
      local_18 = local_18 & 0xffff0000;
      local_4 = 7;
      FUN_00087940(local_1c,0,0xffffffff);
      if (iVar5 == param_3) {
        piVar6 = &param_1;
      }
      else {
        local_2c = iVar5;
        piVar6 = &local_2c;
      }
      puVar4 = (undefined4 *)*piVar6;
      puVar3 = puVar7;
      while (puVar2 = puVar4, puVar2 != puVar7) {
        *puVar3 = *puVar2;
        FUN_00087940(puVar3 + 1,0,0xffffffff);
        iVar5 = param_3 - (int)puVar2 >> 5;
        if (iVar8 < iVar5) {
          local_28 = param_2 + (int)puVar2;
          piVar6 = &local_28;
        }
        else {
          local_24 = (iVar8 - iVar5) * 0x20 + param_1;
          piVar6 = &local_24;
        }
        puVar3 = puVar2;
        puVar4 = (undefined4 *)*piVar6;
      }
      *puVar3 = local_20;
      FUN_00087940(puVar3 + 1,0,0xffffffff);
      if (7 < local_4) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(local_18);
      }
      puVar7 = puVar7 + -8;
      local_34 = local_34 + -1;
      local_18 = local_18 & 0xffff0000;
    } while (local_34 != 0);
  }
  return;
}
