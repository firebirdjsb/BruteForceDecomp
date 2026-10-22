/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3E2269C00727470677D62E7A76D38BA2A8970C0267759AC9A6CF406C45AF9499
 * Entry: 0x00050850, Ghidra index: 712, label: FUN_00050850
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00050850(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *unaff_EDI;
  
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    if (param_1 != unaff_EDI) {
      *param_1 = *unaff_EDI;
      FUN_0010bc40();
    }
  }
  return;
}
