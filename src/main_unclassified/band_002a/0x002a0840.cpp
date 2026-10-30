/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 83C3FF0850CF5D002C02B376C6C960BAC957960E3BF6CA4C18788FE161D91B68
 * Entry: 0x002a0840, Ghidra index: 9511, label: FUN_002a0840
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002a0840(byte param_1)

{
  FUN_002a0860();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
