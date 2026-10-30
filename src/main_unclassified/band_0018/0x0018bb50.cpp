/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1CDA8E0A901FD212BBD21B01C8CEE8F98BD0E97F05FD996D2DD14CEC47592C9A
 * Entry: 0x0018bb50, Ghidra index: 5270, label: FUN_0018bb50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0018bb50(undefined4 param_1,int param_2)

{
  if (param_2 == 0) {
    return 0;
  }
  if (*(int *)(param_2 + 0xc) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(param_2 + 0xc));
  }
  *(undefined4 *)(param_2 + 0xc) = 0;
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(*(undefined4 *)(param_2 + 8));
}
