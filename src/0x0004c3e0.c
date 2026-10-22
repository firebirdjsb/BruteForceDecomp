/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 248B131E685F2F4736C0B8D18BE341F99E0D14C9CAE14E29DE32E493F6ACA07E
 * Entry: 0x0004c3e0, Ghidra index: 633, label: FUN_0004c3e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined1 FUN_0004c3e0(void)

{
  int *piVar1;
  char cVar2;
  int in_EAX;
  int iVar3;
  undefined1 uVar4;
  
  uVar4 = 0;
  if (in_EAX == 0) {
    return 0;
  }
  piVar1 = *(int **)(in_EAX + 0x2e8);
  cVar2 = (**(code **)(*piVar1 + 0x20))();
  if ((cVar2 == '\0') || (piVar1[8] == 0)) {
    iVar3 = *(int *)(in_EAX + 0x2e8);
    cVar2 = (**(code **)(*(int *)(iVar3 + 0x44) + 0x20))();
    if (cVar2 == '\0') {
      return 0;
    }
    if (*(int *)(iVar3 + 100) == 0) {
      return 0;
    }
    iVar3 = *(int *)(in_EAX + 0x2e8);
    cVar2 = (**(code **)(*(int *)(iVar3 + 0x44) + 0x20))();
    if (cVar2 == '\0') {
      return 0;
    }
    iVar3 = *(int *)(iVar3 + 100);
  }
  else {
    piVar1 = *(int **)(in_EAX + 0x2e8);
    cVar2 = (**(code **)(*piVar1 + 0x20))();
    if (cVar2 == '\0') {
      return 0;
    }
    iVar3 = piVar1[8];
  }
  if ((iVar3 != 0) &&
     (((0 < *(int *)(iVar3 + 0x1f8) || (*(int *)(iVar3 + 0x1f8) == -1)) ||
      ((iVar3 = FUN_0022da80(), iVar3 != 0 && (0 < *(short *)(iVar3 + 0x1a))))))) {
    uVar4 = 1;
  }
  return uVar4;
}
