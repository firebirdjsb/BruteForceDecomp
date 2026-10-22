/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A784FE786E340CB3096F163BD63E19DE24E334D41CCF0FCCBC7DC5B6CA293002
 * Entry: 0x000eb830, Ghidra index: 2899, label: FUN_000eb830
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000eb830(byte param_1)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x3c) != 0) {
    FUN_0008f6e0();
  }
  FUN_00059bf0();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
