/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 318FA54D18E7D051D92D3D70A88D371C07EE6197481107926D679D8EDC4765E6
 * Entry: 0x002b2b10, Ghidra index: 9749, label: FUN_002b2b10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002b2b10(int param_1,float *param_2,double param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  float fVar3;
  
  fVar3 = (float)((float10)param_3 - (float10)*(double *)(param_1 + 0x70));
  uVar1 = *(undefined8 *)(param_1 + 0xd0);
  uVar2 = *(undefined8 *)(param_1 + 0xc0);
  *param_2 = *(float *)(param_1 + 0xbc) + *(float *)(param_1 + 0xcc) * fVar3;
  *(ulonglong *)(param_2 + 1) =
       CONCAT44((float)((ulonglong)uVar2 >> 0x20) + (float)((ulonglong)uVar1 >> 0x20) * fVar3,
                (float)uVar2 + (float)uVar1 * fVar3);
  return;
}
