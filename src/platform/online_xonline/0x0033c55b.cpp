/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 36BB3152D8A9A07B3868E149053B0B32EBFE54EE34743A9C44F02B84CDEEBEEA
 * Entry: 0x0033c55b, Ghidra index: 12554, label: FUN_0033c55b
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0033c55b(int param_1)

{
  FUN_0033bcec();
  if (*(int *)(param_1 + 0x34) == 0) {
    thunk_FUN_0033e986(param_1,0x8011);
  }
  else {
    FUN_0033ea20(param_1);
  }
  return;
}
