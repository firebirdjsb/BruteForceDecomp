/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 59A57991AC8E6A0455B27B7F54EB4B804A4BE71050B8D412DEFAC79202312B98
 * Entry: 0x001cec60, Ghidra index: 6071, label: FUN_001cec60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001cec60(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *unaff_EDI;
  
  for (; param_1 != param_2; param_1 = param_1 + 8) {
    *param_1 = *unaff_EDI;
    param_1[1] = unaff_EDI[1];
    param_1[2] = unaff_EDI[2];
    param_1[3] = unaff_EDI[3];
    FUN_0010bc40();
  }
  return;
}
