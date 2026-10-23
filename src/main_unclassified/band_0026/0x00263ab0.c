/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A257CF44EB61D9F166E8D65CBAF970F5E1FF65971A1D0ED30FF82618326476D0
 * Entry: 0x00263ab0, Ghidra index: 8688, label: FUN_00263ab0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00263ab0(int param_1)

{
  if (*(int *)(param_1 + 0x80) != 0) {
    *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + -1;
  }
  if (*(int *)(param_1 + 0x80) == 0) {
    *(undefined4 *)(param_1 + 0x80) = 1;
    FUN_00263b50();
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(param_1);
  }
  return;
}
