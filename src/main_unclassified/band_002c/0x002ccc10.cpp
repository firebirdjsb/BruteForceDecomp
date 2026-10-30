/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 75A9A41869FF7B7C222C6F80344F3B6D42D3271ECBF3C1924643EBC9EBF61C05
 * Entry: 0x002ccc10, Ghidra index: 10153, label: FUN_002ccc10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002ccc10(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = *param_4 - *param_2;
  fVar5 = (float)*(undefined8 *)(param_2 + 1);
  fVar2 = (float)*(undefined8 *)(param_4 + 1) - fVar5;
  fVar6 = (float)((ulonglong)*(undefined8 *)(param_2 + 1) >> 0x20);
  fVar3 = (float)((ulonglong)*(undefined8 *)(param_4 + 1) >> 0x20) - fVar6;
  fVar4 = *param_3 - *param_2;
  fVar5 = (float)*(undefined8 *)(param_3 + 1) - fVar5;
  fVar6 = (float)((ulonglong)*(undefined8 *)(param_3 + 1) >> 0x20) - fVar6;
  *param_1 = fVar2 * fVar6 - fVar3 * fVar5;
  *(ulonglong *)(param_1 + 1) =
       CONCAT44(fVar1 * fVar5 - fVar2 * fVar4,fVar3 * fVar4 - fVar1 * fVar6);
  return;
}
