/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8B662465BB95F3EA087D0607DAB7444A672A6FA031D231B2C2C79285286A34BF
 * Entry: 0x002c82a0, Ghidra index: 10119, label: FUN_002c82a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002c82a0(byte param_1)

{
  FUN_002c82c0();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
