/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 69A33A179A6674C1DB25445A273F7AF7798A26913239CEA4A991A35840427465
 * Entry: 0x00057df0, Ghidra index: 858, label: FUN_00057df0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00057df0(void)

{
  undefined4 *in_EAX;
  undefined4 *unaff_EDI;
  
  for (; in_EAX != unaff_EDI; in_EAX = in_EAX + 7) {
    (**(code **)*in_EAX)(0);
  }
  return;
}
