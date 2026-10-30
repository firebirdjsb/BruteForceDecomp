/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E67314D4B9A559FD35D64B937EDD1866C7285BC3226AE5AE326D2BA89FB70F60
 * Entry: 0x000a2e00, Ghidra index: 1935, label: FUN_000a2e00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_000a2910(void);

void FUN_000a2e00(byte param_1)

{
  FUN_000a2910();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
