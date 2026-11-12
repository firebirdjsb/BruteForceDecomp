/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8BAE330E7B50ADB10BCF5AD34FC3509582B231AEFF270E5F7550654F10706160
 * Entry: 0x00077eb0, Ghidra index: 1417, label: FUN_00077eb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_00077eb0_conversion_operation.h"
void FUN_00077eb0(int param_1,float param_2)
{
  /* ABI_UNVERIFIED: these integer-address expressions remain the old draft's
   * unresolved guest object mapping, not a native host pointer/guest32 bridge.
   * Only the captured-word operation below is behavior-tested. */
  const uint32_t kind = *(uint32_t *)(param_1 + 0xc);
  uint32_t raw_word;
  memcpy(&raw_word, &param_2, sizeof raw_word);
  (void)bf_00077eb0_conversion_operation(kind, raw_word, (void *)(param_1 + 4));
}
