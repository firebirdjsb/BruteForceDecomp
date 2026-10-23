/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B870BFFF12D661657B16BB0CB389EA130D76FFBC0B7AF1C904936DE94308BEDA
 * Entry: 0x0012b3c0, Ghidra index: 3787, label: FUN_0012b3c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0012b3c0(void)

{
  int in_EAX;
  
  if (*(int *)(in_EAX + 8) == 0) {
    return 0;
  }
  return *(int *)(in_EAX + 0xc) - *(int *)(in_EAX + 8) >> 2;
}
