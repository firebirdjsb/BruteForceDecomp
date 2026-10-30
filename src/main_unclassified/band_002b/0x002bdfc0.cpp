/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 68F1F512A31C059BAED272D15C65F1CD54D387E322B106203A2C7BF015CE7638
 * Entry: 0x002bdfc0, Ghidra index: 9964, label: FUN_002bdfc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002bdfc0(undefined4 param_1)

{
  int unaff_EDI;
  
  if (*(ushort *)(unaff_EDI + 0x160) <= *(ushort *)(unaff_EDI + 0x162)) {
    FUN_002ccf80();
  }
  *(undefined4 *)(*(int *)(unaff_EDI + 0x164) + (uint)*(ushort *)(unaff_EDI + 0x162) * 4) = param_1;
  *(short *)(unaff_EDI + 0x162) = *(short *)(unaff_EDI + 0x162) + 1;
  FUN_002be010(unaff_EDI);
  return;
}
