/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 01A522EDC83CEBB0199E8F42804637CDFF836C4BD257DD486EF5C4998ACB0F0A
 * Entry: 0x0024bbd0, Ghidra index: 8270, label: FUN_0024bbd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0024bbd0(void)

{
  undefined4 *in_EAX;
  undefined4 *unaff_EDI;
  
  if (in_EAX != (undefined4 *)0x0) {
    *in_EAX = *unaff_EDI;
    FUN_00248500(in_EAX + 1);
    FUN_00248600(in_EAX + 5);
  }
  return;
}
