/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CC11851EC0E0470110B13263CA84C6C569A26EDA2366899536E238DA3F63B1F4
 * Entry: 0x001926f0, Ghidra index: 5299, label: FUN_001926f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_001926f0(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_001602c0();
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(param_2);
  }
  return 0;
}
