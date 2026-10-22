/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BFF816FA79EAFB2094AA03CBB65344540FB36CE412A2FEADD38B2DC986DA8E4B
 * Entry: 0x001e8b20, Ghidra index: 6842, label: FUN_001e8b20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_001e8b20(ushort *param_1,float param_2)

{
  float fVar1;
  undefined4 in_EAX;
  uint uVar2;
  ushort uVar3;
  
  uVar3 = (ushort)((uint)in_EAX >> 0x10);
  uVar2 = (uint)CONCAT21(uVar3,param_2 < *(float *)(param_1 + 6)) << 8;
  if ((param_2 >= *(float *)(param_1 + 6)) &&
     (uVar2 = (uint)uVar3 << 0x10, param_2 < *(float *)(param_1 + 4))) {
    fVar1 = (param_2 - *(float *)(param_1 + 6)) /
            (*(float *)(param_1 + 4) - *(float *)(param_1 + 6));
    return (int)((float)param_1[2] * fVar1 + (1.0 - fVar1) * (float)*param_1);
  }
  return uVar2 & 0xffff0000;
}
