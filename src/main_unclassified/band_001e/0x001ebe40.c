/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BC42ED0B7E26392CC1B09B45B4DB4A2FF5BAADF23C0F058AB81D3AEA86D9CF0F
 * Entry: 0x001ebe40, Ghidra index: 6901, label: FUN_001ebe40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001ebe40(byte param_1)

{
  FUN_002e7930();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
