/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CA1DE322B085A746A41E3504A37D9A1D2B4ADB546A39B3EFEB79533F50F2B037
 * Entry: 0x003110a0, Ghidra index: 11820, label: FUN_003110a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00400458;
extern uint32_t DAT_0040046c;
extern uint32_t _DAT_00400468;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_003110a0(void)

{
  if (0xf < DAT_0040046c) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(DAT_00400458);
  }
  DAT_0040046c = 0xf;
  _DAT_00400468 = 0;
  DAT_00400458 = DAT_00400458 & 0xffffff00;
  return;
}
