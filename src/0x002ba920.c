/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E6CD5249D7ADAEC5DDD140653FBB1FB9FBA952A8E0C2CF5977316B66241C9546
 * Entry: 0x002ba920, Ghidra index: 9887, label: FUN_002ba920
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002ba920(undefined4 param_1,undefined4 param_2)

{
  float fVar1;
  undefined4 *in_EAX;
  int in_ECX;
  int iVar2;
  undefined4 *puVar3;
  float10 fVar4;
  undefined1 local_14 [20];
  
  if ((*(char *)(in_ECX + 100) < '\b') &&
     (fVar4 = (float10)(double)CONCAT44(param_2,param_1) - (float10)*(double *)(in_ECX + 0x70),
     fVar1 = (float)fVar4, fVar4 != (float10)0.0)) {
    FUN_002b4370(local_14,in_ECX + 0xdc,in_ECX + 0xec,fVar1 * *(float *)(in_ECX + 0x78));
    FUN_002b4100();
    FUN_002b3e60(in_EAX + 0xc,in_ECX + 0xbc,in_ECX + 0xcc,fVar1);
    return;
  }
  puVar3 = (undefined4 *)(in_ECX + 0xfc);
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *in_EAX = *puVar3;
    puVar3 = puVar3 + 1;
    in_EAX = in_EAX + 1;
  }
  return;
}
