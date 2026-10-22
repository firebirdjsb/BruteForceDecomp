/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B15E5DC00BC74FE351533315C636FB51E1C5DB288ABBB8A5AB38D2852FE1BE56
 * Entry: 0x00062150, Ghidra index: 1048, label: FUN_00062150
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00062150(void)

{
  int *piVar1;
  int *unaff_ESI;
  
  piVar1 = (int *)*unaff_ESI;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *unaff_ESI = 0;
  }
  return;
}
