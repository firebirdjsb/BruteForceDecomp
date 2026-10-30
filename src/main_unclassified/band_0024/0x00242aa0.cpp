/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1BFDA5A8D4899C88246B6067A5BA28F0F6B6B8DDA957CE0E9613F23F4202F219
 * Entry: 0x00242aa0, Ghidra index: 8037, label: FUN_00242aa0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00242aa0(int *param_1)

{
  int in_EAX;
  int iVar1;
  
  if (in_EAX != 0) {
    if (*param_1 == 0) {
      iVar1 = FUN_002ea01d(100);
      if (iVar1 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = FUN_002441e0();
      }
      *param_1 = iVar1;
      FUN_00241810();
    }
    return;
  }
  iVar1 = *param_1;
  if (iVar1 != 0) {
    FUN_00241810();
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(iVar1);
  }
  *param_1 = 0;
  return;
}
