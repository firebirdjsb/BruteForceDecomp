/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B3234F57C29D1E5432BBB4490B55D1D2675887813340028D5B7A9B5676865BF3
 * Entry: 0x002d6640, Ghidra index: 10244, label: FUN_002d6640
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003b86e0;
undefined4 FUN_002d6640(int *param_1,int *param_2,uint *param_3,int *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  float *pfVar8;
  float10 fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_5c;
  uint *local_58;
  float local_50;
  float local_4c;
  float local_48;
  undefined4 local_44;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  uint local_30;
  uint local_2c;
  uint uStack_28;
  
  iVar7 = *param_2;
  iVar5 = param_4[2];
  fVar10 = *(float *)(iVar7 + 0x40) - *(float *)(iVar5 + 0x40);
  fVar11 = *(float *)(iVar7 + 0x44) - *(float *)(iVar5 + 0x44);
  fVar12 = *(float *)(iVar7 + 0x48) - *(float *)(iVar5 + 0x48);
  fVar13 = *(float *)(iVar7 + 0x4c) - *(float *)(iVar5 + 0x4c);
  local_40 = *(float *)(iVar5 + 0x10) * fVar10 + *(float *)(iVar5 + 0x20) * fVar11 +
             *(float *)(iVar5 + 0x30) * fVar12;
  fStack_3c = *(float *)(iVar5 + 0x14) * fVar10 + *(float *)(iVar5 + 0x24) * fVar11 +
              *(float *)(iVar5 + 0x34) * fVar12;
  fStack_38 = *(float *)(iVar5 + 0x18) * fVar10 + *(float *)(iVar5 + 0x28) * fVar11 +
              *(float *)(iVar5 + 0x38) * fVar12;
  fStack_34 = *(float *)(iVar5 + 0x1c) * fVar13 + *(float *)(iVar5 + 0x2c) * fVar13 +
              *(float *)(iVar5 + 0x3c) * fVar13;
  FUN_002cd2b0(&local_40);
  if ((int)(uStack_28 | local_2c | local_30) < 0) {
    local_5c = 1e+20;
    local_58 = (uint *)0x0;
    iVar7 = 3;
    do {
      fVar9 = (float10)FUN_002cdf10(param_4[1],param_3);
      if (fVar9 < (float10)local_5c) {
        local_5c = (float)fVar9;
        local_58 = param_3;
      }
      param_3 = (uint *)((int)param_3 + *(int *)(&DAT_003b86e0 + ((uint)param_3 & 0xc)));
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    uVar6 = FUN_002d86e0(param_2,local_58,param_4);
    return uVar6;
  }
  pfVar8 = (float *)((*param_3 & 0xffff) * 0x10 + *param_4);
  local_44 = 0;
  FUN_002cdc50(&local_50);
  FUN_002b65a0(&local_50);
  iVar7 = param_4[2];
  fVar10 = *(float *)(iVar7 + 0x24);
  fVar11 = *(float *)(iVar7 + 0x28);
  fVar12 = *(float *)(iVar7 + 0x20);
  fVar13 = *(float *)(iVar7 + 0x34);
  fVar3 = *(float *)(iVar7 + 0x38);
  fVar4 = *(float *)(iVar7 + 0x30);
  iVar5 = *param_1;
  *(float *)(iVar5 + 0x60) =
       local_50 * *(float *)(iVar7 + 0x10) +
       *(float *)(iVar7 + 0x18) * local_48 + *(float *)(iVar7 + 0x14) * local_4c;
  *(float *)(iVar5 + 0x68) = fVar4 * local_50 + fVar3 * local_48 + fVar13 * local_4c;
  *(float *)(iVar5 + 100) = fVar12 * local_50 + fVar11 * local_48 + fVar10 * local_4c;
  fVar10 = (local_40 * local_50 + fStack_38 * local_48 + fStack_3c * local_4c) -
           (local_50 * *pfVar8 + local_48 * pfVar8[2] + local_4c * pfVar8[1]);
  iVar7 = param_4[4];
  *(uint **)(iVar7 + 0x14) = param_3;
  *(undefined2 *)(iVar7 + 0x1a) = 2;
  if (0.0 <= fVar10) {
    *(float *)(*param_1 + 0x54) = fVar10 - *(float *)(*param_1 + 0x50);
    uVar1 = *(undefined8 *)(*param_2 + 0x54);
    uVar2 = *(undefined8 *)(param_4[2] + 0x54);
    iVar7 = *param_1;
    *(float *)(iVar7 + 0x58) =
         (*(float *)(*param_2 + 0x50) - *(float *)(param_4[2] + 0x50)) * *(float *)(iVar7 + 0x60) +
         ((float)((ulonglong)uVar1 >> 0x20) - (float)((ulonglong)uVar2 >> 0x20)) *
         *(float *)(iVar7 + 0x68) + ((float)uVar1 - (float)uVar2) * *(float *)(iVar7 + 100);
    return 1;
  }
  iVar7 = param_4[4];
  *(uint **)(iVar7 + 0x14) = param_3;
  *(undefined2 *)(iVar7 + 0x1a) = 5;
  param_1[3] = (int)fStack_3c;
  param_1[2] = (int)local_40;
  param_1[4] = (int)fStack_38;
  return 3;
}
