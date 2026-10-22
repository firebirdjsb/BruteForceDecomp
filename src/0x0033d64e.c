/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 90FC6AE55C211A9F1BB226A9E3A2F619D3DA9784C1E3659606F1ABBADD8D177C
 * Entry: 0x0033d64e, Ghidra index: 12585, label: FUN_0033d64e
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0033d64e(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = FUN_0033ca1c();
  FUN_0033ec4e(*(undefined4 *)(in_ECX + 4),iVar1 << 9);
  return;
}
