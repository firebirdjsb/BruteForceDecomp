/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3065A5242990B7449399AE43741DB3AEAB18A3EED46FF5ADEFBE62C64768A702
 * Entry: 0x00311570, Ghidra index: 11870, label: FUN_00311570
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_0046cfc0;
void FUN_00311570(void)

{
  if (DAT_0046cfc0 != (int *)0x0) {
    (**(code **)(*DAT_0046cfc0 + 8))(DAT_0046cfc0);
    DAT_0046cfc0 = (int *)0x0;
  }
  return;
}
