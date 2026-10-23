/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AC43586AB06DCF8D2C77F1B44A6674FE49D967840F83CF1BFA8B69C3F7638C75
 * Entry: 0x002bd170, Ghidra index: 9939, label: FUN_002bd170
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002bd170(byte param_1)

{
  FUN_002bd190();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
