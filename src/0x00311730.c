/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 533FC4384D1F858F4C778B9717A07308C7B8A3DFBE72A865BDAAA9CE17F299E6
 * Entry: 0x00311730, Ghidra index: 11884, label: FUN_00311730
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046b250;
extern uint32_t DAT_0046b254;
void FUN_00311730(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_0046b250;
  while (puVar1 != (undefined4 *)0x0) {
    DAT_0046b250 = (undefined4 *)*puVar1;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = DAT_0046b250;
  }
  DAT_0046b250 = (undefined4 *)0x0;
  DAT_0046b254 = 0;
  return;
}
