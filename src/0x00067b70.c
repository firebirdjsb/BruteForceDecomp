/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6C5D61BE20BDBDB7EBB902496E7B022C50C2784192A07C1DDC1D7B39924DE63F
 * Entry: 0x00067b70, Ghidra index: 1136, label: FUN_00067b70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00067b70(byte param_1)

{
  FUN_00060dc0();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
