/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D8D11546285965C785EDCF11E572949501CCB4C63458D782AB8AD616394D9D57
 * Entry: 0x002878e0, Ghidra index: 9095, label: FUN_002878e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002878e0(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *unaff_ESI;
  
  if (unaff_ESI != (undefined4 *)0x0) {
    *unaff_ESI = 0;
    unaff_ESI[2] = 0;
    unaff_ESI[3] = 0;
    unaff_ESI[4] = 0;
    if (param_2 != unaff_ESI) {
      *unaff_ESI = *param_2;
      FUN_0023c430(unaff_ESI);
      FUN_0010bc40();
      *(undefined1 *)(unaff_ESI + 5) = *(undefined1 *)(param_2 + 5);
      *(undefined1 *)(param_2 + 5) = 0;
    }
  }
  return;
}
