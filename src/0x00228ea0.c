/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DB7A0C104849E431D4DC93FC2D6F18A85D39FAAF91DF6450854CAD308393C9EC
 * Entry: 0x00228ea0, Ghidra index: 7661, label: FUN_00228ea0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00228ea0(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) != 0) {
    FUN_0008f6a0(0);
  }
  *(undefined4 *)(in_ECX + 8) = 0;
  if (*(int *)(in_ECX + 4) != 0) {
    FUN_0008f6e0();
    return;
  }
  return;
}
