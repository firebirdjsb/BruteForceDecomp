/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 01D883849773A8E63118A9D0AF4790F44A64F060647574915A0CC54C89003DDE
 * Entry: 0x002492c0, Ghidra index: 8160, label: FUN_002492c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002492c0(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x2c) {
    FUN_00249a20();
  }
  return;
}
