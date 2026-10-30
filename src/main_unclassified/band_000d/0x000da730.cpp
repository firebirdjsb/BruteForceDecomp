/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3D4B26C73FE1C400F3FAF9E86B56F35031E4101A9C16AC0922544954540004BA
 * Entry: 0x000da730, Ghidra index: 2690, label: FUN_000da730
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int * FUN_000da730(void)

{
  int *piVar1;
  int unaff_EBX;
  undefined4 unaff_EDI;
  
  piVar1 = (int *)0x0;
  if ((*(int **)(unaff_EBX + 0xc) != (int *)0x0) &&
     (piVar1 = (int *)(**(code **)(**(int **)(unaff_EBX + 0xc) + 8))(), piVar1 != (int *)0x0)) {
    FUN_000da880(unaff_EDI,piVar1,1);
    FUN_000da8f0(unaff_EDI);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x24))();
    }
  }
  return piVar1;
}
