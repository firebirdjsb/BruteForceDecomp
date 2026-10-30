/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BF5BA66147F52F60294C4AFC63673C69FCA933361430C816868B0D70BBF9678E
 * Entry: 0x00310dd0, Ghidra index: 11805, label: FUN_00310dd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004002b4;
extern uint32_t DAT_004002c8;
extern uint32_t _DAT_004002c4;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00310dd0(void)

{
  if (0xf < DAT_004002c8) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(DAT_004002b4);
  }
  DAT_004002c8 = 0xf;
  _DAT_004002c4 = 0;
  DAT_004002b4 = DAT_004002b4 & 0xffffff00;
  return;
}
