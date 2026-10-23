/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 56854F87AF82B0B8E08A44E207A2E58F986F8AABF682B977260B6DE0EFE031B4
 * Entry: 0x002b65a0, Ghidra index: 9825, label: FUN_002b65a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002b65a0(float *param_1)

{
  float fVar2;
  undefined1 auVar1 [16];
  float fVar3;
  
  auVar1._0_4_ = *param_1 * *param_1;
  auVar1._4_4_ = 0;
  fVar3 = (float)*(undefined8 *)(param_1 + 1);
  fVar2 = (float)((ulonglong)*(undefined8 *)(param_1 + 1) >> 0x20);
  auVar1._8_4_ = fVar3 * fVar3;
  auVar1._12_4_ = fVar2 * fVar2;
  fVar3 = auVar1._8_4_ + auVar1._12_4_ + auVar1._0_4_;
  if (fVar3 < 1e-10) {
    return 0;
  }
  auVar1 = rsqrtss(auVar1,fVar3);
  fVar3 = auVar1._0_4_;
  *param_1 = fVar3 * *param_1;
  param_1[1] = fVar3 * param_1[1];
  param_1[2] = fVar3 * param_1[2];
  return 1;
}
