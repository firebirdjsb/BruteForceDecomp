/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DA0F8F86BCBE9CC4BD78ED308F6A6F2F60DE8AB0C15FA0627C42BDA0526F23C0
 * Entry: 0x00310b00, Ghidra index: 11790, label: FUN_00310b00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00400110;
extern uint32_t DAT_00400124;
extern uint32_t _DAT_00400120;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00310b00(void)

{
  if (0xf < DAT_00400124) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(DAT_00400110);
  }
  DAT_00400124 = 0xf;
  _DAT_00400120 = 0;
  DAT_00400110 = DAT_00400110 & 0xffffff00;
  return;
}
