/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7F73C43DA5A9D6F5DCF69D6CD0A8DA9F18BE256D105D1BD00526764094AB97FC
 * Entry: 0x001483e0, Ghidra index: 4255, label: FUN_001483e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003ffd80;
void FUN_001483e0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  int *piVar15;
  float local_30;
  int *local_24;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x10))[0x79];
  fVar6 = *(float *)(param_1 + 0x2c) * *(float *)(param_1 + 0x2c);
  piVar15 = *(int **)(param_1 + 8);
  local_24 = (int *)0x0;
  local_30 = fVar6;
  if ((piVar15 != (int *)0x0) && ((*(byte *)(piVar15 + 0x1c) & 1) == 0)) {
    iVar11 = (**(code **)(**(int **)(param_1 + 0x10) + 0x40))();
    iVar12 = (**(code **)(*piVar15 + 0x40))();
    fVar7 = *(float *)(iVar12 + 0x2c) - *(float *)(iVar11 + 0x2c);
    fVar8 = *(float *)(iVar12 + 0x28) - *(float *)(iVar11 + 0x28);
    fVar9 = *(float *)(iVar12 + 0x24) - *(float *)(iVar11 + 0x24);
    local_30 = SQRT(fVar9 * fVar9 + fVar8 * fVar8 + fVar7 * fVar7) * 0.5;
    local_30 = local_30 * local_30;
    if (fVar6 <= local_30) {
      local_30 = fVar6;
    }
  }
  iVar11 = *(int *)(*(int *)(param_1 + 0x10) + 8);
  puVar2 = *(undefined4 **)(iVar11 + 0x74);
  puVar13 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    puVar13 = (undefined4 *)*puVar2;
  }
  puVar3 = *(undefined4 **)(iVar11 + 0x68);
  puVar14 = (undefined4 *)0x0;
  if (puVar3 != (undefined4 *)0x0) {
    puVar14 = (undefined4 *)*puVar3;
  }
  puVar4 = *(undefined4 **)(iVar11 + 0x74);
  puVar5 = *(undefined4 **)(iVar11 + 0x68);
  while ((((puVar14 != puVar5 || (puVar3 != puVar5)) || (puVar13 != puVar4)) || (puVar2 != puVar4)))
  {
    if (puVar14 == puVar3) {
      piVar15 = (int *)puVar13[3];
    }
    else {
      piVar15 = (int *)puVar14[3];
    }
    if ((*(byte *)(piVar15 + 0x1c) & 1) == 0) {
      iVar11 = (**(code **)(piVar15[0x6d] + 0x9c))();
      if (((*(int *)(param_1 + 0x14) != -1) && (iVar11 != -1)) &&
         (((&DAT_003ffd80)[*(int *)(param_1 + 0x14) * 10 + iVar11] != '\0' && (piVar1 != piVar15))))
      {
        iVar11 = (**(code **)(**(int **)(param_1 + 0x10) + 0x40))();
        iVar12 = (**(code **)(*piVar15 + 0x40))();
        fVar6 = *(float *)(iVar12 + 0x2c) - *(float *)(iVar11 + 0x2c);
        fVar7 = *(float *)(iVar12 + 0x28) - *(float *)(iVar11 + 0x28);
        fVar8 = *(float *)(iVar12 + 0x24) - *(float *)(iVar11 + 0x24);
        fVar6 = fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6;
        if ((fVar6 < local_30) && (cVar10 = FUN_00148100(), cVar10 != '\0')) {
          local_30 = fVar6;
          local_24 = piVar15;
        }
      }
    }
    if (puVar14 == puVar3) {
      puVar13 = (undefined4 *)*puVar13;
    }
    else {
      puVar14 = (undefined4 *)*puVar14;
    }
  }
  if ((local_24 != (int *)0x0) && (*(int **)(param_1 + 8) != local_24)) {
    FUN_0008f6a0(local_24);
  }
  return;
}
