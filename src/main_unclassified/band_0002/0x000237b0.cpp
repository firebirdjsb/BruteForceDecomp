/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6EE882BDAE88DD2ADD8AE35710697D99B1507ED512621B7061EB9007CB261125
 * Entry: 0x000237b0, Ghidra index: 231, label: FUN_000237b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Restarted to delay deadcode elimination for space: stack */

float * FUN_000237b0(int param_1,float *param_2,float param_3)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = *(float *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  fVar3 = *(float *)(param_1 + 0x44);
  fVar4 = *(float *)(param_1 + 0x40);
  *param_2 = param_3 * fVar2 * *(float *)(param_1 + 0x4c) + *(float *)(param_1 + 0x3c);
  param_2[1] = param_3 * fVar2 * (float)uVar1 + fVar4;
  param_2[2] = param_3 * fVar2 * (float)((ulonglong)uVar1 >> 0x20) + fVar3;
  return param_2;
}
