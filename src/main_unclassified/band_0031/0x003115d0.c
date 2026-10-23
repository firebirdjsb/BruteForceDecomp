/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C30FA6CC07D1B1A789A80EBDFAC56CB9C6B7D639EAF8CFB8A7D3266743CDBA21
 * Entry: 0x003115d0, Ghidra index: 11873, label: FUN_003115d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_0046cfcc;
void FUN_003115d0(void)

{
  if (DAT_0046cfcc != (int *)0x0) {
    (**(code **)(*DAT_0046cfcc + 8))(DAT_0046cfcc);
    DAT_0046cfcc = (int *)0x0;
  }
  return;
}
