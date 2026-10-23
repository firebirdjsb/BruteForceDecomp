/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4CE3B89EE8883F045658626BCA7675C87D5BF69157A9F5A1DCC138E6B55DB88F
 * Entry: 0x002ff8c0, Ghidra index: 11070, label: FUN_002ff8c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-matched declaration of FUN_00311870; callback ABI and behavior remain
 * ABI_UNVERIFIED. This only resolves name lookup in the C11 draft. */
extern void FUN_00311870(void);
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004a5d78;
extern uint32_t _DAT_004a701c;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_002ff8c0(void)

{
  if ((_DAT_004a701c & 1) == 0) {
    _DAT_004a701c = _DAT_004a701c | 1;
    FUN_002ff630();
    _atexit(FUN_00311870);
  }
  return &DAT_004a5d78;
}
