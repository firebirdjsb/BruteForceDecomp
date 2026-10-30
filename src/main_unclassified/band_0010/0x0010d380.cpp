/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6D584EEE8C8397BEFBD8F5F60D69E876EFD133E80C4AA452F9F54391F5F506F3
 * Entry: 0x0010d380, Ghidra index: 3489, label: FUN_0010d380
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0010d380(byte param_1)

{
  FUN_0010d3a0();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
