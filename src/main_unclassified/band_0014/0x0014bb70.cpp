/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C3EB69A0E3BD0408428869CB0B2BFCAFEA70F5B6AEF8DAE9739E6E85575918C4
 * Entry: 0x0014bb70, Ghidra index: 4322, label: FUN_0014bb70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0014bb70(byte param_1)

{
  FUN_0014bb90();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
