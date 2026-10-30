/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0970A702C023D9A8D9516EE03976CBBF3CEB70DA21E4A0DFDB68D151925053E1
 * Entry: 0x000fdce0, Ghidra index: 3178, label: FUN_000fdce0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000fdce0(void)

{
  int in_EAX;
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  if (in_EAX != 0) {
    for (piVar4 = *(int **)(in_EAX + 0x74);
        (piVar2 = (int *)0x0, piVar4 != *(int **)(in_EAX + 0x78) &&
        (piVar2 = (int *)*piVar4, piVar2[9] != 0xbb9c4af)); piVar4 = piVar4 + 1) {
    }
    piVar4 = (int *)0x0;
    if ((piVar2 != (int *)0x0) && (iVar1 = (**(code **)(*piVar2 + 4))(), iVar1 == 1)) {
      piVar4 = piVar2;
    }
    for (piVar2 = *(int **)(in_EAX + 0x74);
        (piVar3 = (int *)0x0, piVar2 != *(int **)(in_EAX + 0x78) &&
        (piVar3 = (int *)*piVar2, piVar3[9] != 0x2a91d98)); piVar2 = piVar2 + 1) {
    }
    piVar2 = (int *)0x0;
    if ((piVar3 != (int *)0x0) && (iVar1 = (**(code **)(*piVar3 + 4))(), iVar1 == 1)) {
      piVar2 = piVar3;
    }
    if (piVar4 != (int *)0x0) {
      FUN_0010a7d0();
    }
    if (piVar2 != (int *)0x0) {
      FUN_0010a7d0();
    }
  }
  return;
}
