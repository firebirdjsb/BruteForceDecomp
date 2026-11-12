/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F6340C78D440C62731EA5178275001795009B2411379533260958D483F53376F
 * Entry: 0x002b6640, Ghidra index: 9826, label: FUN_002b6640
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002b6640(float *param_1,float *param_2,float *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  float fVar3;
  
  fVar3 = -(*param_2 * *param_3 + param_2[1] * param_3[1] + param_2[2] * param_3[2]);
  uVar1 = *(undefined8 *)(param_3 + 1);
  uVar2 = *(undefined8 *)(param_2 + 1);
  *param_1 = *param_2 + *param_3 * fVar3;
  *(ulonglong *)(param_1 + 1) =
       CONCAT44((float)((ulonglong)uVar2 >> 0x20) + (float)((ulonglong)uVar1 >> 0x20) * fVar3,
                (float)uVar2 + (float)uVar1 * fVar3);
  return;
}
