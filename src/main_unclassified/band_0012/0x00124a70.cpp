/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B8193A43AB28FA50E6C9B7B495A1AABDD103871A4C81029E0D21580766AB1BC3
 * Entry: 0x00124a70, Ghidra index: 3691, label: FUN_00124a70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00124a70(void)

{
  float fVar1;
  float fVar2;
  int unaff_EBX;
  int unaff_EDI;
  
  if (0.0 < *(float *)(unaff_EBX + 8)) {
    fVar2 = *(float *)(unaff_EBX + 8) / *(float *)(*(int *)(unaff_EDI + 0xc) + 0x220);
    FUN_00124af0(unaff_EDI,fVar2,unaff_EBX + 0x30);
    fVar1 = *(float *)(unaff_EBX + 0x24);
    if (*(float *)(unaff_EBX + 0x2c) * *(float *)(unaff_EBX + 0x2c) +
        *(float *)(unaff_EBX + 0x28) * *(float *)(unaff_EBX + 0x28) + fVar1 * fVar1 != 0.0) {
      FUN_00124f60(unaff_EDI,fVar2,(float *)(unaff_EBX + 0x24),unaff_EBX + 0x30);
      return;
    }
  }
  return;
}
