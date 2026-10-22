/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 42612A378195B0D77A030333BF19A800311429D3B90BEB6E84A183E07C03E9BA
 * Entry: 0x002d6910, Ghidra index: 10245, label: FUN_002d6910
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003b86e0;
extern uint32_t DAT_003b86f0;
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_002d6910(uint *param_1,float *param_2,uint *param_3,int *param_4,int *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  undefined4 uVar7;
  char cVar8;
  int *in_ECX;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  int iVar12;
  float10 fVar13;
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  float local_6c;
  float local_50;
  undefined8 local_4c;
  undefined4 local_44;
  float local_40;
  float local_3c;
  float local_38;
  undefined4 local_34;
  undefined1 local_30 [12];
  undefined4 local_24;
  float local_20 [4];
  undefined1 local_10 [12];
  undefined4 local_4;
  
  in_ECX[1] = in_ECX[1] + -1;
  iVar12 = 0;
  if ((in_ECX[1] < 0) && (iVar4 = FUN_002c15b0(param_1,param_3), iVar4 != 0)) {
    return 2;
  }
  local_34 = 0;
  local_44 = 0;
  FUN_002cdc50(&local_50);
  FUN_002b65a0(&local_50);
  local_20[3] = 0.0;
  iVar4 = param_5[2];
  local_20[0] = local_50 * *(float *)(iVar4 + 0x10) +
                *(float *)(iVar4 + 0x18) * local_4c._4_4_ +
                *(float *)(iVar4 + 0x14) * (float)local_4c;
  local_20[1] = *(float *)(iVar4 + 0x20) * local_50 +
                (float)local_4c * *(float *)(iVar4 + 0x24) +
                local_4c._4_4_ * *(float *)(iVar4 + 0x28);
  local_20[2] = *(float *)(iVar4 + 0x30) * local_50 +
                (float)local_4c * *(float *)(iVar4 + 0x34) +
                local_4c._4_4_ * *(float *)(iVar4 + 0x38);
  FUN_002b73d0(param_4[2] + 0x10,local_20,&local_40);
  pfVar5 = (float *)((*param_3 & 0xffff) * 0x10 + *param_5);
  *(float *)(*in_ECX + 0x54) =
       (local_50 * *param_2 + local_4c._4_4_ * param_2[2] + (float)local_4c * param_2[1]) -
       (local_50 * *pfVar5 + local_4c._4_4_ * pfVar5[2] + (float)local_4c * pfVar5[1]);
  iVar4 = *in_ECX;
  *(float *)(iVar4 + 100) = local_20[1];
  *(float *)(iVar4 + 0x60) = local_20[0];
  *(float *)(iVar4 + 0x68) = local_20[2];
  if (*(float *)(*in_ECX + 0x54) < 0.0) {
    local_40 = local_40 * -1.0;
    local_3c = local_3c * -1.0;
    local_38 = local_38 * -1.0;
  }
  iVar4 = *in_ECX;
  *(float *)(iVar4 + 0x54) = *(float *)(iVar4 + 0x54) - *(float *)(iVar4 + 0x50);
  uVar1 = *(undefined8 *)(param_4[2] + 0x54);
  uVar2 = *(undefined8 *)(param_5[2] + 0x54);
  iVar4 = *in_ECX;
  puVar10 = (uint *)0x0;
  local_6c = 0.0;
  *(float *)(iVar4 + 0x58) =
       (*(float *)(param_4[2] + 0x50) - *(float *)(param_5[2] + 0x50)) * *(float *)(iVar4 + 0x60) +
       ((float)((ulonglong)uVar1 >> 0x20) - (float)((ulonglong)uVar2 >> 0x20)) *
       *(float *)(iVar4 + 0x68) + ((float)uVar1 - (float)uVar2) * *(float *)(iVar4 + 100);
  pfVar5 = (float *)((*param_1 & 0xffff) * 0x10 + *param_4);
  puVar11 = (uint *)(*(int *)(&DAT_003b86f0 + ((uint)param_1 & 0xc)) + (int)param_1);
  puVar9 = puVar11 + ((*(int *)(*(int *)(&DAT_003b86f0 + ((uint)param_1 & 0xc)) + (int)param_1) << 1
                      ) >> 0x11);
  while( true ) {
    puVar9 = (uint *)(*(int *)(&DAT_003b86f0 + ((uint)puVar9 & 0xc)) + (int)puVar9);
    pfVar6 = (float *)((*puVar9 & 0xffff) * 0x10 + *param_4);
    local_44 = 0;
    uVar1 = *(undefined8 *)(pfVar6 + 1);
    uVar2 = *(undefined8 *)(pfVar5 + 1);
    fVar15 = *pfVar6 - *pfVar5;
    fVar16 = (float)uVar1 - (float)uVar2;
    fVar17 = (float)((ulonglong)uVar1 >> 0x20) - (float)((ulonglong)uVar2 >> 0x20);
    local_4c = CONCAT44(fVar17,fVar16);
    fVar3 = fVar15 * local_40 + fVar16 * local_3c + fVar17 * local_38;
    if (fVar3 < 0.0) {
      auVar14._0_4_ = fVar15 * fVar15;
      auVar14._4_4_ = 0;
      auVar14._8_4_ = fVar16 * fVar16;
      auVar14._12_4_ = fVar17 * fVar17;
      auVar14 = rsqrtss(auVar14,auVar14._8_4_ + auVar14._12_4_ + auVar14._0_4_);
      fVar3 = auVar14._0_4_ * fVar3;
      if (fVar3 < local_6c) {
        puVar10 = puVar9;
        local_6c = fVar3;
      }
    }
    if (puVar9 == puVar11) break;
    puVar9 = puVar9 + ((int)(*puVar9 << 1) >> 0x11);
  }
  if (puVar10 == (uint *)0x0) {
    iVar12 = param_4[4];
    *(uint **)(iVar12 + 0x14) = param_1;
    *(undefined2 *)(iVar12 + 0x1a) = 0;
    iVar12 = param_5[4];
    *(uint **)(iVar12 + 0x14) = param_3;
    *(undefined2 *)(iVar12 + 0x1a) = 2;
    if (*(float *)(*in_ECX + 0x54) + *(float *)(*in_ECX + 0x50) < 0.0) {
      fVar3 = param_2[1];
      fVar15 = param_2[2];
      in_ECX[2] = (int)*param_2;
      in_ECX[3] = (int)fVar3;
      in_ECX[4] = (int)fVar15;
      iVar12 = param_5[4];
      *(uint **)(iVar12 + 0x14) = param_3;
      *(undefined2 *)(iVar12 + 0x1a) = 5;
      return 3;
    }
    return 1;
  }
  local_24 = 0;
  local_4 = 0;
  FUN_00150930();
  FUN_002b7360(param_5[2] + 0x10,local_10,local_30);
  FUN_002cd2b0(local_30);
  if (-1 < (int)((uint)local_20[2] | (uint)local_20[1] | (uint)local_20[0])) {
    uVar7 = FUN_002d6910(puVar10,local_30,param_3,param_4,param_5);
    return uVar7;
  }
  cVar8 = local_20[0] < 0.0;
  if (local_20[1] < 0.0) {
    cVar8 = cVar8 + '\x01';
  }
  if (local_20[2] < 0.0) {
    cVar8 = cVar8 + '\x01';
  }
  if (cVar8 == '\x01') {
    iVar4 = 0;
    puVar9 = param_3;
    do {
      if (local_20[iVar4] < 0.0) {
        uVar7 = FUN_002d6f30(puVar10,puVar9,param_4,param_5);
        return uVar7;
      }
      puVar9 = (uint *)((int)puVar9 + *(int *)(&DAT_003b86e0 + ((uint)puVar9 & 0xc)));
      iVar4 = iVar4 + 1;
    } while (iVar4 < 3);
  }
  puVar9 = (uint *)0x0;
  local_6c = 1e+20;
  do {
    if ((local_20[iVar12] <= 0.0) &&
       (fVar13 = (float10)FUN_002cdfb0(puVar10,param_3,param_4), fVar13 < (float10)local_6c)) {
      local_6c = (float)fVar13;
      puVar9 = param_3;
    }
    param_3 = (uint *)((int)param_3 + *(int *)(&DAT_003b86e0 + ((uint)param_3 & 0xc)));
    iVar12 = iVar12 + 1;
  } while (iVar12 < 3);
  uVar7 = FUN_002d6f30(puVar10,puVar9,param_4,param_5);
  return uVar7;
}
