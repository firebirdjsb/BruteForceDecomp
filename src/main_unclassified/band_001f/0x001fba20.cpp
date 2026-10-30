/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DB6D2818A9D0E5AE6262A236B8FE0179B2FEA635ADE68A08469BB0EE832DAFDE
 * Entry: 0x001fba20, Ghidra index: 7123, label: FUN_001fba20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Reuse original one-DWORD free-thunk interface; caller ABI unverified. */
#include "bf_002ea018_heap_free_guest32.h"
void FUN_001fba20(void)

{
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 200) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(unaff_ESI + 200));
  }
  *(undefined4 *)(unaff_ESI + 200) = 0;
  *(undefined4 *)(unaff_ESI + 0xcc) = 0;
  *(undefined4 *)(unaff_ESI + 0xd0) = 0;
  return;
}
