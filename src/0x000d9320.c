/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 36C15BC91E6B8B9C82823263231912AB8C13FA41F834DEAFB441A9D3EF2880D1
 * Entry: 0x000d9320, Ghidra index: 2679, label: FUN_000d9320
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003f7d30;
extern uint32_t DAT_003f7d34;
extern uint32_t DAT_003f7ea0;
extern uint32_t DAT_0046995c;
extern uint32_t DAT_00469b58;
extern uint32_t _DAT_003f7d28;
extern uint32_t _DAT_003f7d2c;
extern uint32_t switchD_000d961c_default[];
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000d9320(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  undefined4 *puVar9;
  int *piVar10;
  float fVar11;
  float fVar12;
  float local_64 [5];
  int aiStack_50 [20];
  
  local_64[4] = *(float *)(param_1 + 0xc6c);
  fVar1 = *(float *)(param_1 + 0xc70);
  if ((*(char *)(*(int *)(param_1 + 0xbf0) + 0x84) == '\0') &&
     (*(int *)(*(int *)(param_1 + 0xbf0) + 0x8c) != 0)) {
    fVar12 = 1.4013e-45;
    local_64[0] = 1.4013e-45;
  }
  else {
    if (*(int *)(DAT_0046995c + 0x1c) == 0) {
      local_64[1] = (float)FUN_00072b90();
      local_64[3] = 5.60519e-45;
      local_64[2] = 1.4013e-45;
      if ((uint)local_64[1] < 5) {
        pfVar5 = (float *)((int)local_64 + 8);
        if (local_64[1] != 0.0) {
          pfVar5 = (float *)((int)local_64 + 4);
        }
      }
      else {
        pfVar5 = (float *)((int)local_64 + 0xc);
      }
      local_64[0] = *pfVar5;
      fVar12 = local_64[0];
    }
    else {
      local_64[0] = (float)(**(code **)(**(int **)(param_1 + 0xbec) + 0x34))();
      local_64[2] = 5.60519e-45;
      local_64[1] = 1.4013e-45;
      if ((int)local_64[0] < 5) {
        pfVar5 = (float *)((int)local_64 + 4);
        if (0 < (int)local_64[0]) {
          pfVar5 = local_64;
        }
      }
      else {
        pfVar5 = (float *)((int)local_64 + 8);
      }
      fVar12 = *pfVar5;
      iVar6 = FUN_00072b90();
      iVar6 = iVar6 + -1 + (int)fVar12;
      local_64[0] = (float)iVar6;
      if (iVar6 < 0) {
        local_64[0] = local_64[0] + 4.2949673e+09;
      }
      local_64[2] = 4.0;
      local_64[1] = 1.0;
      local_64[3] = local_64[0];
      if (local_64[0] <= 1.0) {
        local_64[3] = 1.0;
      }
      if (4.0 <= local_64[3]) {
        local_64[3] = 4.0;
      }
      local_64[0] = (float)FUN_002ebf10();
    }
  }
  fVar11 = local_64[0];
  iVar6 = DAT_0046995c;
  if (((fVar12 != fVar1) && (*(float *)(param_1 + 0xc70) = fVar12, *(int *)(iVar6 + 0x1c) != 0)) &&
     (iVar6 = (**(code **)(**(int **)(param_1 + 0xbec) + 0x34))(), iVar6 != 0)) {
    piVar10 = aiStack_50 + 4;
    for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
      *piVar10 = 0;
      piVar10 = piVar10 + 1;
    }
    aiStack_50[0] = 0;
    aiStack_50[1] = 0;
    aiStack_50[2] = 0;
    aiStack_50[3] = 0;
    iVar6 = 1;
    do {
      iVar7 = (**(code **)(**(int **)(param_1 + 0xbec) + 8))(iVar6);
      if ((iVar7 != 0) &&
         (pbVar8 = (byte *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x130))
                                     (*(undefined4 *)(iVar7 + 4)), (*pbVar8 & 1) != 0)) {
        iVar2 = *(int *)(pbVar8 + 8);
        iVar3 = aiStack_50[iVar2];
        aiStack_50[*(int *)(pbVar8 + 4) + iVar2 * 4 + 4] = iVar7;
        aiStack_50[iVar2] = iVar3 + 1;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 9);
    local_64[1] = 0.0;
    piVar10 = aiStack_50 + 4;
    do {
      iVar6 = 0;
      local_64[2] = 5.60519e-45;
      do {
        if ((*piVar10 != 0) && (iVar7 = FUN_0008b790(), iVar7 != 0)) {
          bVar4 = *(byte *)(iVar7 + 0x4c);
          if (*(int *)(&DAT_003f7ea0 +
                      (iVar6 + *(int *)((int)aiStack_50 + (int)local_64[1]) * 4) * 4) == 0) {
            if ((bVar4 & 0x20) != 0) {
              if ((bVar4 & 1) == 0) {
                FUN_0006c660();
              }
              bVar4 = *(byte *)(iVar7 + 0x4c) & 0xdf;
LAB_000d9569:
              *(byte *)(iVar7 + 0x4c) = bVar4;
            }
          }
          else if ((bVar4 & 0x20) == 0) {
            if ((bVar4 & 1) == 0) {
              FUN_0006c660();
            }
            bVar4 = *(byte *)(iVar7 + 0x4c) | 0x20;
            goto LAB_000d9569;
          }
          iVar6 = iVar6 + 1;
        }
        piVar10 = piVar10 + 1;
        local_64[2] = (float)((int)local_64[2] + -1);
      } while (local_64[2] != 0.0);
      local_64[1] = (float)((int)local_64[1] + 4);
      fVar11 = local_64[0];
    } while ((int)local_64[1] < 0x10);
  }
  if (fVar11 == local_64[4]) {
    return;
  }
  *(float *)(param_1 + 0xc6c) = fVar11;
  iVar6 = *(int *)(param_1 + 0x200);
  local_64[4] = (float)((*(int *)(iVar6 + 0x24) * (int)local_64[4]) / (int)fVar11);
  local_64[3] = 0.0;
  puVar9 = (undefined4 *)((int)local_64 + 0x10);
  if ((int)local_64[4] < 1) {
    puVar9 = (undefined4 *)((int)local_64 + 0xc);
  }
  *(undefined4 *)(iVar6 + 0x24) = *puVar9;
  FUN_002171d0(iVar6);
  local_64[4] = (float)(*(int *)(param_1 + 0xc6c) + -1);
  *(float *)(param_1 + 0xc74) = 1.0 / ((float)(int)local_64[4] * 0.25 + 1.0);
  switch(fVar11) {
  case 1.4013e-45:
    _DAT_003f7d28 = 0x41a00000;
    _DAT_003f7d2c = 0x42480000;
    DAT_003f7d34 = 0x18;
    break;
  case 2.8026e-45:
    _DAT_003f7d28 = 0x41700000;
    _DAT_003f7d2c = 0x42200000;
    DAT_003f7d34 = 0xf;
    break;
  case 4.2039e-45:
    _DAT_003f7d28 = 0x41200000;
    _DAT_003f7d2c = 0x41a00000;
    DAT_003f7d34 = 9;
    break;
  case 5.60519e-45:
    _DAT_003f7d28 = 0x40a00000;
    _DAT_003f7d2c = 0x41200000;
    DAT_003f7d34 = 3;
    break;
  default:
    goto switchD_000d961c_default;
  }
  DAT_003f7d30 = 3;
