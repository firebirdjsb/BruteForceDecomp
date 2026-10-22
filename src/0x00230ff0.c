/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 727E9BD177AEF7DDC39D092322D1DF9512F296F789E29AAD0C9D8A79215B884F
 * Entry: 0x00230ff0, Ghidra index: 7750, label: FUN_00230ff0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00230ff0(int param_1,float *param_2,float *param_3,float param_4)

{
  float fVar1;
  float fVar2;
  char cVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_90;
  float local_8c;
  float local_84;
  float local_80;
  undefined1 local_7c [4];
  float *local_78;
  undefined4 local_74;
  undefined4 local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined1 local_60;
  
  pfVar4 = (float *)FUN_00232920();
  fVar1 = *pfVar4;
  if ((fVar1 != 0.0) && (local_c4 = fVar1, iVar5 = FUN_0017beb0(&local_c4), iVar5 != 0)) {
    local_78 = (float *)0x0;
    local_74 = 0;
    local_70 = 0;
    iVar6 = FUN_0017e5a0(local_7c);
    if (iVar6 != 0) {
      local_c4 = *(float *)(iVar5 + 0xc) * *(float *)(iVar5 + 0xc);
      fVar7 = param_4 * *param_3;
      fVar8 = param_4 * (float)*(undefined8 *)(param_3 + 1);
      fVar9 = param_4 * (float)((ulonglong)*(undefined8 *)(param_3 + 1) >> 0x20);
      local_98 = fVar9 + param_2[2];
      local_9c = fVar8 + param_2[1];
      local_a0 = fVar7 + *param_2;
      pfVar4 = local_78;
      local_b0 = fVar9;
      do {
        cVar3 = FUN_000dee40(param_3,param_4);
        if (cVar3 != '\0') {
          local_a4 = fVar9 - param_2[2];
          local_a8 = fVar8 - param_2[1];
          if (1.0 < (fVar7 - *param_2) * (fVar7 - *param_2) +
                    local_a8 * local_a8 + local_a4 * local_a4) {
            local_8c = fVar9 - local_98;
            local_90 = fVar8 - local_9c;
            if (1.0 < (fVar7 - local_a0) * (fVar7 - local_a0) +
                      local_90 * local_90 + local_8c * local_8c) {
              local_80 = fVar9 - pfVar4[2];
              local_84 = fVar8 - pfVar4[1];
              fVar2 = (fVar7 - *pfVar4) * (fVar7 - *pfVar4) +
                      local_84 * local_84 + local_80 * local_80;
              if (fVar2 < local_c4) {
                local_c4 = fVar2;
                local_c0 = fVar8;
                local_bc = fVar9;
                local_b8 = fVar7;
                local_b4 = fVar8;
                local_b0 = fVar9;
              }
            }
          }
        }
        pfVar4 = pfVar4 + 3;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      if (local_c4 < *(float *)(iVar5 + 0xc) * *(float *)(iVar5 + 0xc)) {
        FUN_0003f010();
        local_c0 = local_b0;
        local_6c = local_b8;
        local_68 = local_b4;
        local_bc = local_b4;
        local_64 = local_b0;
        local_60 = 1;
        FUN_00179250(*(undefined4 *)(*(int *)(param_1 + 8) + 0x208),fVar1,5);
      }
    }
    if (local_78 != (float *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(local_78);
    }
  }
  return;
}
