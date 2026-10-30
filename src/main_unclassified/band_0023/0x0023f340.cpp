/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1CF9391753AFB523966A3EC35823BF9404763E2AC0CA25E670DF1E942B7BC1C6
 * Entry: 0x0023f340, Ghidra index: 7983, label: FUN_0023f340
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0023f340(undefined4 param_1,int param_2)

{
  if (param_2 == 0) {
    return 0;
  }
  FUN_00243560();
  if (0xf < *(uint *)(param_2 + 0x24)) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(param_2 + 0x10));
  }
  *(undefined4 *)(param_2 + 0x24) = 0xf;
  *(undefined4 *)(param_2 + 0x20) = 0;
  *(undefined1 *)(param_2 + 0x10) = 0;
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(param_2);
}
