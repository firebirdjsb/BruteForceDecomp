/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B8DAEC5E785415CC1FFF7488F8B758C5A5741E018312BADD348ED96069FF27ED
 * Entry: 0x00214f50, Ghidra index: 7455, label: FUN_00214f50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040d7d0;
void FUN_00214f50(undefined4 param_1,int param_2,int param_3,float *param_4,float param_5,
                 float param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
                 undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13)

{
  undefined4 *puVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *local_20;
  int local_1c;
  float local_18;
  float fStack_14;
  float local_10;
  float fStack_8;
  float fStack_4;
  
  local_18 = param_6;
  local_10 = param_5;
  if (param_5 <= param_6) {
    local_10 = param_6;
  }
  if (*(int *)(param_2 + 0x18) == 0) {
    local_1c = 0;
  }
  else {
    local_1c = (*(int *)(param_2 + 0x1c) - *(int *)(param_2 + 0x18)) / 0x2c;
  }
  iVar6 = 0;
  if (0 < local_1c) {
    iVar7 = 0;
    do {
      puVar1 = *(undefined4 **)(*(int *)(param_2 + 0x18) + 4 + iVar7);
      iVar8 = *(int *)(param_2 + 0x18) + iVar7;
      if (puVar1 != (undefined4 *)0x0) {
        local_20 = (int *)0x0;
        iVar4 = (**(code **)*puVar1)(puVar1,&DAT_0040d7d0,&local_20);
        if ((iVar4 == 0) && (cVar3 = (**(code **)(*local_20 + 0xc))(), cVar3 != '\0')) {
          fStack_14 = *(float *)(iVar8 + 0x14) - param_4[2];
          local_18 = *(float *)(iVar8 + 0x10) - param_4[1];
          fVar5 = *(float *)(iVar8 + 0xc) - *param_4;
          fVar2 = local_10 + *(float *)(iVar8 + 8);
          fStack_8 = local_18;
          fStack_4 = fStack_14;
          if (fVar5 * fVar5 + local_18 * local_18 + fStack_14 * fStack_14 < fVar2 * fVar2) {
            iVar8 = FUN_002ea01d(0x28);
            if (iVar8 == 0) {
              fVar5 = 0.0;
            }
            else {
              fVar5 = (float)FUN_00213770(iVar8,param_11,param_7,param_12,param_13,0);
            }
            local_18 = fVar5;
            FUN_00215140(param_1,iVar6,param_2,(int)fVar5 + 0x10,param_4,param_5,param_6,param_7,
                         param_8,param_9,param_10,param_11);
            if (*(int *)((int)fVar5 + 0x18) == 0) {
              FUN_00213810();
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00237ec0(fVar5);
            }
            iVar8 = *(int *)(param_3 + 4);
            iVar4 = FUN_000ff730(param_3,iVar8,*(undefined4 *)(iVar8 + 4),&local_18);
            FUN_000b2a50();
            *(int *)(iVar8 + 4) = iVar4;
            **(int **)(iVar4 + 4) = iVar4;
          }
        }
        if (local_20 != (int *)0x0) {
          (**(code **)(*local_20 + 8))(local_20);
        }
      }
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + 0x2c;
    } while (iVar6 < local_1c);
  }
  return;
}
