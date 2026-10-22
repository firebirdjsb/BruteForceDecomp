/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2320C16AD1E1BB2614FE0A22475D0122C809A7536C9138358C958E3A0656AA12
 * Entry: 0x00182b30, Ghidra index: 5186, label: FUN_00182b30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00182b30(void)

{
  undefined4 *puVar1;
  int iVar2;
  int in_EAX;
  undefined4 *puVar3;
  int iVar4;
  int in_ECX;
  int *piVar5;
  
  if (in_EAX != 0) {
    puVar3 = (undefined4 *)0x0;
    if (*(undefined4 **)(in_ECX + 0x34) != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)**(undefined4 **)(in_ECX + 0x34);
    }
    puVar1 = *(undefined4 **)(in_ECX + 0x34);
    for (; puVar3 != puVar1; puVar3 = (undefined4 *)*puVar3) {
      iVar2 = puVar3[2];
      iVar4 = FUN_002383b0();
      for (piVar5 = *(int **)(iVar2 + 0xb4); piVar5 != *(int **)(iVar2 + 0xb8); piVar5 = piVar5 + 2)
      {
        if (*piVar5 == iVar4) {
          if (piVar5[1] != 0) goto LAB_00182bca;
          break;
        }
      }
      FUN_002383b0();
      FUN_002f2b3f(in_EAX + 0x268,0x80000000,1,0,3,0x68000000,0);
      FUN_00183a90();
LAB_00182bca:
      iVar4 = FUN_002383b0();
      for (piVar5 = *(int **)(iVar2 + 0xb4); piVar5 != *(int **)(iVar2 + 0xb8); piVar5 = piVar5 + 2)
      {
        if (*piVar5 == iVar4) {
          if (piVar5[1] != 0) goto LAB_00182c2b;
          break;
        }
      }
      FUN_002383b0();
      FUN_002f2b3f(in_EAX + 0x36c,0x80000000,1,0,3,0x68000000,0);
      FUN_00183a90();
LAB_00182c2b:
    }
  }
  return;
}
