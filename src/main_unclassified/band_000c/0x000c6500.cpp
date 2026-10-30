/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 421735D0172CF19984A17827D882A92C43862088F362F90444664EEAD2A7C0D9
 * Entry: 0x000c6500, Ghidra index: 2439, label: FUN_000c6500
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000c6500(byte param_1)

{
  FUN_000c6520();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
