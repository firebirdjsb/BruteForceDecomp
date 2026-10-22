/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 913422C1F6E5589EA7D761B27F5A50744CA787EBBE075FE5D70FEEDE070C0BC4
 * Entry: 0x00101c30, Ghidra index: 3253, label: FUN_00101c30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00101c30(void)

{
  int in_EAX;
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  for (piVar1 = *(int **)(in_EAX + 0x74);
      (piVar3 = (int *)0x0, piVar1 != *(int **)(in_EAX + 0x78) &&
      (piVar3 = (int *)*piVar1, piVar3[9] != 0xe8204a4)); piVar1 = piVar1 + 1) {
  }
  if ((piVar3 != (int *)0x0) && (iVar2 = (**(code **)(*piVar3 + 4))(), iVar2 == 2)) {
    FUN_0010ce80(piVar3);
  }
  return;
}
