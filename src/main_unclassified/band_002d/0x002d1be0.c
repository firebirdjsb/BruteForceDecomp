/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9B745CA84CF9118F9C9471F8E05936B0412014B6634B1CD5D695D6F7A5BD60D3
 * Entry: 0x002d1be0, Ghidra index: 10192, label: FUN_002d1be0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003b86e0;
void FUN_002d1be0(int param_1,float *param_2,uint *param_3,int *param_4,float *param_5)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_50;
  float local_4c;
  float local_48;
  undefined4 local_44;
  uint local_40;
  uint local_3c;
  uint uStack_38;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  
  fVar10 = param_2[2];
  fVar11 = *param_2;
  param_5[9] = param_2[1];
  param_5[8] = fVar11;
  param_5[10] = fVar10;
  iVar4 = param_4[2];
  fVar10 = *param_2 - *(float *)(iVar4 + 0x40);
  fVar11 = param_2[1] - *(float *)(iVar4 + 0x44);
  fVar12 = param_2[2] - *(float *)(iVar4 + 0x48);
  fVar13 = param_2[3] - *(float *)(iVar4 + 0x4c);
  local_30 = *(float *)(iVar4 + 0x10) * fVar10 + *(float *)(iVar4 + 0x20) * fVar11 +
             *(float *)(iVar4 + 0x30) * fVar12;
  fStack_2c = *(float *)(iVar4 + 0x14) * fVar10 + *(float *)(iVar4 + 0x24) * fVar11 +
              *(float *)(iVar4 + 0x34) * fVar12;
  fStack_28 = *(float *)(iVar4 + 0x18) * fVar10 + *(float *)(iVar4 + 0x28) * fVar11 +
              *(float *)(iVar4 + 0x38) * fVar12;
  fStack_24 = *(float *)(iVar4 + 0x1c) * fVar13 + *(float *)(iVar4 + 0x2c) * fVar13 +
              *(float *)(iVar4 + 0x3c) * fVar13;
  if (*(char *)(param_1 + 0x60) == '\x01') {
    *(undefined1 *)(param_1 + 0x60) = 0;
    FUN_002cd2b0(&local_30);
    if ((int)(uStack_38 | local_3c | local_40) < 0) {
      param_5[0x13] = (float)((uint)param_5[0x13] & 0xfffffdff | 0x100);
    }
  }
  local_44 = 0;
  FUN_002cdc50(&local_50);
  fVar10 = *(float *)(param_1 + 0x4c);
  local_50 = local_50 * fVar10;
  local_4c = local_4c * fVar10;
  local_48 = local_48 * fVar10;
  iVar4 = param_4[2];
  fVar10 = *(float *)(iVar4 + 0x18);
  fVar11 = *(float *)(iVar4 + 0x14);
  fVar12 = *(float *)(iVar4 + 0x10);
  fVar13 = *(float *)(iVar4 + 0x28);
  fVar2 = *(float *)(iVar4 + 0x24);
  fVar3 = *(float *)(iVar4 + 0x20);
  fVar7 = *(float *)(iVar4 + 0x38);
  fVar8 = *(float *)(iVar4 + 0x34);
  fVar9 = *(float *)(iVar4 + 0x30);
  pfVar5 = (float *)((*param_3 & 0xffff) * 0x10 + *param_4);
  pfVar6 = (float *)((*(uint *)((int)param_3 + *(int *)(&DAT_003b86e0 + ((uint)param_3 & 0xc))) &
                     0xffff) * 0x10 + *param_4);
  *(float *)(param_1 + 0x58) =
       (local_30 * local_50 + fStack_2c * local_4c + fStack_28 * local_48) -
       (local_50 * *pfVar5 + local_4c * pfVar5[1] + local_48 * pfVar5[2]);
  *param_5 = (local_50 * fVar12 + fVar11 * local_4c + fVar10 * local_48) * -1.0;
  param_5[1] = (fVar3 * local_50 + fVar2 * local_4c + fVar13 * local_48) * -1.0;
  param_5[2] = (fVar9 * local_50 + fVar8 * local_4c + fVar7 * local_48) * -1.0;
  uVar1 = *(undefined8 *)(pfVar6 + 1);
  fVar7 = *pfVar6 - *pfVar5;
  fVar8 = (float)uVar1 - (float)*(undefined8 *)(pfVar5 + 1);
  fVar9 = (float)((ulonglong)uVar1 >> 0x20) -
          (float)((ulonglong)*(undefined8 *)(pfVar5 + 1) >> 0x20);
  iVar4 = param_4[2];
  fVar10 = *(float *)(iVar4 + 0x24);
  fVar11 = *(float *)(iVar4 + 0x28);
  fVar12 = *(float *)(iVar4 + 0x20);
  fVar13 = *(float *)(iVar4 + 0x34);
  fVar2 = *(float *)(iVar4 + 0x38);
  fVar3 = *(float *)(iVar4 + 0x30);
  param_5[0x1c] =
       fVar7 * *(float *)(iVar4 + 0x10) +
       *(float *)(iVar4 + 0x18) * fVar9 + *(float *)(iVar4 + 0x14) * fVar8;
  param_5[0x1d] = fVar12 * fVar7 + fVar11 * fVar9 + fVar10 * fVar8;
  param_5[0x1e] = fVar3 * fVar7 + fVar2 * fVar9 + fVar13 * fVar8;
  return;
}
