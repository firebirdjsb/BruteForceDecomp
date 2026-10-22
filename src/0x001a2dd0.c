/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 20B015CA903E3CAE89795E8ADB5BA92246E150821256371FAE77F3F20A8ADB75
 * Entry: 0x001a2dd0, Ghidra index: 5335, label: FUN_001a2dd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_001a2dd0(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_0017bcb0();
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(param_2);
  }
  return 0;
}
