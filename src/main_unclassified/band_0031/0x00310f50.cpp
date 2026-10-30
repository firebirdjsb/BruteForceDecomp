/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 52CB0ACD583646D48A44B8DEA40F5E1B690875DAC0A3EE68566DE25D314CA082
 * Entry: 0x00310f50, Ghidra index: 11813, label: FUN_00310f50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Single guest DWORD to free thunk; Xbox callsite ABI not fully verified. */
#include "bf_002ea018_heap_free_guest32.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00400394;
extern uint32_t DAT_004003a8;
extern uint32_t _DAT_004003a4;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00310f50(void)

{
  if (0xf < DAT_004003a8) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(DAT_00400394);
  }
  DAT_004003a8 = 0xf;
  _DAT_004003a4 = 0;
  DAT_00400394 = DAT_00400394 & 0xffffff00;
  return;
}
