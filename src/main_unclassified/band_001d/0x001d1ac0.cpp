/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C4FE3B19094E4661C7054FEF1DD35F2E22193A608B2F44B67B4442DFBFA2EA07
 * Entry: 0x001d1ac0, Ghidra index: 6286, label: FUN_001d1ac0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-matched declaration only; original x86 guest ABI remains unverified. */
extern void FUN_001d2cf0(void);
int FUN_001d1ac0(int param_1,int param_2)

{
  int in_EAX;
  
  for (; param_1 != param_2; param_1 = param_1 + 0x70) {
    FUN_001d2cf0();
    in_EAX = in_EAX + 0x70;
  }
  return in_EAX;
}
