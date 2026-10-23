/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A5E750D5B419F7326C2F1D0CB0287CD8A7EB3E50416C5BD98B32EB3E615896A8
 * Entry: 0x00310cb0, Ghidra index: 11799, label: FUN_00310cb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040020c;
extern uint32_t DAT_00400220;
extern uint32_t _DAT_0040021c;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00310cb0(void)

{
  if (0xf < DAT_00400220) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(DAT_0040020c);
  }
  DAT_00400220 = 0xf;
  _DAT_0040021c = 0;
  DAT_0040020c = DAT_0040020c & 0xffffff00;
  return;
}
