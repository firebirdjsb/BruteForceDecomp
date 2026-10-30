/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EAE0057F31A43CDD7E5E1AB08BC879302ED4C7FE3040D1B3DEE5847D8CC705EF
 * Entry: 0x00311040, Ghidra index: 11818, label: FUN_00311040
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Preserved 32-bit free operand; original caller ABI is unverified. */
#include "bf_002ea018_heap_free_guest32.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00400420;
extern uint32_t DAT_00400434;
extern uint32_t _DAT_00400430;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00311040(void)

{
  if (0xf < DAT_00400434) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(DAT_00400420);
  }
  DAT_00400434 = 0xf;
  _DAT_00400430 = 0;
  DAT_00400420 = DAT_00400420 & 0xffffff00;
  return;
}
