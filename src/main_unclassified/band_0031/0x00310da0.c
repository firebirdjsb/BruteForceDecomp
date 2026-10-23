/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3846BBB2B34BCFD6888C774D628DE15C91100710C69B1C3BBABF95CA8D7EF8D3
 * Entry: 0x00310da0, Ghidra index: 11804, label: FUN_00310da0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00400298;
extern uint32_t DAT_004002ac;
extern uint32_t _DAT_004002a8;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00310da0(void)

{
  if (0xf < DAT_004002ac) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(DAT_00400298);
  }
  DAT_004002ac = 0xf;
  _DAT_004002a8 = 0;
  DAT_00400298 = DAT_00400298 & 0xffffff00;
  return;
}
