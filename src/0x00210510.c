/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1C1C1E590C0AF1BB610B5EC881546FDF0CE32703E0CDF5733106AA1227D3E041
 * Entry: 0x00210510, Ghidra index: 7420, label: FUN_00210510
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00210510(void)

{
  char cVar1;
  undefined4 *in_EAX;
  int *unaff_ESI;
  
  if (unaff_ESI != (int *)0x0) {
    cVar1 = (**(code **)(*unaff_ESI + 0x10))(*in_EAX);
    if (cVar1 != '\0') {
      FUN_00210bf0(in_EAX + 1);
      return 1;
    }
  }
  return 0;
}
