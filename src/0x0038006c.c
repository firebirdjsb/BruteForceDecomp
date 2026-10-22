/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A84E511D367FB0E8B56087555BB008263F65B2197FE8432347B279C34239BAF0
 * Entry: 0x0038006c, Ghidra index: 13523, label: FUN_0038006c
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004126d0;
extern uint32_t DAT_004126f8;
void FUN_0038006c(void)

{
  KeSetTimer(&DAT_004126d0,0xfd050f80,0xffffffff,&DAT_004126f8);
  return;
}
