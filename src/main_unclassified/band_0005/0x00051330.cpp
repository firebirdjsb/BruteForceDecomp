/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 033C9CA64ABDB248C8864693034A590F4BC15616DD6C1554FD6A9A78310BC8D1
 * Entry: 0x00051330, Ghidra index: 735, label: FUN_00051330
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00051330(void)

{
  int in_EAX;
  int unaff_EDI;
  
  for (; in_EAX != unaff_EDI; in_EAX = in_EAX + 0x70) {
    FUN_00051630();
  }
  return;
}
