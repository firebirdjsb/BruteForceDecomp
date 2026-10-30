/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 582608439822CC714340E0FEB91DC3F645A48A46034F6EB3FCBEB456B0452FE2
 * Entry: 0x0027a790, Ghidra index: 8951, label: FUN_0027a790
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Guest32 free-thunk symbol and single word are modeled; ABI unverified. */
#include "bf_002ea018_heap_free_guest32.h"
void FUN_0027a790(int param_1)

{
  if (*(char *)(param_1 + 0x15) == '\0') {
    FUN_0027a790(*(undefined4 *)(param_1 + 8));
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(param_1);
  }
  return;
}
