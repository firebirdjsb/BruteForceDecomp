/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 629614495917B7F1C5FABD280CFC87979FAAEADE5D9C312BD415C27DD4192656
 * Entry: 0x002dd2f0, Ghidra index: 10319, label: FUN_002dd2f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002dd2f0(byte param_1)

{
  FUN_002dd310();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
