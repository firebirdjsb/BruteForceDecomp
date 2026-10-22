/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F3B167A161080FA53361BD7AAA018111BBFC64A3A76945958434F4AA29B6A011
 * Entry: 0x00294640, Ghidra index: 9291, label: FUN_00294640
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003b9768;
undefined * FUN_00294640(byte *param_1,int param_2,uint *param_3)

{
  uint uVar1;
  byte *pbVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  bool bVar10;
  uint local_4;
  
  uVar8 = 0;
  pbVar2 = param_1;
  for (iVar5 = param_2; iVar5 != 0; iVar5 = iVar5 + -1) {
    uVar8 = uVar8 ^ uVar8 * 0x20 + (uVar8 >> 2) + (uint)*pbVar2;
    pbVar2 = pbVar2 + 1;
  }
  uVar7 = *param_3;
  local_4 = 0xffffffff;
  if ((int)(uVar7 * 2) <= (int)(param_3[1] * 3)) {
    FUN_002944b0();
    uVar7 = *param_3;
  }
  uVar6 = uVar8 % uVar7;
  puVar3 = *(undefined **)(param_3[2] + uVar6 * 4);
  if (puVar3 != (undefined *)0x0) {
    do {
      uVar1 = uVar6;
      if ((puVar3 != &DAT_003b9768) && (uVar1 = local_4, *(int *)(puVar3 + 0x20) == param_2)) {
        bVar10 = true;
        iVar5 = param_2;
        pbVar2 = param_1;
        pbVar9 = puVar3 + 0x28;
        do {
          if (iVar5 == 0) break;
          iVar5 = iVar5 + -1;
          bVar10 = *pbVar2 == *pbVar9;
          pbVar2 = pbVar2 + 1;
          pbVar9 = pbVar9 + 1;
        } while (bVar10);
        if (bVar10) {
          return puVar3;
        }
      }
      local_4 = uVar1;
      uVar6 = (uVar7 - 2 & uVar8) + 1 + uVar6;
      if ((int)uVar7 <= (int)uVar6) {
        uVar6 = uVar6 - uVar7;
      }
      puVar3 = *(undefined **)(param_3[2] + uVar6 * 4);
    } while (puVar3 != (undefined *)0x0);
    if (local_4 != 0xffffffff) goto LAB_00294705;
  }
  local_4 = uVar6;
  param_3[1] = param_3[1] + 1;
LAB_00294705:
  uVar4 = FUN_00294560(param_1,uVar8);
  *(undefined4 *)(param_3[2] + local_4 * 4) = uVar4;
  return *(undefined **)(param_3[2] + local_4 * 4);
}
