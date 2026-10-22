/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E60DFD4ACF1412AD6D481168DB66F6822745486D05656AD9CF8B71F8E8F57454
 * Entry: 0x00020a80, Ghidra index: 180, label: FUN_00020a80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00020a80(void)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  int *in_ECX;
  int unaff_EDI;
  
  if (unaff_EDI != 0) {
    iVar3 = (**(code **)(*in_ECX + 0x40))();
    pfVar4 = (float *)(**(code **)(*(int *)(unaff_EDI + 8) + 4))();
    fVar1 = *pfVar4 - *(float *)(iVar3 + 0x24);
    fVar2 = pfVar4[2] - *(float *)(iVar3 + 0x2c);
    fVar1 = fVar1 * fVar1 + fVar2 * fVar2;
    if (fVar1 < 9.0 != (fVar1 == 9.0)) {
      return 1;
    }
  }
  return 0;
}
