/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A69FE14E7F13CCADCF3B2BC367317351174C424EB3579B4AE9E7F1BA2F7ECCFB
 * Entry: 0x0030fbe0, Ghidra index: 11564, label: FUN_0030fbe0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00400f10;
extern uint32_t PTR_FUN_003a2068;
extern uint32_t PTR_PTR_00400ee4;
extern uint32_t _DAT_00400f14;
extern uint32_t _DAT_00400f18;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0030fbe0(void)

{
  PTR_PTR_00400ee4 = (undefined *)&PTR_FUN_003a2068;
  if (DAT_00400f10 != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(DAT_00400f10);
  }
  DAT_00400f10 = 0;
  _DAT_00400f14 = 0;
  _DAT_00400f18 = 0;
  return;
}
