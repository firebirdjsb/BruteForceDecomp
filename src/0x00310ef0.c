/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 04D365D000B0EDEF53D93A301C59EDFD4AB0A0AB120C22836B538F8529679DE0
 * Entry: 0x00310ef0, Ghidra index: 11811, label: FUN_00310ef0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040035c;
extern uint32_t DAT_00400370;
extern uint32_t _DAT_0040036c;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00310ef0(void)

{
  if (0xf < DAT_00400370) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(DAT_0040035c);
  }
  DAT_00400370 = 0xf;
  _DAT_0040036c = 0;
  DAT_0040035c = DAT_0040035c & 0xffffff00;
  return;
}
