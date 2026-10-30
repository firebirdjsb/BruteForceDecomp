/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B678A6FDD070E6CC36AF25A18832C30954C55FF925BA3F0B3F8C6A1496B7C56D
 * Entry: 0x00345195, Ghidra index: 12798, label: FUN_00345195
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040f5b4;
undefined4 FUN_00345195(void)

{
  undefined4 uVar1;
  
  if (DAT_0040f5b4 == 0) {
    return 0x276d;
  }
  uVar1 = FUN_00348df2();
  return uVar1;
}
