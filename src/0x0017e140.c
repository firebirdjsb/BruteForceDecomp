/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F5069A48E0215B1A8AC1D58947FBB79073AB9457C62723DF591D6ACF3C3F317E
 * Entry: 0x0017e140, Ghidra index: 5099, label: FUN_0017e140
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0041f640;
extern uint32_t _DAT_0041f640;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0017e140(void)

{
  float10 fVar1;
  int local_4;
  
  local_4 = 0;
  do {
    if (local_4 == 0) {
      _DAT_0041f640 = 0xffffd8f0;
    }
    else {
      fVar1 = (float10)log2((float10)local_4);
      *(int *)(&DAT_0041f640 + local_4 * 4) =
           (int)(((float10)0.3010299956639812 * fVar1 - (float10)2.0) * (float10)2000.0);
    }
    local_4 = local_4 + 1;
  } while (local_4 < 0x65);
  return;
}
