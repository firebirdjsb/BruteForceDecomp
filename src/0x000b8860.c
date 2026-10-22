/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 25745727D35DB14565188EE76794F2B73F94B98FA1B723647B520643915AEAD2
 * Entry: 0x000b8860, Ghidra index: 2227, label: FUN_000b8860
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004a5c80;
extern uint32_t DAT_004a5c81;
extern uint32_t DAT_004a5c82;
extern uint32_t DAT_004a5c83;
extern uint32_t _DAT_004a5c84;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_000b8860(void)

{
  if ((_DAT_004a5c84 & 1) == 0) {
    _DAT_004a5c84 = _DAT_004a5c84 | 1;
    DAT_004a5c80 = 0x44;
    DAT_004a5c81 = 0x5a;
    DAT_004a5c82 = 0x8a;
    DAT_004a5c83 = 0xff;
  }
  return &DAT_004a5c80;
}
