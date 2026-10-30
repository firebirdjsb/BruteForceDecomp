/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5C2401B90D1B02FABACCF75E99D5C0DB3F8CFFF698BA9D42A6909C167F9458E6
 * Entry: 0x001fd320, Ghidra index: 7190, label: FUN_001fd320
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001fd320(byte param_1)

{
  FUN_001fd2c0();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
