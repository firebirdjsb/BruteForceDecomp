/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4F68555CB99C4754450BAD9937D70001033641F85F0C3044C25B8F539BECD2AD
 * Entry: 0x00343377, Ghidra index: 12708, label: FUN_00343377
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00343377(int param_1,undefined4 param_2)

{
  bool bVar1;
  
  do {
    if (param_1 == 0) {
      return;
    }
    bVar1 = param_1 != *(int *)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x1c) = param_2;
    param_1 = *(int *)(param_1 + 0x30);
  } while (bVar1);
  return;
}
