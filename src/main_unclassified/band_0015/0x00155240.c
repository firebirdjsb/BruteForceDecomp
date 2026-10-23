/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D4AB7121568CED802835CEEBB7A8DDB99F4D6163319A7AC634408D7BB247ECEE
 * Entry: 0x00155240, Ghidra index: 4459, label: FUN_00155240
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00155240(byte param_1)

{
  FUN_0015b790();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
