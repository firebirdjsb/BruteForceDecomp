/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D770258BD2B6CE9ABA0C96BA14D6D3CE8D310E1BE269BAFDC316046706DBD3FD
 * Entry: 0x00310830, Ghidra index: 11755, label: FUN_00310830
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00400868;
extern uint32_t PTR_DAT_00400864;
extern uint32_t _DAT_00400860;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00310830(void)

{
  if (DAT_00400868 != '\0') {
    if (PTR_DAT_00400864 != (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(PTR_DAT_00400864);
    }
    _DAT_00400860 = 0;
  }
  return;
}
