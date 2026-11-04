/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8D1858DEB58CB7EDE745BB411F032F7D6844350EB645B9A2521991CE078A4544
 * Entry: 0x00249460, Ghidra index: 8169, label: FUN_00249460
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-matched declaration only; original x86 guest ABI remains unverified. */
extern void FUN_0023c960(void);
int FUN_00249460(int param_1,int param_2)

{
  int in_EAX;
  
  for (; param_1 != param_2; param_1 = param_1 + 0x38) {
    FUN_0023c960();
    in_EAX = in_EAX + 0x38;
  }
  return in_EAX;
}
