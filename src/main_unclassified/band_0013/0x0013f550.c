/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 49894F433C4B465A3258AFE4C2C16B41ECE1D559198076D64570E12E8F420E7D
 * Entry: 0x0013f550, Ghidra index: 4055, label: FUN_0013f550
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0013f550(byte param_1)

{
  FUN_0013f4f0();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
