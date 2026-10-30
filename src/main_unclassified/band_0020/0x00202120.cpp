/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8F2F6D98039FCB2338A62141CD686B822A50DC1DC0632A2CC99AD8376FEEBA0E
 * Entry: 0x00202120, Ghidra index: 7271, label: FUN_00202120
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00202120(void)

{
  int iVar1;
  char cVar2;
  int in_EAX;
  undefined4 uVar3;
  uint uVar4;
  undefined1 auStack_3c [12];
  undefined1 auStack_30 [48];
  
  FUN_00202030();
  if ((*(int *)(in_EAX + 0x58) != 0) && (iVar1 = *(int *)(in_EAX + 0x44), 0 < iVar1)) {
    if (*(int *)(in_EAX + 0x98) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = (*(int *)(in_EAX + 0x9c) - *(int *)(in_EAX + 0x98)) / 0x24;
    }
    if ((iVar1 - 1U < uVar4) && (*(int *)(*(int *)(in_EAX + 0x98) + -0x20 + iVar1 * 0x24) != 0)) {
      cVar2 = FUN_00201fd0();
      if (cVar2 != '\0') {
        (**(code **)(**(int **)(*(int *)(in_EAX + 0x98) + -0x20 + *(int *)(in_EAX + 0x44) * 0x24) +
                    0x40))();
        FUN_00039510();
        uVar3 = (**(code **)(**(int **)(*(int *)(in_EAX + 0x98) + -0x20 +
                                       *(int *)(in_EAX + 0x44) * 0x24) + 0x40))();
        FUN_0003d6c0(auStack_30,uVar3,auStack_3c);
        (**(code **)(**(int **)(in_EAX + 0x58) + 0x50))(auStack_30);
      }
    }
  }
  return;
}
