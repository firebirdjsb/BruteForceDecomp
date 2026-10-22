/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 18D0AA9ED321A83C50B489A1BFBCFAB0B16CC9A0C069B426F8F1E9D0EE9E585D
 * Entry: 0x00310c80, Ghidra index: 11798, label: FUN_00310c80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004001f0;
extern uint32_t DAT_00400204;
extern uint32_t _DAT_00400200;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00310c80(void)

{
  if (0xf < DAT_00400204) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(DAT_004001f0);
  }
  DAT_00400204 = 0xf;
  _DAT_00400200 = 0;
  DAT_004001f0 = DAT_004001f0 & 0xffffff00;
  return;
}
