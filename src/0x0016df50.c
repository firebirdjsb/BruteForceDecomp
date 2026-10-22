/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C455BB1F54BDB630B8B1AA9F4A72BE76575040E2F1A42DCE6C6717EF80BD7BEF
 * Entry: 0x0016df50, Ghidra index: 4808, label: FUN_0016df50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0016df50(void)

{
  undefined4 *in_EAX;
  undefined4 *in_ECX;
  
  if (in_ECX != (undefined4 *)0x0) {
    *in_ECX = *in_EAX;
    FUN_0003d6c0(in_ECX + 1,in_EAX + 1,in_EAX + 10);
  }
  return;
}
