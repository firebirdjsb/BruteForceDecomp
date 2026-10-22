/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B006D13DAD512C35ADAECA338EE51BA7B9E436B22B99F831FC785FA53F9ACD20
 * Entry: 0x00117620, Ghidra index: 3600, label: FUN_00117620
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00117620(void)

{
  int in_EAX;
  
  if (*(int *)(in_EAX + 0x548) != 0) {
    FUN_0021c700();
    if (*(int *)(in_EAX + 0x548) != 0) {
      FUN_0008f6a0(0);
    }
  }
  return;
}
