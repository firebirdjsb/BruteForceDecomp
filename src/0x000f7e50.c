/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0A3B2F3C8F5C724F3A9F8DD58F97E39FFB85752C488D60315FAC897FF570DB66
 * Entry: 0x000f7e50, Ghidra index: 3110, label: FUN_000f7e50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined1 FUN_000f7e50(void)

{
  undefined1 uVar1;
  int in_EAX;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  if (in_EAX == 0) {
    return 0;
  }
  for (piVar2 = *(int **)(in_EAX + 0x74);
      (piVar4 = (int *)0x0, piVar2 != *(int **)(in_EAX + 0x78) &&
      (piVar4 = (int *)*piVar2, piVar4[9] != 0x96eb19f)); piVar2 = piVar2 + 1) {
  }
  if ((piVar4 != (int *)0x0) && (iVar3 = (**(code **)(*piVar4 + 4))(), iVar3 == 3)) {
    uVar1 = FUN_000f7c70(piVar4,1,1);
    iVar3 = FUN_001020d0();
    if ((iVar3 != 0) && (*(int *)(iVar3 + 0x10) != 0)) {
      FUN_0010c890();
    }
    return uVar1;
  }
  return 0;
}
