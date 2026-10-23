/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A87CBFD8C3E1D49E47CB812E99BB30CCC7637E93B7FCB9749A5F8BE0770156F9
 * Entry: 0x00310d40, Ghidra index: 11802, label: FUN_00310d40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00400260;
extern uint32_t DAT_00400274;
extern uint32_t _DAT_00400270;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00310d40(void)

{
  if (0xf < DAT_00400274) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(DAT_00400260);
  }
  DAT_00400274 = 0xf;
  _DAT_00400270 = 0;
  DAT_00400260 = DAT_00400260 & 0xffffff00;
  return;
}
