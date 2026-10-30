/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7ABEF3B33272880D73D23D753550DE7D5A56BF49915D780EA76F9E68F7365412
 * Entry: 0x003573c0, Ghidra index: 13155, label: FUN_003573c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_003573c0(int param_1)

{
  (**(code **)(param_1 + -0xec))(param_1 + -0xfc);
  *(int *)(param_1 + 0x138) = param_1;
  return;
}
