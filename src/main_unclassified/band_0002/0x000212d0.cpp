/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: ABD81EF5B4435E0870CC26B74C016E969B79598404CED0F2D57AE21738004420
 * Entry: 0x000212d0, Ghidra index: 185, label: FUN_000212d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern uint32_t FUN_000120f0(int32_t in_EAX);

undefined4 FUN_000212d0(void)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int *piVar8;
  int iVar9;
  undefined1 *unaff_EBX;
  int unaff_EDI;
  
  piVar8 = (int *)FUN_000120f0();
  iVar1 = *(int *)(unaff_EDI + 0x6f4);
  if (iVar1 == 0) {
    *(undefined4 *)(unaff_EDI + 0x6ac) = 2;
    *unaff_EBX = 1;
    return 0;
  }
  iVar9 = (**(code **)(*piVar8 + 0x40))();
  fVar2 = *(float *)(iVar9 + 0x2c) - *(float *)(iVar1 + 0x1c);
  fVar3 = *(float *)(iVar9 + 0x28) - *(float *)(iVar1 + 0x18);
  fVar4 = *(float *)(iVar9 + 0x24) - *(float *)(iVar1 + 0x14);
  iVar9 = (**(code **)(**(int **)(unaff_EBX + 0x2c) + 0x40))();
  fVar5 = *(float *)(iVar9 + 0x2c) - *(float *)(iVar1 + 0x1c);
  fVar6 = *(float *)(iVar9 + 0x28) - *(float *)(iVar1 + 0x18);
  fVar7 = *(float *)(iVar9 + 0x24) - *(float *)(iVar1 + 0x14);
  if (fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5 < fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2)
  {
    *(undefined4 *)(unaff_EDI + 0x6ac) = 9;
    *unaff_EBX = 1;
    return 1;
  }
  *(undefined4 *)(unaff_EDI + 0x6ac) = 8;
  *unaff_EBX = 1;
  return 1;
}
