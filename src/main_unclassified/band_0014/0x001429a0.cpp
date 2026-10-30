/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E99A485631973652ED20DA2C3E1D6BD0D874BFBAC3BAED08490EB1D89DF34DAB
 * Entry: 0x001429a0, Ghidra index: 4127, label: FUN_001429a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001429a0(int param_1)

{
  int in_ECX;
  
  if (*(char *)(param_1 + 0x1d) == '\0') {
    FUN_001429a0(*(undefined4 *)(param_1 + 8));
    FUN_00141e00(in_ECX + 1);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(param_1);
  }
  return;
}
