/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E43FE03EFCCE033579DD814AADBF85729357FDD6E156A811313E1DD4A4DF621F
 * Entry: 0x00190c00, Ghidra index: 5297, label: FUN_00190c00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00190c00(undefined4 param_1,int param_2)

{
  if (param_2 == 0) {
    return 0;
  }
  if (0xf < *(uint *)(param_2 + 0x28)) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(param_2 + 0x14));
  }
  *(undefined4 *)(param_2 + 0x28) = 0xf;
  *(undefined4 *)(param_2 + 0x24) = 0;
  *(undefined1 *)(param_2 + 0x14) = 0;
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(param_2);
}
