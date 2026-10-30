/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DE39B6DECE42B44E9508DD2033A9641D4725D83CE2F99F0BBC52BE9D5E26A993
 * Entry: 0x0001fc40, Ghidra index: 157, label: FUN_0001fc40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "../../contracts/bf_0001fc40_getter_operations.h"
void FUN_0001fc40(void)
{
  void *in_EAX;
  const void *in_ECX;
  /* ABI_UNVERIFIED: original entry receives EAX/ECX, not C arguments.
   * This draft still has an unbound register entry. Share only the observed
   * memory operation with callers that have established those two inputs. */
  bf_0001fc40_produce(in_EAX, in_ECX);
}
