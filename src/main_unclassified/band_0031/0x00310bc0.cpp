/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4B3F440728D80A1893B2CFEAAA2AE782EE663E7DDA7229449C044BEED541499D
 * Entry: 0x00310bc0, Ghidra index: 11794, label: FUN_00310bc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* One-word guest32 free-thunk interface; per-caller Xbox ABI still unverified. */
#include "bf_002ea018_heap_free_guest32.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00400180;
extern uint32_t DAT_00400194;
extern uint32_t _DAT_00400190;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00310bc0(void)

{
  if (0xf < DAT_00400194) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(DAT_00400180);
  }
  DAT_00400194 = 0xf;
  _DAT_00400190 = 0;
  DAT_00400180 = DAT_00400180 & 0xffffff00;
  return;
}
