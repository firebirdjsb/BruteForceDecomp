/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D040EB9CFF629D1CE789332F83C6CC75F57B8E0DC023661597F400B4BE619636
 * Entry: 0x002b73d0, Ghidra index: 9846, label: FUN_002b73d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002b73d0(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = *param_2;
  uVar2 = *(undefined8 *)(param_1 + 1);
  fVar5 = (float)*(undefined8 *)(param_2 + 1);
  fVar6 = (float)((ulonglong)*(undefined8 *)(param_2 + 1) >> 0x20);
  uVar3 = *(undefined8 *)(param_1 + 5);
  uVar4 = *(undefined8 *)(param_1 + 9);
  *param_3 = *param_1 * fVar1 + param_1[4] * fVar5 + param_1[8] * fVar6;
  *(ulonglong *)(param_3 + 1) =
       CONCAT44((float)((ulonglong)uVar2 >> 0x20) * fVar1 +
                (float)((ulonglong)uVar3 >> 0x20) * fVar5 +
                (float)((ulonglong)uVar4 >> 0x20) * fVar6,
                (float)uVar2 * fVar1 + (float)uVar3 * fVar5 + (float)uVar4 * fVar6);
  return;
}
