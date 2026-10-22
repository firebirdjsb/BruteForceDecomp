/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F6D7E7AFB6E03EEB209D2EDB8120EBFAD39D069319784AC575F4EF9F05DF2F70
 * Entry: 0x00176c50, Ghidra index: 4943, label: FUN_00176c50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00176c50(byte param_1)

{
  FUN_00176c70();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
