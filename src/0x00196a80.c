/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CE051C022C73D03E04BDFF0E6D8B1C9973A1704C3B8F8BFA36895ED0907295B1
 * Entry: 0x00196a80, Ghidra index: 5305, label: FUN_00196a80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00196a80(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_000e13c0();
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(param_2);
  }
  return 0;
}
