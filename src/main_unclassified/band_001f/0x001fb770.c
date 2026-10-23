/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2190DF483251429A31045F905C58079696A7FC9A118387D04057723F08DA8797
 * Entry: 0x001fb770, Ghidra index: 7114, label: FUN_001fb770
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_001fb770(void)

{
  int iVar1;
  int *piVar2;
  int *unaff_ESI;
  int unaff_EDI;
  
  if (*(int *)(unaff_EDI + 8) == -1) {
    return 1;
  }
  if ((unaff_ESI == (int *)0x0) || (iVar1 = (**(code **)(*unaff_ESI + 0xec))(), iVar1 == 0)) {
    if (*(char *)(unaff_EDI + 4) != '\0') {
      return 1;
    }
    return 0;
  }
  piVar2 = (int *)(**(code **)(*unaff_ESI + 0xec))();
  if (*(char *)(unaff_EDI + 4) == '\0') {
    iVar1 = (**(code **)(*piVar2 + 0x9c))();
    if (iVar1 != *(int *)(unaff_EDI + 8)) {
      return 0;
    }
    return 1;
  }
  iVar1 = (**(code **)(*piVar2 + 0x9c))();
  if (iVar1 != *(int *)(unaff_EDI + 8)) {
    return 1;
  }
  return 0;
}
