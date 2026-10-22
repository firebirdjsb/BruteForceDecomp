/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E4A98339D792630812BBC97E4A18692EE890818F58A8D81F5B639BC706197BD6
 * Entry: 0x0033e945, Ghidra index: 12614, label: FUN_0033e945
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0033e945(int param_1)

{
  FUN_0033e8c3(param_1);
  if (*(int *)(param_1 + 0x10c) == 0) {
    FUN_0033e9ea(param_1);
  }
  else {
    FUN_0033ea20(param_1);
  }
  return;
}
