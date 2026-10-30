/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3FD6EF4D32E267A99D56E9F468225793BA14BD4F91B314AA9BCC6055AD52590C
 * Entry: 0x000a3d30, Ghidra index: 1951, label: FUN_000a3d30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_000a3d60(void);

void FUN_000a3d30(byte param_1)

{
  FUN_000a3d60();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
