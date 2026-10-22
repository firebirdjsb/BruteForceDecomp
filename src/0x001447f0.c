/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2CFB6955701D7FEF42623ADD122BC9D58B93EEFEA9F13826184DA9459B5A5222
 * Entry: 0x001447f0, Ghidra index: 4162, label: FUN_001447f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001447f0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *unaff_EDI;
  
  for (; param_1 != param_2; param_1 = param_1 + 7) {
    *param_1 = *unaff_EDI;
    FUN_00144880();
    param_1[5] = unaff_EDI[5];
    param_1[6] = unaff_EDI[6];
  }
  return;
}
