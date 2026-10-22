/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2D6A61BC16572C3AD5B0E61EF6DEE90801FE5B0B1BE3281BD00DB61AAB684738
 * Entry: 0x00135d60, Ghidra index: 3883, label: FUN_00135d60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00135d60(void)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int in_EAX;
  int iVar8;
  int in_EDX;
  float *unaff_ESI;
  
  piVar1 = *(int **)(in_EDX + 4);
  iVar8 = (**(code **)(**(int **)(in_EAX + 4) + 0x40))();
  fVar2 = *(float *)(iVar8 + 0x2c) - unaff_ESI[2];
  fVar3 = *(float *)(iVar8 + 0x28) - unaff_ESI[1];
  fVar4 = *(float *)(iVar8 + 0x24) - *unaff_ESI;
  iVar8 = (**(code **)(*piVar1 + 0x40))();
  fVar5 = *(float *)(iVar8 + 0x2c) - unaff_ESI[2];
  fVar6 = *(float *)(iVar8 + 0x28) - unaff_ESI[1];
  fVar7 = *(float *)(iVar8 + 0x24) - *unaff_ESI;
  if (fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2 < fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5)
  {
    return 1;
  }
  return 0;
}
