/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B130493463EAD7E8432B97FE1A4E376A44515362155C96794E032201551684AE
 * Entry: 0x00310e30, Ghidra index: 11807, label: FUN_00310e30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004002ec;
extern uint32_t DAT_00400300;
extern uint32_t _DAT_004002fc;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00310e30(void)

{
  if (0xf < DAT_00400300) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(DAT_004002ec);
  }
  DAT_00400300 = 0xf;
  _DAT_004002fc = 0;
  DAT_004002ec = DAT_004002ec & 0xffffff00;
  return;
}
