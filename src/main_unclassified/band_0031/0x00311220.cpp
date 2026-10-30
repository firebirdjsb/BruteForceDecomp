/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BB2DB6C63070320B9A5E03F3320A6980EA204C828EF6EEE3278406D37638D8A1
 * Entry: 0x00311220, Ghidra index: 11828, label: FUN_00311220
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Guest32 free-thunk boundary; actual caller guest ABI remains unverified. */
#include "bf_002ea018_heap_free_guest32.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00400538;
extern uint32_t DAT_0040054c;
extern uint32_t _DAT_00400548;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00311220(void)

{
  if (0xf < DAT_0040054c) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(DAT_00400538);
  }
  DAT_0040054c = 0xf;
  _DAT_00400548 = 0;
  DAT_00400538 = DAT_00400538 & 0xffffff00;
  return;
}
