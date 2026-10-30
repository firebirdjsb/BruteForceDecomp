/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1C3F079283EA7A64266D67276C983A0256360559EE9722000D22B4BEB5A2351C
 * Entry: 0x0004b5f0, Ghidra index: 609, label: FUN_0004b5f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_0008f6a0(std::uint32_t guest_esi, std::uint32_t guest_word_0);

void FUN_0004b5f0(void)

{
  int in_EAX;
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = 0;
  if (in_EAX != 0) {
    FUN_0008f6a0();
  }
  return;
}
