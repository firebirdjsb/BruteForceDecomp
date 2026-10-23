/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FB5F0E1A7A628FAA0CDEF59E04EA046AD46C73CCAD487370046F4171F8BD346A
 * Entry: 0x001a3270, Ghidra index: 5339, label: FUN_001a3270
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_001a3270(undefined4 param_1,int param_2)

{
  if (param_2 == 0) {
    return 0;
  }
  if (7 < *(uint *)(param_2 + 0x18)) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(param_2 + 4));
  }
  *(undefined4 *)(param_2 + 0x18) = 7;
  *(undefined4 *)(param_2 + 0x14) = 0;
  *(undefined2 *)(param_2 + 4) = 0;
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(param_2);
}
