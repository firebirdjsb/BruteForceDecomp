/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 944FD839BCD3C17E76B1CD965C237C8E9CB1DE5963BC1D853EF08D830FAE9093
 * Entry: 0x000fba00, Ghidra index: 3138, label: FUN_000fba00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000fba00(int param_1)

{
  if (*(char *)(param_1 + 0x15) == '\0') {
    FUN_000fba00(*(undefined4 *)(param_1 + 8));
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(param_1);
  }
  return;
}
