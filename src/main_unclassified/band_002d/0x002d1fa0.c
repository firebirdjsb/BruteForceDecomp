/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9E49D4CADEA023615142B281A58191B453732221AAAD5030D645272116EFA566
 * Entry: 0x002d1fa0, Ghidra index: 10194, label: FUN_002d1fa0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_002d1fa0(int param_1,float *param_2,undefined4 param_3,undefined4 param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_50;
  float local_4c;
  float fStack_48;
  float local_20;
  undefined8 local_1c;
  float local_10;
  undefined8 local_c;
  
  FUN_00150930();
  FUN_00150930();
  fVar5 = local_10 - local_20;
  fVar7 = (float)local_c - (float)local_1c;
  fVar10 = (float)((ulonglong)local_1c >> 0x20);
  fVar9 = (float)((ulonglong)local_c >> 0x20) - fVar10;
  fVar6 = *param_2 - local_20;
  fVar8 = (float)*(undefined8 *)(param_2 + 1) - (float)local_1c;
  fVar10 = (float)((ulonglong)*(undefined8 *)(param_2 + 1) >> 0x20) - fVar10;
  auVar4._0_4_ = fVar5 * fVar5;
  auVar4._4_4_ = 0;
  auVar4._8_4_ = fVar7 * fVar7;
  auVar4._12_4_ = fVar9 * fVar9;
  auVar4 = rsqrtss(auVar4,auVar4._8_4_ + auVar4._12_4_ + auVar4._0_4_);
  fVar3 = auVar4._0_4_;
  local_50 = fVar10 * fVar7 - fVar9 * fVar8;
  local_4c = fVar9 * fVar6 - fVar10 * fVar5;
  fStack_48 = fVar8 * fVar5 - fVar7 * fVar6;
  fVar1 = SQRT(local_4c * local_4c + fStack_48 * fStack_48 + local_50 * local_50) * fVar3;
  *(float *)(param_1 + 0x58) = fVar1;
  if (fVar1 * fVar1 <= 1e-10) {
    local_50 = 1.0;
    local_4c = 0.0;
    fStack_48 = 0.0;
  }
  else {
    fVar1 = fVar3 / fVar1;
    local_50 = local_50 * fVar1;
    local_4c = local_4c * fVar1;
    fStack_48 = fStack_48 * fVar1;
  }
  *param_5 = fStack_48 * fVar7 - local_4c * fVar9;
  param_5[1] = fVar9 * local_50 - fStack_48 * fVar5;
  param_5[2] = local_4c * fVar5 - fVar7 * local_50;
  FUN_002b65a0(param_5);
  fVar1 = param_2[2];
  fVar2 = *param_2;
  param_5[9] = param_2[1];
  param_5[8] = fVar2;
  param_5[10] = fVar1;
  param_5[0x1c] = local_50;
  param_5[0x1d] = local_4c;
  param_5[0x1e] = fStack_48;
  if (*(char *)(param_1 + 0x60) == '\x01') {
    *(undefined1 *)(param_1 + 0x60) = 0;
    fVar1 = fVar3 * fVar3 * (fVar5 * fVar6 + fVar8 * fVar7 + fVar9 * fVar10);
    if ((fVar1 < 0.0) || (1.0 < fVar1)) {
      param_5[0x13] = (float)((uint)param_5[0x13] & 0xfffffdff | 0x100);
    }
  }
  return;
}
