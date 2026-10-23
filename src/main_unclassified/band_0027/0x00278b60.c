/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 37C92EB883E47D3FCCD9F9AFA59122901F1FEF3FAD233E7452E3B20B9D26B9A7
 * Entry: 0x00278b60, Ghidra index: 8924, label: FUN_00278b60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_00278b60(float param_1)

{
  float *pfVar1;
  int in_EAX;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  float10 fVar5;
  
  pfVar1 = *(float **)(in_EAX + 4);
  if (pfVar1 == (float *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(in_EAX + 8) - (int)pfVar1 >> 4;
  }
  if (iVar2 == 1) {
    return (float10)*pfVar1;
  }
  pfVar3 = pfVar1 + (iVar2 + -1) * 4;
  if (param_1 < pfVar1[1]) {
    return (float10)*pfVar1;
  }
  if (pfVar3[1] < param_1) {
    return (float10)*pfVar3;
  }
  iVar2 = FUN_002ebf10();
  pfVar4 = pfVar1 + iVar2 * 4;
  if (pfVar1[iVar2 * 4 + 1] <= param_1) {
    for (; (pfVar4 <= pfVar3 && (pfVar4[1] <= param_1)); pfVar4 = pfVar4 + 4) {
    }
  }
  else {
    for (; (pfVar1 < pfVar4 && (param_1 <= pfVar4[1])); pfVar4 = pfVar4 + -4) {
    }
  }
  fVar5 = (float10)FUN_00278ad0(param_1);
  return fVar5;
}
