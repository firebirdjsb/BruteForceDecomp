/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B8947E6DBFD7011EAD248301862AC7DE823EB35D67108F0E2765A250404D62B0
 * Entry: 0x00310f80, Ghidra index: 11814, label: FUN_00310f80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004003b0;
extern uint32_t DAT_004003c4;
extern uint32_t _DAT_004003c0;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00310f80(void)

{
  if (0xf < DAT_004003c4) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(DAT_004003b0);
  }
  DAT_004003c4 = 0xf;
  _DAT_004003c0 = 0;
  DAT_004003b0 = DAT_004003b0 & 0xffffff00;
  return;
}
