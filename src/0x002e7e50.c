/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7C5776C509B5709B541410DED1E5E1E3BBBDF5E036C93F1D611CF4B226E7CDAB
 * Entry: 0x002e7e50, Ghidra index: 10532, label: FUN_002e7e50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002e7e50(void)

{
  int in_ECX;
  
  if ((*(int *)(in_ECX + 0x10) != 0) && (*(int *)(in_ECX + 8) != 0)) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(**(undefined4 **)(in_ECX + 0x10));
  }
  if (*(int *)(in_ECX + 0x18) == 0) {
    if (*(int *)(in_ECX + 0x1c) != 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(*(undefined4 *)(in_ECX + 0x18));
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(in_ECX + 0x10));
  }
  if (*(int *)(in_ECX + 8) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(**(undefined4 **)(in_ECX + 0x18));
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(*(undefined4 *)(in_ECX + 0x18));
}
