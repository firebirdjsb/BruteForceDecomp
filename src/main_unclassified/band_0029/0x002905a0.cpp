/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 59D65C3E74D716864A8F4784EB148BEFC0647B92F85B6F107558645010EF3635
 * Entry: 0x002905a0, Ghidra index: 9225, label: FUN_002905a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002905a0(undefined4 param_1,float *param_2,float *param_3,float param_4,float *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  float fVar3;
  
  uVar1 = *(undefined8 *)(param_3 + 1);
  fVar3 = 1.0 - param_4;
  uVar2 = *(undefined8 *)(param_2 + 1);
  *param_5 = param_4 * *param_3 + fVar3 * *param_2;
  param_5[1] = param_4 * (float)uVar1 + fVar3 * (float)uVar2;
  param_5[2] = param_4 * (float)((ulonglong)uVar1 >> 0x20) +
               fVar3 * (float)((ulonglong)uVar2 >> 0x20);
  return;
}
