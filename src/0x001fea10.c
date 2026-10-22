/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0D14DFBB13D4A7451567AAF36D704E0C0F90578EB3DD66009141FE06D80D7CAF
 * Entry: 0x001fea10, Ghidra index: 7237, label: FUN_001fea10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001fea10(int *param_1)

{
  int *piVar1;
  int in_EAX;
  int *piVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 auStack_8 [4];
  int iStack_4;
  
  if (*(uint *)(in_EAX + 0x28) < 2) {
    FUN_001fe6c0(in_EAX,0);
  }
  else {
    piVar1 = *(int **)(in_EAX + 0x24);
    piVar2 = (int *)0x0;
    if (*(undefined4 **)(in_EAX + 0x24) != (undefined4 *)0x0) {
      piVar2 = (int *)**(undefined4 **)(in_EAX + 0x24);
    }
    if (piVar2 != piVar1) {
      do {
        if ((int *)piVar2[3] == param_1) break;
        piVar2 = (int *)*piVar2;
      } while (piVar2 != piVar1);
      if (piVar2 != piVar1) {
        FUN_001facd0(piVar2);
      }
    }
  }
  if (param_1 != (int *)0x0) {
    iVar3 = (**(code **)(*param_1 + 0xfc))();
    if (iVar3 != 0) {
      iStack_4 = 0;
      FUN_0008f6a0();
      puVar4 = auStack_8;
      (**(code **)(*param_1 + 0xfc))(puVar4);
      FUN_000e0950(puVar4);
      if (iStack_4 != 0) {
        FUN_0008f6e0();
      }
    }
  }
  return;
}
