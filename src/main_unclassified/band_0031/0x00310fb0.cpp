/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 09EF0418ACCB3855CD7D7860751C4203C0408C5DFE1BA70B6407093C586989AB
 * Entry: 0x00310fb0, Ghidra index: 11815, label: FUN_00310fb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Single guest DWORD to free thunk; Xbox callsite ABI not fully verified. */
#include "bf_002ea018_heap_free_guest32.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004003cc;
extern uint32_t DAT_004003e0;
extern uint32_t _DAT_004003dc;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00310fb0(void)

{
  if (0xf < DAT_004003e0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(DAT_004003cc);
  }
  DAT_004003e0 = 0xf;
  _DAT_004003dc = 0;
  DAT_004003cc = DAT_004003cc & 0xffffff00;
  return;
}
