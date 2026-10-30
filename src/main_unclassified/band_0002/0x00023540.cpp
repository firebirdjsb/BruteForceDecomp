/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9927AB0A419D6D01C8568FD4F159724C3C2DD07EAB9521A9FED0D6572FFA7755
 * Entry: 0x00023540, Ghidra index: 226, label: FUN_00023540
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_00023540(int *param_1,float *param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  
  fVar4 = (float10)3.4028235e+38;
  iVar1 = *param_1;
  if ((iVar1 != 0) && ((*(byte *)(param_1 + 0xc) & 2) != 0)) {
    fVar2 = param_2[2] - *(float *)(iVar1 + 0x1c);
    fVar3 = *param_2 - *(float *)(iVar1 + 0x14);
    fVar4 = (float10)(float)param_1[10] - (float10)SQRT(fVar3 * fVar3 + fVar2 * fVar2 + 0.0);
  }
  return fVar4;
}
