/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4B85C05DF2B70600FD3E4A7D2B9E7865452DFD3115EDC618D5E1204A66298924
 * Entry: 0x002ddb80, Ghidra index: 10325, label: FUN_002ddb80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002ddb80(byte param_1)

{
  FUN_002ddba0();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
