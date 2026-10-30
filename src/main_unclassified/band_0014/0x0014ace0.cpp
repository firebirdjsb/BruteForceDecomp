/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0D241DF432E465B7EFB85CE49DCA8A6122F4E3A7E09EEA860539F851D66BFCCB
 * Entry: 0x0014ace0, Ghidra index: 4305, label: FUN_0014ace0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0014ace0(byte param_1)

{
  FUN_0014ad00();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
