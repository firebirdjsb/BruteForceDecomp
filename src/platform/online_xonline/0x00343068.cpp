/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2DEFF4A6AC9BDAB55C58671E4D61FC533F8450FD7D4A71FD76ECDC982836B04A
 * Entry: 0x00343068, Ghidra index: 12698, label: FUN_00343068
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00343068(int param_1)

{
  if (*(int *)(param_1 + 0x20) != 0) {
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  return;
}
