/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3A5FA9F0D318C01A07A2B66176E83B40A0F493A451A6BFA6BB152780E76576ED
 * Entry: 0x00345032, Ghidra index: 12772, label: FUN_00345032
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040f5b4;
undefined4 FUN_00345032(void)

{
  undefined4 uVar1;
  
  if (DAT_0040f5b4 == 0) {
    return 0x276d;
  }
  uVar1 = FUN_0034e109();
  return uVar1;
}
