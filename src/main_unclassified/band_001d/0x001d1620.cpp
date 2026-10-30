/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9971875B186F86100D7BED40A103929CA6AEE3EBD034592180266C8995D7E7F1
 * Entry: 0x001d1620, Ghidra index: 6252, label: FUN_001d1620
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001d1620(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *unaff_EBX;
  
  for (; param_1 != param_2; param_1 = param_1 + 3) {
    *param_1 = *unaff_EBX;
    param_1[1] = unaff_EBX[1];
    FUN_001b0100();
    if (unaff_EBX[2] != 0) {
      FUN_001cd7d0(unaff_EBX[2]);
    }
  }
  return;
}
