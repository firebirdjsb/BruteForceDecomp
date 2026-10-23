/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EF480C7FF58CCD4AD04117BF6502E176DBDBF6687FE27C95C2C83078BD0D7000
 * Entry: 0x0010cb70, Ghidra index: 3477, label: FUN_0010cb70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0010cb70(void)

{
  int *piVar1;
  undefined4 in_EAX;
  int *piVar2;
  int unaff_EDI;
  
  piVar2 = (int *)FUN_000a7770(in_EAX);
  piVar1 = *(int **)(unaff_EDI + 0x74);
  if (piVar1 != piVar2) {
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(unaff_EDI + 0x74) = 0;
    }
    *(int **)(unaff_EDI + 0x74) = piVar2;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))(piVar2);
    }
  }
  return CONCAT31((int3)((uint)*(int *)(unaff_EDI + 0x74) >> 8),*(int *)(unaff_EDI + 0x74) != 0);
}
