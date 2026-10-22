/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 762B88BE4740D10B9F3F20B29E701F125E2A6EF44CEC6A597B2A08013E9E9C8A
 * Entry: 0x0013f3e0, Ghidra index: 4050, label: FUN_0013f3e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0013f3e0(byte param_1)

{
  undefined4 in_ECX;
  
  FUN_0013f400(in_ECX);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
