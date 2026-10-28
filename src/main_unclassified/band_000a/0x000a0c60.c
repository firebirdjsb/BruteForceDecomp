/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 935B88AD31D3725F6207AA21E0490ED49242151D70F54666D78641AE85450B90
 * Entry: 0x000a0c60, Ghidra index: 1903, label: FUN_000a0c60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "../../contracts/bf_000a0c60_memory_operation.h"
void FUN_000a0c60(void)

{
  float *in_EAX;
  float *in_ECX;
  float *in_EDX;
  
  /* ABI_UNVERIFIED: this original entry still has unbound register inputs.
   * Proven callers bind the shared memory operation separately. */
  bf_000a0c60_produce(in_EAX, in_ECX, in_EDX);
  return;
}
