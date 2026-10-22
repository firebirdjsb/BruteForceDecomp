/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 986B8506C9244C082CA9AC7B69260DE2E5CBD1950328B007C94EC585126C3098
 * Entry: 0x001036d0, Ghidra index: 3301, label: FUN_001036d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_001036d0(void)

{
  int *piVar1;
  undefined4 in_EAX;
  int *piVar2;
  int unaff_EDI;
  
  piVar2 = (int *)FUN_000a7770(in_EAX);
  piVar1 = *(int **)(unaff_EDI + 0x7c);
  if (piVar1 != piVar2) {
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(unaff_EDI + 0x7c) = 0;
    }
    *(int **)(unaff_EDI + 0x7c) = piVar2;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))(piVar2);
    }
  }
  return CONCAT31((int3)((uint)*(int *)(unaff_EDI + 0x7c) >> 8),*(int *)(unaff_EDI + 0x7c) != 0);
}
