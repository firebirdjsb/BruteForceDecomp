/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E855D9C73193D3F01C5AA26D72E0134C9DCB021121FB6B7D624D51378323BCBF
 * Entry: 0x00136a00, Ghidra index: 3894, label: FUN_00136a00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00136a00(byte param_1)

{
  FUN_00136a20();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