switchD_000d961c_default:
  if (*(int *)(DAT_0046995c + 0x1c) != 0) {
    return;
  }
  iVar6 = 0;
  piVar10 = (int *)(*(int *)(param_1 + 0xbf0) + 0x38);
  do {
    if (*piVar10 != 0) {
      iVar7 = *(int *)(*(int *)(param_1 + 0xbf0) + 0x38 + iVar6 * 8);
      goto joined_r0x000d96e4;
    }
    iVar6 = iVar6 + 1;
    piVar10 = piVar10 + 2;
  } while (iVar6 < 7);
  iVar7 = 0;
joined_r0x000d96e4:
  while( true ) {
    if (iVar7 == 0) {
      return;
    }
    if ((bool)(*(byte *)(iVar7 + 0x4c) >> 5 & 1) != 1 < (int)fVar11) {
      if ((*(byte *)(iVar7 + 0x4c) & 1) == 0) {
        FUN_0006c660();
      }
      *(byte *)(iVar7 + 0x4c) =
           *(byte *)(iVar7 + 0x4c) ^ ((1 < (int)fVar11) << 5 ^ *(byte *)(iVar7 + 0x4c)) & 0x20;
    }
    iVar6 = iVar6 + 1;
    if (6 < iVar6) break;
    piVar10 = (int *)(*(int *)(param_1 + 0xbf0) + 0x38 + iVar6 * 8);
    while (*piVar10 == 0) {
      iVar6 = iVar6 + 1;
      piVar10 = piVar10 + 2;
      if (6 < iVar6) {
        return;
      }
    }
    iVar7 = *(int *)(*(int *)(param_1 + 0xbf0) + 0x38 + iVar6 * 8);
  }
  return;
}
