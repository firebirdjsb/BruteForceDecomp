/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5E5BB17FE34459DC784761E327D05E19B70925A191BC5665096D992CE7496333
 * Entry: 0x0023c0e0, Ghidra index: 7924, label: FUN_0023c0e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_0023c0e0_storage_operation.h"
undefined4 FUN_0023c0e0(uint *param_1)
{
  /* ABI_UNVERIFIED: EAX and EDX are original guest pointer-register inputs.
   * This wrapper retains draft pseudo-locals, not a native guest ABI bridge. */
  float *in_EAX;
  float *in_EDX;
  uint32_t raw_input_word;
  uint32_t selector;
  memcpy(&raw_input_word, in_EAX, sizeof raw_input_word);
  memcpy(&selector, param_1, sizeof selector);
  return bf_0023c0e0_storage_operation(raw_input_word, selector, in_EDX);
}
