/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 85912904A8498B200AAA1B91623A5761EBE2D424E30795F1F61105B085549D97
 * Entry: 0x002d22b0, Ghidra index: 10195, label: FUN_002d22b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t _DAT_00469f28;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_002d22b0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float10 fVar11;
  float *in_stack_00000018;
  undefined4 *in_stack_0000001c;
  float local_b8;
  float local_b4;
  float fStack_b0;
  undefined4 local_ac;
  float local_a8;
  float local_a4;
  float fStack_a0;
  undefined4 local_9c;
  float local_98;
  float local_94;
  float fStack_90;
  undefined4 local_8c;
  float *local_88;
  float local_84;
  float local_80;
  float fStack_7c;
  undefined4 local_78;
  float local_74;
  float local_70;
  float fStack_6c;
  undefined4 local_68;
  float local_64;
  float local_60;
  float fStack_5c;
  undefined4 local_58;
  float *local_54;
  float local_50;
  float local_4c;
  float fStack_48;
  undefined4 local_44;
  float local_40;
  float local_3c;
  float fStack_38;
  undefined4 local_34;
  float local_30;
  float local_2c;
  float fStack_28;
  undefined4 local_24;
  float local_20;
  undefined8 local_1c;
  undefined4 local_14;
  float local_10;
  undefined8 local_c;
  undefined4 local_4;
  
  local_ac = 0;
  local_8c = 0;
  local_9c = 0;
  FUN_00150930();
  local_58 = 0;
  FUN_00150930();
  local_78 = 0;
  FUN_00150930();
  local_44 = 0;
  FUN_00150930();
  local_88 = &local_98;
  local_98 = local_50 - local_84;
  local_94 = local_4c - local_80;
  fStack_90 = fStack_48 - fStack_7c;
  FUN_002b65a0(&local_98);
  local_88 = &local_b8;
  local_b8 = local_64 - local_a8;
  local_b4 = local_60 - local_a4;
  fStack_b0 = fStack_5c - fStack_a0;
  FUN_002b65a0(&local_b8);
  fVar1 = fStack_90 * local_b4 - fStack_b0 * local_94;
  fVar2 = fStack_b0 * local_98 - fStack_90 * local_b8;
  fVar3 = local_94 * local_b8 - local_b4 * local_98;
  local_88 = (float *)(fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1);
  if ((float)local_88 <= 1e-12) {
    in_stack_00000018[0x13] = (float)((uint)in_stack_00000018[0x13] & 0xfffffdff | 0x100);
    in_stack_0000001c[2] = 0;
    in_stack_0000001c[1] = 0;
    *in_stack_0000001c = 0;
    *(undefined4 *)(param_1 + 0x58) = _DAT_00469f28;
    in_stack_00000018[8] = local_a8;
    in_stack_00000018[9] = local_a4;
    in_stack_00000018[10] = fStack_a0;
    *in_stack_00000018 = 1.0;
    in_stack_00000018[1] = 0.0;
    in_stack_00000018[2] = 0.0;
    in_stack_00000018[0x1c] = 0.0;
    in_stack_00000018[0x1d] = 1.0;
    in_stack_00000018[0x1e] = 0.0;
  }
  else {
    fVar4 = fVar3 * local_b4 - fVar2 * fStack_b0;
    fVar7 = fStack_b0 * fVar1 - fVar3 * local_b8;
    fVar6 = fVar2 * local_b8 - local_b4 * fVar1;
    fVar8 = fVar3 * local_94 - fVar2 * fStack_90;
    fVar9 = fStack_90 * fVar1 - fVar3 * local_98;
    fVar10 = fVar2 * local_98 - local_94 * fVar1;
    fVar5 = fVar4 * local_84 + local_80 * fVar7 + fStack_7c * fVar6;
    fVar4 = (fVar5 - (fVar4 * local_a8 + local_a4 * fVar7 + fStack_a0 * fVar6)) *
            (1.0 / (fVar5 - (fVar4 * local_50 + local_4c * fVar7 + fStack_48 * fVar6)));
    local_14 = 0;
    local_4 = 0;
    fVar5 = fVar8 * local_a8 + local_a4 * fVar9 + fStack_a0 * fVar10;
    fVar5 = (fVar5 - (fVar8 * local_84 + local_80 * fVar9 + fStack_7c * fVar10)) *
            (1.0 / (fVar5 - (fVar8 * local_64 + local_60 * fVar9 + fStack_5c * fVar10)));
    local_20 = local_64 - local_a8;
    local_1c = CONCAT44(fStack_5c - fStack_a0,local_60 - local_a4);
    local_10 = local_50 - local_84;
    local_c = CONCAT44(fStack_48 - fStack_7c,local_4c - local_80);
    fVar6 = 1.0 - fVar5;
    local_34 = 0;
    local_68 = 0;
    local_40 = local_64 * fVar5 + local_a8 * fVar6;
    local_54 = &local_74;
    local_3c = local_60 * fVar5 + local_a4 * fVar6;
    local_24 = 0;
    fStack_38 = fStack_5c * fVar5 + fStack_a0 * fVar6;
    fVar6 = 1.0 - fVar4;
    local_74 = local_50 * fVar4 + local_84 * fVar6;
    local_70 = local_4c * fVar4 + local_80 * fVar6;
    fStack_6c = fStack_48 * fVar4 + fStack_7c * fVar6;
    local_30 = local_74 - local_40;
    local_2c = local_70 - local_3c;
    fStack_28 = fStack_6c - fStack_38;
    fVar11 = (float10)FUN_002b67e0(&local_30);
    if (fVar11 <= (float10)1e-10) {
      *(undefined4 *)(param_1 + 0x58) = 0;
      fVar6 = 1.0 / SQRT((float)local_88);
      *in_stack_00000018 = fVar6 * fVar1;
      in_stack_00000018[1] = fVar2 * fVar6;
      in_stack_00000018[2] = fVar3 * fVar6;
    }
    else {
      *(float *)(param_1 + 0x58) = (float)fVar11;
      fVar11 = (float10)1.0 / fVar11;
      *in_stack_00000018 = (float)((float10)local_30 * fVar11);
      in_stack_00000018[1] = (float)((float10)local_2c * fVar11);
      in_stack_00000018[2] = (float)((float10)fStack_28 * fVar11);
    }
    in_stack_00000018[0x1d] = local_b4;
    in_stack_00000018[0x1c] = local_b8;
    in_stack_00000018[0x1e] = fStack_b0;
    in_stack_00000018[8] = local_40;
    in_stack_00000018[9] = local_3c;
    in_stack_00000018[10] = fStack_38;
    if ((*(char *)(param_1 + 0x60) == '\x01') &&
       ((((*(undefined1 *)(param_1 + 0x60) = 0, fVar4 < 0.0 || (1.0 < fVar4)) || (fVar5 < 0.0)) ||
        (1.0 < fVar5)))) {
      in_stack_00000018[0x13] = (float)((uint)in_stack_00000018[0x13] & 0xfffffdff | 0x100);
      return;
    }
  }
  return;
}
