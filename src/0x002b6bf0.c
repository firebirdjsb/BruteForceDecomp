/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A0DB3B7ABD81C55609D8F7380B6F1185DD841F3753A4B5D79CEC6368B45DA42A
 * Entry: 0x002b6bf0, Ghidra index: 9834, label: FUN_002b6bf0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_002b6bf0(int param_1,int param_2,float *param_3)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  FUN_002b6cb0();
  fVar2 = *(float *)(param_2 + 0x38);
  fVar3 = *(float *)(param_2 + 0x34);
  fVar4 = *(float *)(param_2 + 0x30);
  fVar5 = *(float *)(param_2 + 0x38);
  fVar6 = *(float *)(param_2 + 0x34);
  fVar7 = *(float *)(param_2 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x34);
  param_3[0xc] = *(float *)(param_1 + 0x30) -
                 (*param_3 * *(float *)(param_2 + 0x30) +
                 param_3[1] * *(float *)(param_2 + 0x34) + param_3[2] * *(float *)(param_2 + 0x38));
  *(ulonglong *)(param_3 + 0xd) =
       CONCAT44((float)((ulonglong)uVar1 >> 0x20) -
                (param_3[8] * fVar7 + param_3[9] * fVar6 + param_3[10] * fVar5),
                (float)uVar1 - (param_3[4] * fVar4 + param_3[5] * fVar3 + param_3[6] * fVar2));
  return;
}
