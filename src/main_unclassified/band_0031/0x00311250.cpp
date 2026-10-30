/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 496CF663284A9240DBC344F15E5C5357AB42279667EB1C70EE0153609545A150
 * Entry: 0x00311250, Ghidra index: 11829, label: FUN_00311250
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Guest32 free-thunk boundary; actual caller guest ABI remains unverified. */
#include "bf_002ea018_heap_free_guest32.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00400554;
extern uint32_t DAT_00400568;
extern uint32_t _DAT_00400564;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00311250(void)

{
  if (0xf < DAT_00400568) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(DAT_00400554);
  }
  DAT_00400568 = 0xf;
  _DAT_00400564 = 0;
  DAT_00400554 = DAT_00400554 & 0xffffff00;
  return;
}
