/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 13C9129382A2B1740EEACC70E8E9EAFDD0172EF56DEFAC6191D9CC40E987CD7D
 * Entry: 0x00310b30, Ghidra index: 11791, label: FUN_00310b30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* One-word guest32 free-thunk interface; per-caller Xbox ABI still unverified. */
#include "bf_002ea018_heap_free_guest32.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040012c;
extern uint32_t DAT_00400140;
extern uint32_t _DAT_0040013c;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00310b30(void)

{
  if (0xf < DAT_00400140) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(DAT_0040012c);
  }
  DAT_00400140 = 0xf;
  _DAT_0040013c = 0;
  DAT_0040012c = DAT_0040012c & 0xffffff00;
  return;
}
