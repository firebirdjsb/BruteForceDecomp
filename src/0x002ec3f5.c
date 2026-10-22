/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C22F4BF9DF9E1DD7F75BE9DD28302D097AA20888298B81AB5DEA2E66570F6E07
 * Entry: 0x002ec3f5, Ghidra index: 10658, label: FUN_002ec3f5
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_0040f508;
void FUN_002ec3f5(void)

{
  FUN_002ec3c9(0xfc);
  if (DAT_0040f508 != (code *)0x0) {
    (*DAT_0040f508)();
  }
  FUN_002ec3c9(0xff);
  return;
}
