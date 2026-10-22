/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D47DCBC0904F96F83BFFB35D70D95C0BFF589FE1EA43CC376B2C7C4FE1C92783
 * Entry: 0x0030fc20, Ghidra index: 11565, label: FUN_0030fc20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00400f48;
extern uint32_t PTR_FUN_003a2068;
extern uint32_t PTR_PTR_00400f1c;
extern uint32_t _DAT_00400f4c;
extern uint32_t _DAT_00400f50;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0030fc20(void)

{
  PTR_PTR_00400f1c = (undefined *)&PTR_FUN_003a2068;
  if (DAT_00400f48 != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(DAT_00400f48);
  }
  DAT_00400f48 = 0;
  _DAT_00400f4c = 0;
  _DAT_00400f50 = 0;
  return;
}
