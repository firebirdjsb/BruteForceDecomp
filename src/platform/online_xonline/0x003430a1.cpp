/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EDB908773ECDE8D4597CDFF77600D55483D0176D3BE0D37E6904CA75EA7DF2C3
 * Entry: 0x003430a1, Ghidra index: 12701, label: FUN_003430a1
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_003430a1(int param_1)

{
  if ((param_1 != 0) && (param_1 != *(int *)(param_1 + 0x30))) {
    *(undefined4 *)(*(int *)(param_1 + 0x30) + 0x34) = 0;
  }
  return;
}
