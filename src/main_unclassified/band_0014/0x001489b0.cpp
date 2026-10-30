/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AA7517E194698492361217986CDA6F68B109C52F57D7B8EC260866C2C30E7D37
 * Entry: 0x001489b0, Ghidra index: 4259, label: FUN_001489b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001489b0(byte param_1)

{
  FUN_0015f5b0();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
