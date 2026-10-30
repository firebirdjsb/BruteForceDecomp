/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7DB9766671140ABD6C695A66A3210F07C6014ED7072F7EA2B8F390A14C429959
 * Entry: 0x00310d10, Ghidra index: 11801, label: FUN_00310d10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Single guest DWORD to free thunk; x86 caller ABI still unverified. */
#include "bf_002ea018_heap_free_guest32.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00400244;
extern uint32_t DAT_00400258;
extern uint32_t _DAT_00400254;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00310d10(void)

{
  if (0xf < DAT_00400258) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(DAT_00400244);
  }
  DAT_00400258 = 0xf;
  _DAT_00400254 = 0;
  DAT_00400244 = DAT_00400244 & 0xffffff00;
  return;
}
