/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0BA4DAE6EAB0EC8453FD73EAD90B9E7FED0C2EBE544FF0B969AD588078F851D6
 * Entry: 0x00121ac0, Ghidra index: 3658, label: FUN_00121ac0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00121ac0(void)

{
  int *piVar1;
  char cVar2;
  int in_EAX;
  int iVar3;
  int unaff_EDI;
  
  switch(*(undefined4 *)(*(int *)(unaff_EDI + 0xc) + 0x15c)) {
  case 0:
    return 1;
  case 1:
    if (*(char *)(in_EAX + 0x34 + *(int *)(unaff_EDI + 0x2e8)) != '\0') {
      return 1;
    }
    if (*(char *)(in_EAX + *(int *)(unaff_EDI + 0x2e8) + 0x78) == '\0') {
      return 0;
    }
    return 2;
  case 2:
    if (in_EAX == 2) {
      return 2;
    }
    if (in_EAX == 1) {
      iVar3 = FUN_0014d450();
      if ((iVar3 == 0) && (iVar3 = FUN_0014d430(), iVar3 == 0)) {
        return (*(int *)(*(int *)(unaff_EDI + 0x2e8) + 0x1cc) == 1) + 1;
      }
LAB_00121b8c:
      return *(int *)(*(int *)(unaff_EDI + 0x2e8) + 0x1cc);
    }
    break;
  case 3:
    if ((in_EAX == 1) || (in_EAX == 2)) {
      piVar1 = *(int **)(unaff_EDI + 0x2e8);
      cVar2 = (**(code **)(*piVar1 + 0x20))();
      if (((cVar2 == '\0') || (piVar1[8] == 0)) && (iVar3 = FUN_0014d450(), iVar3 == 0)) {
        return (*(int *)(*(int *)(unaff_EDI + 0x2e8) + 0x1cc) == 1) + 1;
      }
      goto LAB_00121b8c;
    }
  }
  return 0;
}
