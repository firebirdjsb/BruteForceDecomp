/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A23EA04AFFB256BD656FC597362515AFE8429BFA6418A4535E6123574E3A24AD
 * Entry: 0x0004d140, Ghidra index: 646, label: FUN_0004d140
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined1 FUN_0004d140(int *param_1,undefined4 param_2,undefined4 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined1 uVar9;
  int *unaff_EDI;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  
  piVar6 = (int *)(**(code **)(*unaff_EDI + 4))();
  iVar7 = (**(code **)(*piVar6 + 0xf8))();
  if (iVar7 == 0) {
    return 0;
  }
  uVar9 = 1;
  fVar10 = (float10)(**(code **)(*unaff_EDI + 0xa8))();
  fVar11 = (float10)FUN_000481c0(iVar7 + 0x1d8);
  fVar12 = (float10)(**(code **)param_1[0x1a])();
  fVar1 = (float)(fVar12 * (float10)(float)fVar11 * (float10)(float)fVar10);
  iVar7 = (**(code **)(*param_1 + 0x40))();
  iVar8 = (**(code **)(*unaff_EDI + 0xc))();
  fVar2 = *(float *)(iVar7 + 0x24) - *(float *)(iVar8 + 0x24);
  fVar4 = *(float *)(iVar7 + 0x28) - *(float *)(iVar8 + 0x28);
  fVar3 = *(float *)(iVar7 + 0x2c) - *(float *)(iVar8 + 0x2c);
  fVar2 = fVar2 * fVar2 + fVar4 * fVar4 + fVar3 * fVar3;
  fVar1 = fVar1 * fVar1;
  *(bool *)param_2 = fVar2 < fVar1;
  if ((fVar2 < fVar1) && (cVar5 = (**(code **)(*unaff_EDI + 200))(param_1,param_3), cVar5 == '\0'))
  {
    uVar9 = 0;
  }
  return uVar9;
}
