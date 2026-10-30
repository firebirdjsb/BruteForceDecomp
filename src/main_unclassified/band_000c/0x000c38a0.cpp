/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BEC9A03899FE3D11FB40E01B180A0982079728E1D344190DDFB46392301966C6
 * Entry: 0x000c38a0, Ghidra index: 2390, label: FUN_000c38a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000c38a0(byte param_1)

{
  FUN_000c38c0();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
