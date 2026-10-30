/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6FDAD0515444F2EF80AA727DC84543605997DE35DA6F5ABA12F8057B3FE72F89
 * Entry: 0x0001c460, Ghidra index: 106, label: FUN_0001c460
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0001c460(void)

{
  undefined4 *in_EAX;
  undefined4 *unaff_EDI;
  
  for (; in_EAX != unaff_EDI; in_EAX = in_EAX + 3) {
    (**(code **)*in_EAX)(0);
  }
  return;
}
