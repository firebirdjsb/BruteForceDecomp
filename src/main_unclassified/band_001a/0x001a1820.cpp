/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7ED0DD1A4DD50F81237216BDB65E20B2C628E1E5FA9CFD3A3FCFD34C8B4576EA
 * Entry: 0x001a1820, Ghidra index: 5329, label: FUN_001a1820
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_001a1820(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_001608b0();
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(param_2);
  }
  return 0;
}
