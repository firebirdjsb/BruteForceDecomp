/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 944515EBC8C551EEEA59721F587083D05503ED0F6107AA6BB0007A47E78C8C90
 * Entry: 0x000627a0, Ghidra index: 1061, label: FUN_000627a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_000627a0(int param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_000627f0(param_1 + 8);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(param_1 + 0xc));
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return 0;
}
