/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C09DBB83CB1BBA1D124171E5C2994112CC67E065AED93351F31AE480AEB947F8
 * Entry: 0x0010f7c0, Ghidra index: 3533, label: FUN_0010f7c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0010f7c0(void)

{
  int in_EAX;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x3c) != in_EAX) {
    FUN_0008f6a0();
  }
  return;
}
