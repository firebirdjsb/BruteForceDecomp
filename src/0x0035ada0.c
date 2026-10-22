/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4E8E4B8A661E6A328AFEC6990A944433A3F3F4A6B2FD50CBEA57D1CF3CDF0360
 * Entry: 0x0035ada0, Ghidra index: 13189, label: FUN_0035ada0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0035ada0(undefined4 param_1,int param_2)

{
  if ((param_2 != 0) && (param_1 = *(int *)(param_2 + 4), param_1 != 0)) {
    XAPILIB__WaitForSingleObject();
    return;
  }
  return;
}
