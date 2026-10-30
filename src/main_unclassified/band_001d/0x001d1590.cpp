/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 318B4B2A6B709952F6B2E0B890F54FE1FA87DE17F17C5BF9E5F021A5FD5A3289
 * Entry: 0x001d1590, Ghidra index: 6249, label: FUN_001d1590
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-matched declaration only; original x86 guest ABI remains unverified. */
extern void FUN_001d2e90(void);
int FUN_001d1590(int param_1,int param_2)

{
  int in_EAX;
  
  for (; param_1 != param_2; param_1 = param_1 + 0x70) {
    FUN_001d2e90();
    in_EAX = in_EAX + 0x70;
  }
  return in_EAX;
}
