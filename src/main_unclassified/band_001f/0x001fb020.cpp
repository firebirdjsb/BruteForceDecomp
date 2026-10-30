/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 54573EEB6C849BA3528F5D08D09D69A9F55F40F9B49A1339C81EE7AA0CD0AA0E
 * Entry: 0x001fb020, Ghidra index: 7107, label: FUN_001fb020
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int * FUN_001fb020(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EDI;
  
  piVar2 = *(int **)(unaff_EDI + 4);
  if (piVar2 != (int *)0x0) {
    iVar1 = (**(code **)(*piVar2 + 4))();
    if (iVar1 != 0) {
      return piVar2;
    }
    if ((((*(int **)(unaff_EDI + 4) != (int *)0x0) &&
         (piVar2 = (int *)(**(code **)(**(int **)(unaff_EDI + 4) + 0xc))(), piVar2 != (int *)0x0))
        && (iVar1 = (**(code **)(*piVar2 + 0x20))(), iVar1 == 7)) &&
       ((int *)piVar2[0x31] != (int *)0x0)) {
      return (int *)piVar2[0x31];
    }
  }
  return (int *)0x0;
}
