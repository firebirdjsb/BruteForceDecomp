/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6AE5E3163536C8F44A120A777E04565DADD3A7FD2B12C67CB4C9300ACDC145A8
 * Entry: 0x000b6e50, Ghidra index: 2196, label: FUN_000b6e50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_000b6e70(void);

void FUN_000b6e50(byte param_1)

{
  FUN_000b6e70();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
