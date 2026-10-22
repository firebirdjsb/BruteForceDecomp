/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A56C12500DF742C3915F292E50875D808B172890171105793FDC76C3A74D72BB
 * Entry: 0x002a7db0, Ghidra index: 9602, label: FUN_002a7db0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002a7db0(byte param_1)

{
  int in_ECX;
  
  FUN_002a7de0();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(in_ECX + -4);
  }
  return;
}
