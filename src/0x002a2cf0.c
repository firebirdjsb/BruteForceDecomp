/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7FD182A7D3A1362D2BBBEC6EB6614A523FB11DEB8DF9EB5D2868F0B0FDD27AAF
 * Entry: 0x002a2cf0, Ghidra index: 9530, label: FUN_002a2cf0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002a2cf0(byte param_1)

{
  FUN_002a2d10();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
