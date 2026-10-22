/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C38C08764A4228EDBED1D8ECA52EC360DF30C3C2E1E43CDA9118DDA2E17A06E7
 * Entry: 0x00174710, Ghidra index: 4914, label: FUN_00174710
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00174710(byte param_1)

{
  int in_ECX;
  
  FUN_00174740();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(in_ECX + -4);
  }
  return;
}
