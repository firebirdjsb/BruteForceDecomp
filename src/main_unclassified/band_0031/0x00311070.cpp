/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 822225B1FCF3E776FDA4AE972105C48B6B2E54ACC576DE4D53F48EA3C524C513
 * Entry: 0x00311070, Ghidra index: 11819, label: FUN_00311070
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Preserved 32-bit free operand; original caller ABI is unverified. */
#include "bf_002ea018_heap_free_guest32.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040043c;
extern uint32_t DAT_00400450;
extern uint32_t _DAT_0040044c;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00311070(void)

{
  if (0xf < DAT_00400450) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(DAT_0040043c);
  }
  DAT_00400450 = 0xf;
  _DAT_0040044c = 0;
  DAT_0040043c = DAT_0040043c & 0xffffff00;
  return;
}
