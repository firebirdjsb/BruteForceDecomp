/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6B5333258CCAC8111A5240CC9F3BC55D8C63DE87862F36F1456561AB9D045A05
 * Entry: 0x00287630, Ghidra index: 9090, label: FUN_00287630
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00287630(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *unaff_EDI;
  
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    *param_1 = *unaff_EDI;
    FUN_0010bc40();
    *(undefined1 *)(param_1 + 5) = *(undefined1 *)(unaff_EDI + 5);
  }
  return;
}
