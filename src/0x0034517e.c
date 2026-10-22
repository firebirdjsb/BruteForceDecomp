/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2571B5753CA16F0E395A99AFDFF1B39E5619DACF520B3055BCB79E2282E47027
 * Entry: 0x0034517e, Ghidra index: 12797, label: FUN_0034517e
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040f5b4;
undefined4 FUN_0034517e(void)

{
  undefined4 uVar1;
  
  if (DAT_0040f5b4 == 0) {
    return 0x276d;
  }
  uVar1 = FUN_0034b32f();
  return uVar1;
}
