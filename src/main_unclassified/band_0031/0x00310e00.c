/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 71053A89C24CCED5045A2C79C2F784AEDC760DFD09734FCAD7D6BDB17AA7DE7E
 * Entry: 0x00310e00, Ghidra index: 11806, label: FUN_00310e00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004002d0;
extern uint32_t DAT_004002e4;
extern uint32_t _DAT_004002e0;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00310e00(void)

{
  if (0xf < DAT_004002e4) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(DAT_004002d0);
  }
  DAT_004002e4 = 0xf;
  _DAT_004002e0 = 0;
  DAT_004002d0 = DAT_004002d0 & 0xffffff00;
  return;
}
