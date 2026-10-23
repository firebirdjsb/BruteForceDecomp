/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 39A432C5BBB4E04973B8CC6C3A5C4FF7BF925F2D6339C4726400E907477E047D
 * Entry: 0x00173cd0, Ghidra index: 4897, label: FUN_00173cd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00173cd0(byte param_1)

{
  FUN_00173cf0();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
