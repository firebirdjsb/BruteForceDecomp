/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 728837F16AB08CD9ADA48EB09CDB4D962703F7C6584CD71776BE2E710CFDE045
 * Entry: 0x00311160, Ghidra index: 11824, label: FUN_00311160
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004004c8;
extern uint32_t DAT_004004dc;
extern uint32_t _DAT_004004d8;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00311160(void)

{
  if (0xf < DAT_004004dc) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(DAT_004004c8);
  }
  DAT_004004dc = 0xf;
  _DAT_004004d8 = 0;
  DAT_004004c8 = DAT_004004c8 & 0xffffff00;
  return;
}
