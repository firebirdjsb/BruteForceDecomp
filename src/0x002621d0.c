/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 47D53B4F8249B40435E71770A5800660CE5AB1BD528CE09432A29C79A4D0E402
 * Entry: 0x002621d0, Ghidra index: 8654, label: FUN_002621d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002621d0(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int unaff_ESI;
  int *unaff_EDI;
  float10 fVar4;
  
  piVar1 = *(int **)(unaff_ESI + 4);
  if (piVar1 != unaff_EDI) {
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(unaff_ESI + 4) = 0;
    }
    *(int **)(unaff_ESI + 4) = unaff_EDI;
    if (unaff_EDI != (int *)0x0) {
      (**(code **)(*unaff_EDI + 4))();
    }
  }
  fVar4 = (float10)(**(code **)(*unaff_EDI + 0x6c))();
  *(float *)(unaff_ESI + 8) = (float)fVar4;
  *(undefined4 *)(unaff_ESI + 0xc) = 0x3f800000;
  *(undefined4 *)(unaff_ESI + 0x10) = 0;
  *(undefined4 *)(unaff_ESI + 0x14) = 0;
  uVar2 = (**(code **)(*unaff_EDI + 0x7c))();
  *(undefined4 *)(unaff_ESI + 0x1c) = uVar2;
  if (1e-05 < ABS(*(float *)(unaff_ESI + 8))) {
    iVar3 = (**(code **)(**(int **)(unaff_ESI + 4) + 0x8c))(*(int **)(unaff_ESI + 4));
    *(float *)(unaff_ESI + 0x18) = (float)iVar3 / *(float *)(unaff_ESI + 8) - 1e-06;
    return;
  }
  *(undefined4 *)(unaff_ESI + 0x18) = 0;
  return;
}
