/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CD22E3056817936D1FBDCC0BE3F620C243A39F10EFC8F96E9FF2F1844858FEBE
 * Entry: 0x00219340, Ghidra index: 7494, label: FUN_00219340
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00219340(byte param_1)

{
  FUN_00219360();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
