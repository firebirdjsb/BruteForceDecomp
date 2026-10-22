/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7E0F96806E1FB874969862E0B66E327048DBEC82E555358B2B1488C2A4945D2C
 * Entry: 0x002a40d0, Ghidra index: 9542, label: FUN_002a40d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002a40d0(byte param_1)

{
  FUN_002a3df0();
  FUN_00060dc0();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
