/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 81FB1F78BFF6708827BEA2B939F2DF843754780FA49493248C438E2237789BFE
 * Entry: 0x00049cf0, Ghidra index: 594, label: FUN_00049cf0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00414da0;
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00049cf0(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  float fVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  float fVar12;
  int *piVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined4 local_44;
  int local_40;
  int *local_3c;
  int *local_38;
  int *local_34;
  float local_30;
  undefined8 local_2c;
  undefined4 uStack_24;
  float local_1c;
  int *local_18;
  undefined4 local_14;
  int local_c;
  int local_8;
  undefined4 local_4;
  
  *(undefined4 *)(param_1 + 0x44c) = 0;
  *(undefined4 *)(param_1 + 0x448) = 0;
  *(undefined4 *)(param_1 + 0x444) = 0;
  if (*(int *)(param_1 + 0x454) != 0) {
    FUN_0008f6a0(0);
  }
  local_40 = **(int **)(*(int *)(param_1 + 0x358) + 4);
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  if (local_40 != *(int *)(*(int *)(param_1 + 0x358) + 4)) {
    do {
      local_44 = *(undefined4 *)(local_40 + 0x10);
      if ((*(int *)(local_40 + 0x70) == 1) && ((*(uint *)(local_40 + 0x8c) >> 5 & 1) != 0)) {
        if ((local_c == 0) || (local_34 = (int *)(local_8 - local_c >> 4), local_34 == (int *)0x0))
        {
          local_1c = 0.0;
          local_18 = (int *)0x0;
          local_14 = 0;
          FUN_001611d0();
          FUN_0004ade0();
          FUN_0004aef0();
          if (local_1c != 0.0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00237ec0(local_1c);
          }
          local_1c = 0.0;
          local_18 = (int *)0x0;
          local_14 = 0;
        }
        else {
          bVar6 = false;
          piVar13 = (int *)(local_c + 4);
          for (local_3c = (int *)0x0; uVar11 = 0, local_38 = piVar13, local_3c < local_34;
              local_3c = (int *)((int)local_3c + 1)) {
            while( true ) {
              iVar7 = *piVar13;
              if ((iVar7 == 0) || ((uint)(piVar13[1] - iVar7 >> 2) <= uVar11)) goto LAB_00049edf;
              piVar1 = *(int **)(local_40 + 0x10);
              iVar7 = (**(code **)(**(int **)(iVar7 + uVar11 * 4) + 0x40))();
              iVar10 = (**(code **)(*piVar1 + 0x40))();
              fVar14 = *(float *)(iVar7 + 0x2c) - *(float *)(iVar10 + 0x2c);
              fVar4 = *(float *)(iVar7 + 0x28) - *(float *)(iVar10 + 0x28);
              fVar12 = *(float *)(iVar7 + 0x24) - *(float *)(iVar10 + 0x24);
              if (fVar14 * fVar14 + fVar4 * fVar4 + fVar12 * fVar12 < 100.0) break;
              uVar11 = uVar11 + 1;
            }
            bVar6 = true;
            FUN_0001b650();
            piVar1 = local_38;
            iVar7 = *local_38;
            if ((iVar7 == 0) ||
               ((uint)(local_38[2] - iVar7 >> 2) <= (uint)(local_38[1] - iVar7 >> 2))) {
              FUN_000a7d80(local_38[1],&local_44);
            }
            else {
              iVar7 = local_38[1];
              FUN_0003efa0(iVar7,1,piVar13 + -1,param_1);
              piVar1[1] = iVar7 + 4;
            }
LAB_00049edf:
            piVar13 = local_38 + 4;
          }
          if (!bVar6) {
            local_2c = 0;
            uStack_24 = 0;
            FUN_001611d0();
            FUN_0004ade0();
            FUN_0004aef0();
            if ((float)local_2c != 0.0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00237ec0((float)local_2c);
            }
            local_2c._0_4_ = 0.0;
            local_2c._4_4_ = (int *)0x0;
            uStack_24 = 0;
          }
        }
      }
      iVar7 = 0;
      FUN_0001c5d0();
    } while (local_40 != *(int *)(*(int *)(param_1 + 0x358) + 4));
    if (local_c != 0) {
      local_34 = (int *)(local_8 - local_c >> 4);
      iVar10 = local_c;
      iVar9 = local_c;
      iVar5 = local_8;
      if (local_34 != (int *)0x0) {
        fVar14 = 0.0;
        piVar13 = (int *)(local_c + 0x14);
        local_38 = (int *)(-4 - local_c);
        for (fVar12 = 1.4013e-45; (uint)fVar12 < local_34; fVar12 = (float)((int)fVar12 + 1)) {
          if (*piVar13 == 0) {
            uVar11 = 0;
          }
          else {
            uVar11 = piVar13[1] - *piVar13 >> 2;
          }
          iVar2 = *(int *)(iVar7 + 4 + local_c);
          if (iVar2 == 0) {
            uVar8 = 0;
          }
          else {
            uVar8 = *(int *)(iVar7 + 8 + local_c) - iVar2 >> 2;
          }
          if (uVar8 < uVar11) {
            iVar7 = (int)local_38 + (int)piVar13;
            fVar14 = fVar12;
          }
          piVar13 = piVar13 + 4;
        }
        iVar7 = (int)fVar14 * 0x10 + local_c;
        if ((*(int *)(iVar7 + 4) != 0) &&
           (2 < (uint)(*(int *)(iVar7 + 8) - *(int *)(iVar7 + 4) >> 2))) {
          local_2c._0_4_ = 0.0;
          local_2c._4_4_ = (int *)0x0;
          local_30 = 0.0;
          for (uVar11 = 0;
              (iVar10 = *(int *)(iVar7 + 4), iVar10 != 0 &&
              (uVar11 < (uint)(*(int *)(iVar7 + 8) - iVar10 >> 2))); uVar11 = uVar11 + 1) {
            iVar9 = (**(code **)(**(int **)(iVar10 + uVar11 * 4) + 0x40))();
            local_38 = *(int **)(iVar9 + 0x2c);
            local_34 = *(int **)(iVar9 + 0x28);
            iVar10 = *(int *)(*(int *)(iVar7 + 4) + uVar11 * 4);
            fVar14 = (float)local_34;
            if (*(int *)(*(int *)(iVar10 + 0xc) + 4) == 3) {
              fVar14 = *(float *)(iVar10 + 0x438);
            }
            local_30 = *(float *)(iVar9 + 0x24) + local_30;
            local_2c._0_4_ = (float)local_2c + fVar14;
            local_2c._4_4_ = (int *)((float)local_38 + (float)local_2c._4_4_);
            local_1c = (float)local_34;
            local_18 = local_38;
          }
          if (*(int *)(iVar7 + 4) == 0) {
            iVar10 = 0;
          }
          else {
            iVar10 = *(int *)(iVar7 + 8) - *(int *)(iVar7 + 4) >> 2;
          }
          local_38 = (int *)(float)iVar10;
          if (iVar10 < 0) {
            local_38 = (int *)((float)local_38 + 4.2949673e+09);
          }
          auVar15 = rcpss(ZEXT416(local_38),ZEXT416(local_38));
          fVar14 = auVar15._0_4_;
          local_30 = local_30 * fVar14;
          local_2c._0_4_ = (float)local_2c * fVar14;
          local_2c._4_4_ = (int *)((float)local_2c._4_4_ * fVar14);
          local_34 = (int *)0x56b5e61f;
          uVar8 = 0;
          uVar11 = 0;
          while ((iVar10 = *(int *)(iVar7 + 4), iVar10 != 0 &&
                 (uVar8 < (uint)(*(int *)(iVar7 + 8) - iVar10 >> 2)))) {
            iVar10 = (**(code **)(**(int **)(iVar10 + uVar8 * 4) + 0x40))();
            local_3c = (int *)((float)local_2c._4_4_ - *(float *)(iVar10 + 0x2c));
            local_38 = (int *)((float)local_2c - *(float *)(iVar10 + 0x28));
            fVar14 = local_30 - *(float *)(iVar10 + 0x24);
            fVar14 = fVar14 * fVar14 +
                     (float)local_38 * (float)local_38 + (float)local_3c * (float)local_3c;
            local_1c = (float)local_38;
            local_18 = local_3c;
            if ((float)local_34 <= fVar14) {
              uVar8 = uVar8 + 1;
            }
            else {
              uVar11 = *(uint *)(*(int *)(iVar7 + 4) + uVar8 * 4);
              uVar8 = uVar8 + 1;
              local_34 = (int *)fVar14;
            }
          }
          if (uVar11 != 0) {
            uVar8 = *(uint *)(param_1 + 0x454);
            piVar13 = (int *)(param_1 + 0x450);
            if (uVar8 != uVar11) {
              if ((uVar8 != 0) && ((uVar8 & 1) == 0)) {
                *(undefined4 *)(param_1 + 0x454) = 0;
                iVar7 = *(int *)(&DAT_00414da0 + (uVar8 * 0x19660d + 0x3c6ef35f >> 0x15) * 4);
                piVar1 = (int *)(&DAT_00414da0 + (uVar8 * 0x19660d + 0x3c6ef35f >> 0x15) * 4);
                while (iVar7 != 0) {
                  piVar3 = (int *)*piVar1;
                  if (piVar3 == piVar13) {
                    *piVar1 = *(int *)*piVar1;
                    break;
                  }
                  piVar1 = piVar3;
                  iVar7 = *piVar3;
                }
              }
              *(uint *)(param_1 + 0x454) = uVar11;
              if ((uVar11 & 1) == 0) {
                uVar11 = uVar11 * 0x19660d + 0x3c6ef35f >> 0x15;
                *piVar13 = *(int *)(&DAT_00414da0 + uVar11 * 4);
                *(int **)(&DAT_00414da0 + uVar11 * 4) = piVar13;
              }
            }
          }
          *(float *)(param_1 + 0x444) = local_30;
          *(float *)(param_1 + 0x448) = (float)local_2c;
          *(int **)(param_1 + 0x44c) = local_2c._4_4_;
          local_38 = local_2c._4_4_;
          local_34 = (int *)(float)local_2c;
          iVar10 = local_c;
          iVar9 = local_c;
          iVar5 = local_8;
        }
      }
      for (; iVar2 = local_8, iVar7 = local_c, local_c = iVar9, iVar10 != local_8;
          iVar10 = iVar10 + 0x10) {
        local_8 = iVar5;
        FUN_0004f7f0();
        iVar9 = local_c;
        iVar5 = local_8;
        local_8 = iVar2;
        local_c = iVar7;
      }
      local_8 = iVar5;
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(iVar7);
    }
  }
  return;
}
