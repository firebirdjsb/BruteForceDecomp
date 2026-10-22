/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 88447A86DA8DC57F596F8A94171A6BD25D1F17A0B9710207D0B2189FBDBEB063
 * Entry: 0x001481c0, Ghidra index: 4253, label: FUN_001481c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001481c0(float param_1)

{
  int unaff_EDI;
  
  if (0.0 < *(float *)(unaff_EDI + 0x24)) {
    *(float *)(unaff_EDI + 0x24) = *(float *)(unaff_EDI + 0x24) - param_1;
  }
  if (*(char *)(unaff_EDI + 0x38) != '\0') {
    param_1 = *(float *)(unaff_EDI + 0x28) - param_1;
    *(float *)(unaff_EDI + 0x28) = param_1;
    if ((param_1 < 0.0 != (param_1 == 0.0)) && (*(int *)(unaff_EDI + 8) != 0)) {
      FUN_0008f6a0(0);
    }
  }
  FUN_00148220();
  return;
}
