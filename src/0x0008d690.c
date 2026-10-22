/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0CEB51E965BF3481C4DA0EB946D83120AC5D10ED139AB68D8361E05C86C8776F
 * Entry: 0x0008d690, Ghidra index: 1713, label: FUN_0008d690
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_0008d690(float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int *in_EAX;
  int iVar5;
  int iVar6;
  float *unaff_ESI;
  
  iVar4 = (int)param_1;
  param_1 = 1e+20;
  iVar6 = 8;
  do {
    in_EAX = in_EAX + 2;
    iVar5 = *in_EAX;
    if (((iVar5 != 0) && (iVar5 != iVar4)) && (*(int **)(iVar5 + 0x10) != (int *)0x0)) {
      iVar5 = (**(code **)(**(int **)(iVar5 + 0x10) + 0x40))();
      fVar1 = *(float *)(iVar5 + 0x2c) - unaff_ESI[2];
      fVar2 = *(float *)(iVar5 + 0x28) - unaff_ESI[1];
      fVar3 = *(float *)(iVar5 + 0x24) - *unaff_ESI;
      fVar1 = fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1;
      if (fVar1 < param_1) {
        param_1 = fVar1;
      }
    }
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  return (float10)param_1;
}
