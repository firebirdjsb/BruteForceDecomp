/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8A6E9C81F623D273F3CFAD622863DD08FF565790D426AAC0AA0D10D49571388C
 * Entry: 0x00310bf0, Ghidra index: 11795, label: FUN_00310bf0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* One-word guest32 free-thunk interface; per-caller Xbox ABI still unverified. */
#include "bf_002ea018_heap_free_guest32.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040019c;
extern uint32_t DAT_004001b0;
extern uint32_t _DAT_004001ac;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00310bf0(void)

{
  if (0xf < DAT_004001b0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(DAT_0040019c);
  }
  DAT_004001b0 = 0xf;
  _DAT_004001ac = 0;
  DAT_0040019c = DAT_0040019c & 0xffffff00;
  return;
}
