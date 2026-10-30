/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 37EB4291EEE6E188552DBED5919AD976C3E3E41E2D1923A7667CB2E772AEC62E
 * Entry: 0x0030dbb0, Ghidra index: 11107, label: FUN_0030dbb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040e888;
extern uint32_t DAT_0040eca0;
extern uint32_t DAT_0040f0a0;
extern uint32_t DAT_0040f0a4;
extern uint32_t PTR_PTR_003b68b0;
extern uint32_t _DAT_003b68b4;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0030dbb0(void)

{
  int iVar1;
  bool bVar2;
  
  DAT_0040e888 = DAT_0040f0a0;
  bVar2 = DAT_0040f0a4 < 0x20;
  iVar1 = DAT_0040f0a0 * 4;
  DAT_0040f0a0 = DAT_0040f0a0 + 1;
  *(undefined ***)(&DAT_0040eca0 + iVar1) = &PTR_PTR_003b68b0;
  _DAT_003b68b4 = DAT_0040e888;
  if (bVar2) {
    DAT_0040f0a4 = 0x20;
  }
  return;
}
