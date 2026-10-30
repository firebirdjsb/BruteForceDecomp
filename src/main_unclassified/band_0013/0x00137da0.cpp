/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2528E9F7D7C3BFA3F0311DC97E584E425520A61ED0895420BAFF7E6B8149B165
 * Entry: 0x00137da0, Ghidra index: 3919, label: FUN_00137da0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00137da0(void)

{
  undefined4 *in_EAX;
  undefined4 *unaff_EDI;
  
  for (; in_EAX != unaff_EDI; in_EAX = in_EAX + 0xb) {
    (**(code **)*in_EAX)(0);
  }
  return;
}
