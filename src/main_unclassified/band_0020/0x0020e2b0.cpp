/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 19BDCE05DCC0F4820A1832391219AD70CAEECAEE2DFDF98D6CD60DFEFB21F95F
 * Entry: 0x0020e2b0, Ghidra index: 7403, label: FUN_0020e2b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0020e2b0(byte param_1)

{
  FUN_0020eb10();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
