/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8A6483192EA96E6080A955853B6C872C4C84220600D3A9B8009A59791B92EDB3
 * Entry: 0x002b8290, Ghidra index: 9856, label: FUN_002b8290
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003b86e0;
extern uint32_t DAT_003b86f0;
void FUN_002b8290(float *param_1,int *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  uint *puVar7;
  float *pfVar8;
  float unaff_ESI;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float local_24;
  int *local_1c;
  int *local_18;
  int local_14;
  float *local_10;
  float local_c;
  float fStack_8;
  undefined4 local_4;
  
  local_14 = (int)(short)param_2[3];
  if (local_14 == 2) {
    local_14 = 1;
  }
  local_18 = (int *)0x0;
  local_24 = 0.0;
  if (0 < local_14) {
    puVar7 = (uint *)(param_2 + 5);
    local_1c = param_2;
    do {
      local_1c = local_1c + 4;
      iVar4 = (*(uint *)((int)puVar7 + *(int *)(&DAT_003b86e0 + ((uint)puVar7 & 0xc))) & 0xffff) *
              0x10 + *param_2;
      fVar13 = *param_1 - *(float *)(iVar4 + (int)param_2);
      pfVar5 = (float *)(iVar4 + (int)param_2);
      iVar4 = (*puVar7 & 0xffff) * 0x10 + *param_2;
      fVar14 = *(float *)(iVar4 + (int)param_2) - *pfVar5;
      fVar11 = *(float *)(iVar4 + 8 + (int)param_2) - pfVar5[2];
      iVar9 = (*(uint *)((int)puVar7 + *(int *)(&DAT_003b86f0 + ((uint)puVar7 & 0xc))) & 0xffff) *
              0x10 + *param_2;
      fVar15 = *(float *)(iVar9 + (int)param_2) - *pfVar5;
      fVar12 = *(float *)((int)param_2 + iVar9 + 8) - pfVar5[2];
      fVar10 = fVar12 * fVar14 - fVar15 * fVar11;
      if (1e-06 <= ABS(fVar10)) {
        fVar10 = 1.0 / fVar10;
        fVar12 = (fVar12 * fVar13 - fVar15 * (param_1[2] - pfVar5[2])) * fVar10;
        fVar10 = (fVar14 * (param_1[2] - pfVar5[2]) - fVar11 * fVar13) * fVar10;
        if (((0.0 <= fVar12) && (0.0 <= fVar10)) && (fVar10 + fVar12 <= 1.0)) {
          fVar13 = (*(float *)((int)param_2 + iVar4 + 4) - pfVar5[1]) * fVar12 +
                   (*(float *)((int)param_2 + iVar9 + 4) - pfVar5[1]) * fVar10 + pfVar5[1];
          if (param_1[9] <= param_1[1]) {
            if ((fVar13 <= param_1[1]) && (param_1[9] <= fVar13)) {
              fVar13 = param_1[1] - fVar13;
              goto LAB_002b8442;
            }
          }
          else if ((fVar13 <= param_1[9]) && (param_1[1] <= fVar13)) {
            fVar13 = fVar13 - param_1[1];
LAB_002b8442:
            if ((local_18 == (int *)0x0) || (fVar13 <= local_24)) {
              local_18 = local_1c;
              local_24 = fVar13;
            }
          }
        }
      }
      puVar7 = puVar7 + 4;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
    if (local_18 != (int *)0x0) {
      piVar1 = local_18 + 1;
      local_4 = 0;
      iVar4 = *param_2;
      pfVar6 = (float *)((local_18[1] & 0xffffU) * 0x10 + iVar4 + (int)param_2);
      pfVar8 = (float *)((*(uint *)((int)piVar1 + *(int *)(&DAT_003b86e0 + ((uint)piVar1 & 0xc))) &
                         0xffff) * 0x10 + iVar4 + (int)param_2);
      pfVar5 = (float *)((*(uint *)((int)piVar1 + *(int *)(&DAT_003b86f0 + ((uint)piVar1 & 0xc))) &
                         0xffff) * 0x10 + iVar4 + (int)param_2);
      fVar13 = *pfVar6;
      uVar2 = *(undefined8 *)(pfVar6 + 1);
      uVar3 = *(undefined8 *)(pfVar8 + 1);
      fVar10 = *pfVar8 - fVar13;
      fVar14 = (float)uVar2;
      fVar11 = (float)uVar3 - fVar14;
      fVar15 = (float)((ulonglong)uVar2 >> 0x20);
      fVar12 = (float)((ulonglong)uVar3 >> 0x20) - fVar15;
      uVar2 = *(undefined8 *)(pfVar5 + 1);
      fVar13 = *pfVar5 - fVar13;
      fVar14 = (float)uVar2 - fVar14;
      fVar15 = (float)((ulonglong)uVar2 >> 0x20) - fVar15;
      local_10 = (float *)(fVar11 * fVar15 - fVar12 * fVar14);
      local_c = fVar12 * fVar13 - fVar10 * fVar15;
      fStack_8 = fVar10 * fVar14 - fVar11 * fVar13;
      FUN_002b65a0(&local_10);
      if ((param_1[0x10] != 1.4013e-45) ||
         ((float)local_10 * param_1[0xc] + local_c * param_1[0xd] + fStack_8 * param_1[0xe] <= 0.0))
      {
        if (local_c < 0.0) {
          local_10 = (float *)((float)local_10 * -1.0);
          local_c = local_c * -1.0;
          fStack_8 = fStack_8 * -1.0;
        }
        (*(code *)**(undefined4 **)param_1[0x11])(param_1[0x12],param_2,local_18,local_24,&local_10)
        ;
        fVar13 = local_10[0x13];
        local_10[8] = *local_10 + local_10[0xc] * fVar13;
        *(ulonglong *)(local_10 + 9) =
             CONCAT44((float)((ulonglong)*(undefined8 *)(local_10 + 1) >> 0x20) +
                      (float)((ulonglong)*(undefined8 *)(local_10 + 0xd) >> 0x20) * fVar13,
                      (float)*(undefined8 *)(local_10 + 1) +
                      (float)*(undefined8 *)(local_10 + 0xd) * fVar13);
        local_10[0x13] = unaff_ESI;
      }
    }
  }
  return;
}
