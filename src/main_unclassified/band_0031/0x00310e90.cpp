/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8FC7047963E029E68F5BBC80E98C441D2D602D6DD351FA1CEFEECFAF5A736AFE
 * Entry: 0x00310e90, Ghidra index: 11809, label: FUN_00310e90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Single guest DWORD to free thunk; Xbox callsite ABI not fully verified. */
#include "bf_002ea018_heap_free_guest32.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00400324;
extern uint32_t DAT_00400338;
extern uint32_t _DAT_00400334;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00310e90(void)

{
  if (0xf < DAT_00400338) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(DAT_00400324);
  }
  DAT_00400338 = 0xf;
  _DAT_00400334 = 0;
  DAT_00400324 = DAT_00400324 & 0xffffff00;
  return;
}
