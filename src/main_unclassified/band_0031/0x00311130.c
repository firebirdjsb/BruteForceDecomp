/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 75DEC4F60C68C7D0A62323B7B22BFBA2CEB1EE495BAC77B2CB5019D8E1790EB0
 * Entry: 0x00311130, Ghidra index: 11823, label: FUN_00311130
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004004ac;
extern uint32_t DAT_004004c0;
extern uint32_t _DAT_004004bc;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00311130(void)

{
  if (0xf < DAT_004004c0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(DAT_004004ac);
  }
  DAT_004004c0 = 0xf;
  _DAT_004004bc = 0;
  DAT_004004ac = DAT_004004ac & 0xffffff00;
  return;
}
