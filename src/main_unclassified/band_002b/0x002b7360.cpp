/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8951BF145B71ABAD31FE514396FBA371A104DDBC96CD73C9B6406736AF29284B
 * Entry: 0x002b7360, Ghidra index: 9845, label: FUN_002b7360
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002b7360(float *param_1,float *param_2,float *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  uVar1 = *(undefined8 *)(param_1 + 1);
  fVar4 = *param_2 - param_1[0xc];
  fVar5 = (float)*(undefined8 *)(param_2 + 1) - (float)*(undefined8 *)(param_1 + 0xd);
  fVar6 = (float)((ulonglong)*(undefined8 *)(param_2 + 1) >> 0x20) -
          (float)((ulonglong)*(undefined8 *)(param_1 + 0xd) >> 0x20);
  uVar2 = *(undefined8 *)(param_1 + 5);
  uVar3 = *(undefined8 *)(param_1 + 9);
  *param_3 = *param_1 * fVar4 + param_1[4] * fVar5 + param_1[8] * fVar6;
  *(ulonglong *)(param_3 + 1) =
       CONCAT44((float)((ulonglong)uVar1 >> 0x20) * fVar4 +
                (float)((ulonglong)uVar2 >> 0x20) * fVar5 +
                (float)((ulonglong)uVar3 >> 0x20) * fVar6,
                (float)uVar1 * fVar4 + (float)uVar2 * fVar5 + (float)uVar3 * fVar6);
  return;
}
