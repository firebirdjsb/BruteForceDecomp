/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 736CD0963BFE0162FCD2A7FABA80D306A9D889D4EA1CDB12794243DC81A5567D
 * Entry: 0x00310ad0, Ghidra index: 11789, label: FUN_00310ad0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004000f4;
extern uint32_t DAT_00400108;
extern uint32_t _DAT_00400104;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00310ad0(void)

{
  if (0xf < DAT_00400108) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(DAT_004000f4);
  }
  DAT_00400108 = 0xf;
  _DAT_00400104 = 0;
  DAT_004000f4 = DAT_004000f4 & 0xffffff00;
  return;
}
