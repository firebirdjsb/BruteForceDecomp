/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 90B7AFC4C99C6B4498938A022B237E75CB3D96FEADED73393FE056D914A544A7
 * Entry: 0x00310c20, Ghidra index: 11796, label: FUN_00310c20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004001b8;
extern uint32_t DAT_004001cc;
extern uint32_t _DAT_004001c8;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00310c20(void)

{
  if (0xf < DAT_004001cc) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(DAT_004001b8);
  }
  DAT_004001cc = 0xf;
  _DAT_004001c8 = 0;
  DAT_004001b8 = DAT_004001b8 & 0xffffff00;
  return;
}
