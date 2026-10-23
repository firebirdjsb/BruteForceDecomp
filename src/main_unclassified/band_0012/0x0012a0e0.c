/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2A34F271F9255B0CD088223B495E0D428BF1D10293A19956BD7C9767981E7485
 * Entry: 0x0012a0e0, Ghidra index: 3762, label: FUN_0012a0e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0012a0e0(void)

{
  undefined4 *in_EAX;
  undefined4 *in_ECX;
  
  for (; in_EAX != in_ECX; in_EAX = in_EAX + 3) {
    *in_EAX = 0xffffffff;
    in_EAX[1] = 0;
  }
  return;
}
