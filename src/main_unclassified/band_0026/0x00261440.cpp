/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D2FCF55B83F7B917A2BBDFD66533E46B0210E0B5DEB7CE6FFCD1C3F295F23565
 * Entry: 0x00261440, Ghidra index: 8633, label: FUN_00261440
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00261440(int param_1)

{
  if (*(int *)(param_1 + 0x24) != 0) {
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
  }
  if (*(int *)(param_1 + 0x24) == 0) {
    *(undefined4 *)(param_1 + 0x24) = 1;
    FUN_002608a0();
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(param_1);
  }
  return;
}
