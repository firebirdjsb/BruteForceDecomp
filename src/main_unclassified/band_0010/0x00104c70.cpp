/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9E39E8A2CFBE15EEA351FCF7CB90413EFA47A07F5D2173561C2C255B22295173
 * Entry: 0x00104c70, Ghidra index: 3329, label: FUN_00104c70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00104c70(byte param_1)

{
  FUN_00104280();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
