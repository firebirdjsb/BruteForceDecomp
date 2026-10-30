/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DDD2A75618D7AD994D4B9085D975E6D3F7841BAA14D287EFD8CA367DD4EC700A
 * Entry: 0x00139390, Ghidra index: 3947, label: FUN_00139390
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00139390(void)

{
  undefined4 *in_EAX;
  undefined4 *unaff_EDI;
  
  for (; in_EAX != unaff_EDI; in_EAX = in_EAX + 0xb) {
    (**(code **)*in_EAX)(0);
  }
  return;
}
