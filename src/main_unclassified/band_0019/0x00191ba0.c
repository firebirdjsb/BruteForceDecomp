/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 27BDE24EE9B7AFF0431C9A282E5AEB48E1AF1E474D62BEBF27F390A8AC71F266
 * Entry: 0x00191ba0, Ghidra index: 5298, label: FUN_00191ba0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00191ba0(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_00160180();
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(param_2);
  }
  return 0;
}
