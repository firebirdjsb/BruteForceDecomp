/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A95C8217ACB8BC3D13D783997451DD938DD268136CD6012A0440386683B583E1
 * Entry: 0x00072010, Ghidra index: 1273, label: FUN_00072010
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00072010(int param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  float10 fVar5;
  
  fVar4 = (float10)fcos((float10)param_2);
  fVar5 = (float10)fsin((float10)param_2);
  fVar1 = (float)fVar4;
  fVar2 = (float)fVar5;
  fVar3 = *(float *)(param_1 + 4);
  *(float *)(param_1 + 4) = fVar3 * fVar1 + fVar2 * *(float *)(param_1 + 8);
  *(float *)(param_1 + 8) = fVar1 * *(float *)(param_1 + 8) - fVar3 * fVar2;
  fVar3 = *(float *)(param_1 + 0x10);
  *(float *)(param_1 + 0x10) = fVar3 * fVar1 + fVar2 * *(float *)(param_1 + 0x14);
  *(float *)(param_1 + 0x14) = fVar1 * *(float *)(param_1 + 0x14) - fVar3 * fVar2;
  fVar3 = *(float *)(param_1 + 0x1c);
  *(float *)(param_1 + 0x1c) = fVar3 * fVar1 + fVar2 * *(float *)(param_1 + 0x20);
  *(float *)(param_1 + 0x20) = fVar1 * *(float *)(param_1 + 0x20) - fVar3 * fVar2;
  return param_1;
}
