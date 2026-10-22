/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3BB468A9D671561DAE7EC3BEA0536927AAEE86F0F03B10802307B905EFE1093A
 * Entry: 0x001f7bf0, Ghidra index: 7054, label: FUN_001f7bf0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001f7bf0(void)

{
  int in_EAX;
  int in_ECX;
  
  if (in_ECX != 0) {
    *(undefined4 *)(in_ECX + 4) = 0;
    if (*(int *)(in_EAX + 4) != 0) {
      FUN_0008f6a0(*(int *)(in_EAX + 4));
    }
  }
  return;
}
