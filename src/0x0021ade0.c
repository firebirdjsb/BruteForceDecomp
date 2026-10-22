/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 19BDA19F78E55F127D5C7F8070CF7547CDB1CE9CC48D9BC8D2767CB694010F82
 * Entry: 0x0021ade0, Ghidra index: 7516, label: FUN_0021ade0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_003a4f50;
float * FUN_0021ade0(int param_1,float param_2)

{
  float *pfVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  char cVar6;
  int iVar7;
  int *piVar8;
  float *pfVar9;
  int iVar10;
  float10 fVar11;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  int *local_e0;
  int local_dc;
  undefined4 uStack_d8;
  float fStack_d4;
  undefined4 local_d0;
  float fStack_cc;
  float fStack_c8;
  int local_c4;
  undefined4 local_c0;
  float *local_bc;
  undefined4 uStack_b8;
  int local_b4;
  undefined4 uStack_b0;
  float local_ac;
  undefined4 uStack_a8;
  undefined4 local_a4;
  float local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  float local_94;
  undefined **ppuStack_90;
  float fStack_8c;
  float fStack_88;
  int *piStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_74;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  float fStack_3c;
  byte bStack_34;
  int local_28;
  
  iVar7 = *(int *)(param_1 + 0xc);
  pfVar9 = *(float **)(iVar7 + 0xe4);
  local_bc = (float *)(iVar7 + 0xe0);
  iVar10 = *(int *)(param_1 + 8);
  pfVar1 = (float *)(param_1 + 0x6c);
  local_c4 = iVar10;
  pfVar5 = *(float **)(iVar7 + 0xe8);
  if (pfVar9 != *(float **)(iVar7 + 0xe8)) {
    do {
      local_bc = pfVar5;
      if ((((*pfVar9 != 0.0) && (0.0 < pfVar9[5])) && (pfVar9[3] < *(float *)(param_1 + 0xa8))) &&
         (*(float *)(param_1 + 0xa8) <= pfVar9[4] + pfVar9[3])) {
        local_b4 = *(int *)(iVar10 + 0x204);
        iVar7 = *(int *)(local_b4 + 0x3c);
        local_ac = pfVar9[5] * pfVar9[5];
        *(int *)(local_b4 + 0x3c) = iVar7 + 1;
        local_c0 = *(undefined4 *)(param_1 + 0x74);
        local_a4 = *(undefined4 *)(iVar10 + 0xa40);
        local_a0 = *pfVar1;
        local_d0 = *(undefined4 *)(param_1 + 0x70);
        local_94 = pfVar9[5];
        local_dc = iVar7;
        local_9c = local_d0;
        local_98 = local_c0;
        FUN_000d1420(local_94);
joined_r0x0021aee3:
        if (local_28 != 0) {
          local_e0 = *(int **)(local_28 + 0x1c);
          if (local_e0 != (int *)0x0) {
            do {
              uVar2 = *(uint *)((uint)*(ushort *)(local_e0 + 2) * 0x10 + 0xc +
                               *(int *)(local_b4 + 0x14));
              if (((uVar2 != 0) &&
                  (iVar10 = *(int *)(uVar2 + 0x18), *(int *)(uVar2 + 0x18) = iVar7, iVar10 != iVar7)
                  ) && ((piVar8 = (int *)(-(uint)((*(byte *)(uVar2 + 0x26) & 0x40) != 0) & uVar2),
                        piVar8 != (int *)0x0 &&
                        ((0.0 < *(float *)(piVar8[3] + 0x78 + (int)pfVar9[1] * 4) &&
                         ((float)piVar8[0x15] < 0.0 == ((float)piVar8[0x15] == 0.0))))))) {
                iVar7 = (**(code **)(*piVar8 + 0x40))();
                fStack_e4 = *(float *)(iVar7 + 0x2c) - *(float *)(param_1 + 0x74);
                fStack_e8 = *(float *)(iVar7 + 0x28) - *(float *)(param_1 + 0x70);
                fStack_ec = *(float *)(iVar7 + 0x24) - *pfVar1;
                fVar3 = fStack_ec * fStack_ec + fStack_e8 * fStack_e8 + fStack_e4 * fStack_e4;
                if (fVar3 < local_ac) {
                  fStack_c8 = SQRT(fVar3);
                  fVar3 = 1.0 - fStack_c8 / pfVar9[5];
                  fVar4 = param_2 * *pfVar9;
                  if (pfVar9[6] == 1.4013e-45) {
                    fVar4 = fVar4 * fVar3;
                  }
                  else if (pfVar9[6] == 2.8026e-45) {
                    fVar4 = fVar3 * fVar3 * fVar4 * fVar4;
                  }
                  if (0.0 < fVar4) {
                    fVar11 = (float10)FUN_00222f60();
                    fStack_88 = (float)fVar11;
                    fStack_8c = pfVar9[1];
                    uStack_d8 = *(undefined4 *)(iVar7 + 0x2c);
                    uStack_b0 = *(undefined4 *)(iVar7 + 0x28);
                    fStack_60 = *(float *)(iVar7 + 0x24);
                    uStack_a8 = *(undefined4 *)(param_1 + 0x70);
                    uStack_b8 = *(undefined4 *)(param_1 + 0x74);
                    fStack_48 = *pfVar1;
                    uStack_80 = 0;
                    uStack_7c = *(undefined4 *)(param_1 + 0xcc);
                    uStack_74 = *(undefined4 *)(param_1 + 0xd4);
                    bStack_34 = bStack_34 & 0xfc;
                    piStack_84 = piVar8;
                    uStack_5c = uStack_b0;
                    uStack_58 = uStack_d8;
                    uStack_44 = uStack_a8;
                    uStack_40 = uStack_b8;
                    FUN_0015b8f0(&fStack_ec,0x3727c5ac);
                    fStack_cc = fStack_e4;
                    fStack_d4 = fStack_e8;
                    fStack_64 = fStack_e4;
                    fStack_4c = -fStack_e4;
                    fStack_68 = fStack_e8;
                    fStack_50 = -fStack_e8;
                    fStack_6c = fStack_ec;
                    fStack_54 = -fStack_ec;
                    fStack_3c = ((1.0 - *(float *)(*(int *)(param_1 + 8) + 0xc58)) * 0.4 + 0.6) *
                                pfVar9[2];
                    (**(code **)piVar8[0x12])(&ppuStack_90);
                    ppuStack_90 = &PTR_LAB_003a4f50;
                  }
                }
              }
              local_e0 = (int *)*local_e0;
              iVar7 = local_dc;
            } while (local_e0 != (int *)0x0);
            local_e0 = (int *)0x0;
          }
          do {
            cVar6 = FUN_000d14d0();
            iVar10 = local_c4;
            if (cVar6 == '\0') {
              local_28 = 0;
              break;
            }
          } while (local_28 == 0);
          goto joined_r0x0021aee3;
        }
      }
      pfVar9 = pfVar9 + 7;
      pfVar5 = local_bc;
    } while (pfVar9 != local_bc);
  }
  return local_bc;
}
