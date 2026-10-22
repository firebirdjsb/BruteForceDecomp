/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 17F5AC8D1B75E98D85B74D2EA6AEE28EB2A148BCC164E8995F4DE2D26F23C8BD
 * Entry: 0x00310aa0, Ghidra index: 11788, label: FUN_00310aa0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004000d8;
extern uint32_t DAT_004000ec;
extern uint32_t _DAT_004000e8;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00310aa0(void)

{
  if (0xf < DAT_004000ec) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(DAT_004000d8);
  }
  DAT_004000ec = 0xf;
  _DAT_004000e8 = 0;
  DAT_004000d8 = DAT_004000d8 & 0xffffff00;
  return;
}
