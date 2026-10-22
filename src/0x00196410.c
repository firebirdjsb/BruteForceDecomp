/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D28F7944EA51FCFA6F7DE06CB69119A380D14BE508CD1A3EEEEB43A9DABBB492
 * Entry: 0x00196410, Ghidra index: 5304, label: FUN_00196410
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00196410(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_000d6970();
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(param_2);
  }
  return 0;
}
