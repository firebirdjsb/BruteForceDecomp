/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6DBAD3E15C277C1B47894A13C22712F28945F7932978C08E5CD53B6538CE3C8D
 * Entry: 0x00310d70, Ghidra index: 11803, label: FUN_00310d70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040027c;
extern uint32_t DAT_00400290;
extern uint32_t _DAT_0040028c;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00310d70(void)

{
  if (0xf < DAT_00400290) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(DAT_0040027c);
  }
  DAT_00400290 = 0xf;
  _DAT_0040028c = 0;
  DAT_0040027c = DAT_0040027c & 0xffffff00;
  return;
}
