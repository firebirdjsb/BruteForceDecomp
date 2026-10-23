/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2EEA48F569D080B8D28425F2D56C81C2D8385B1FF2617E80F34A55847894F8F7
 * Entry: 0x001cf6d0, Ghidra index: 6124, label: FUN_001cf6d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001cf6d0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *unaff_EDI;
  
  for (; param_1 != param_2; param_1 = param_1 + 7) {
    *param_1 = *unaff_EDI;
    param_1[1] = unaff_EDI[1];
    *(undefined1 *)(param_1 + 2) = *(undefined1 *)(unaff_EDI + 2);
    FUN_0010bc40();
  }
  return;
}
