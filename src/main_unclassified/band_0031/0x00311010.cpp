/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8E98E0F1E7C462400E499AB630B00500635EA32EBEC8E6A180C796DFDADD0278
 * Entry: 0x00311010, Ghidra index: 11817, label: FUN_00311010
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Preserved 32-bit free operand; original caller ABI is unverified. */
#include "bf_002ea018_heap_free_guest32.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00400404;
extern uint32_t DAT_00400418;
extern uint32_t _DAT_00400414;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00311010(void)

{
  if (0xf < DAT_00400418) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(DAT_00400404);
  }
  DAT_00400418 = 0xf;
  _DAT_00400414 = 0;
  DAT_00400404 = DAT_00400404 & 0xffffff00;
  return;
}
