/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2A28C11D5431D5F8D4ABDC818D14B67B7D59DB6D37942A3B9984C5EC860DF5A7
 * Entry: 0x00221ec0, Ghidra index: 7578, label: FUN_00221ec0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include <xmmintrin.h>
/* Ghidra SSE scalar opcode model; only observed low lane is reconstructed.
 * Original ABI, upper lanes and game behavior remain UNVERIFIED. */
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046d064;
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00221ec0(int param_1,float param_2)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  char cVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  __m128 auVar9;
  int *local_a0;
  float local_90;
  float local_8c;
  undefined1 local_88 [4];
  undefined4 *local_84;
  undefined4 local_80;
  float local_7c;
  float local_78;
  float local_74;
  int *local_70;
  undefined4 local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  undefined4 local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float fStack_40;
  float local_3c;
  undefined4 local_38;
  float local_34;
  float local_c;
  float local_8;
  float local_4;
  
  local_a0 = (int *)0x0;
  *(float *)(param_1 + 0x1b4) = param_2 + *(float *)(param_1 + 0x1b4);
  if (*(int *)(param_1 + 0x1c0) == 0) {
    return;
  }
  puVar5 = (undefined4 *)FUN_00061500(local_88);
  local_80 = 0;
  if (*(undefined4 **)(param_1 + 0x1bc) != (undefined4 *)0x0) {
    local_a0 = (int *)**(undefined4 **)(param_1 + 0x1bc);
  }
  local_70 = *(int **)(param_1 + 0x1bc);
  local_84 = puVar5;
  if (local_a0 != local_70) {
    do {
      local_90 = (float)local_a0[9];
      if (local_90 == 0.0) {
        piVar3 = (int *)*local_a0;
        if (local_a0 != *(int **)(param_1 + 0x1bc)) {
          *(int **)local_a0[1] = (int *)*local_a0;
          *(int *)(*local_a0 + 4) = local_a0[1];
          if (local_a0[9] != 0) {
            FUN_0008f6e0();
          }
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00237ec0(local_a0);
        }
      }
      else {
        if ((*(float *)(*(int *)(param_1 + 0xc) + 0x1cc) != 0.0) &&
           ((*(byte *)((int)local_90 + 0x70) & 1) == 0)) {
          if (puVar5 == (undefined4 *)0x0) {
            puVar6 = (undefined4 *)0x0;
          }
          else {
            puVar6 = (undefined4 *)*puVar5;
          }
          for (; puVar6 != puVar5; puVar6 = (undefined4 *)*puVar6) {
            if ((float)puVar6[2] == local_90) {
              if (puVar6 != puVar5) goto LAB_00221fc0;
              break;
            }
          }
          iVar7 = FUN_000ff730(local_88,puVar5,puVar5[1],&local_90);
          FUN_000b2a50();
          puVar5[1] = iVar7;
          **(int **)(iVar7 + 4) = iVar7;
          puVar5 = local_84;
        }
LAB_00221fc0:
        fVar1 = local_90;
        if (*(int *)(*(int *)((int)local_90 + 0xc) + 4) == 3) {
          puVar6 = (undefined4 *)FUN_00076310();
          *(undefined4 *)((int)fVar1 + 0x410) = *puVar6;
        }
        if (*(int *)(*(int *)(param_1 + 0xc) + 0x164) == DAT_0046d064) {
          local_a0[7] = (int)*(float *)(param_1 + 0x1b4);
          piVar3 = (int *)*local_a0;
        }
        else {
          if ((float)local_a0[7] < *(float *)(param_1 + 0x1b4) - 0.2) {
            cVar4 = FUN_00222480();
            if (cVar4 == '\0') {
              iVar7 = *(int *)(param_1 + 0x1b4);
            }
            else {
              fVar1 = local_74 - (float)local_a0[5];
              local_90 = local_78 - (float)local_a0[4];
              fVar2 = local_7c - (float)local_a0[3];
              local_8c = SQRT(fVar2 * fVar2 + fVar1 * fVar1 + local_90 * local_90);
              puVar5 = local_84;
              if ((local_8c <= *(float *)(*(int *)(param_1 + 0xc) + 0x1b4)) ||
                 ((fVar2 == 0.0 && (fVar1 == 0.0)))) goto LAB_00222218;
              auVar9 = _mm_rcp_ss(_mm_set_ss(local_8c));
              local_54 = _mm_cvtss_f32(auVar9);
              local_48 = local_54 * fVar2;
              local_44 = local_54 * local_90;
              local_54 = local_54 * fVar1;
              local_38 = 0;
              local_64 = local_8c;
              fStack_40 = local_54;
              local_3c = local_48;
              local_34 = local_54;
              FUN_0001d0c0();
              local_60 = local_74;
              local_c = local_7c;
              local_68 = local_78;
              local_8 = local_78;
              local_4 = local_74;
              local_58 = 0x3f800000;
              local_6c = 0;
              local_4c = ((local_8c - *(float *)(*(int *)(param_1 + 0xc) + 0x1b4)) / param_2) *
                         *(float *)(*(int *)(param_1 + 0xc) + 0x1b8);
              if (local_4c <= 0.0) {
                local_4c = 0.0;
              }
              if (1.0 <= local_4c) {
                local_4c = 1.0;
              }
              FUN_000def50(local_4c);
              local_50 = local_74;
              local_5c = local_78;
              local_a0[3] = (int)local_7c;
              local_a0[4] = (int)local_78;
              local_a0[5] = (int)local_74;
              iVar7 = *(int *)(param_1 + 0x1b4);
            }
            local_a0[7] = iVar7;
            puVar5 = local_84;
          }
LAB_00222218:
          piVar3 = (int *)*local_a0;
        }
      }
      local_a0 = piVar3;
    } while (local_a0 != local_70);
  }
  if (puVar5 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar6 = (undefined4 *)*puVar5;
  }
  for (; puVar6 != puVar5; puVar6 = (undefined4 *)*puVar6) {
    FUN_00221a40(*(float *)(*(int *)(param_1 + 0xc) + 0x1cc) * param_2);
  }
  if (puVar5 == (undefined4 *)0x0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *puVar5;
  }
  FUN_001298b0(&local_70,uVar8,puVar5);
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(local_84);
}
