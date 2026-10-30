/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4F227D999E2D1F54DE18ACE7527A82B418875A0572D795705790247EE5BC21D3
 * Entry: 0x001d10b0, Ghidra index: 6228, label: FUN_001d10b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001d10b0(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x24) {
    FUN_001d2d60(param_1);
  }
  return;
}
