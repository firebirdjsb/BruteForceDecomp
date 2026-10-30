/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 36327E5ABF57F86D6C2A34EED69050EACF38023B7194DD2139D251FC46EEAE5B
 * Entry: 0x00343054, Ghidra index: 12697, label: FUN_00343054
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00343054(int param_1)

{
  if (*(int *)(param_1 + 0x20) != 0) {
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  }
  return;
}
