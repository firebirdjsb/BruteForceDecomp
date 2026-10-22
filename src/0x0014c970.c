/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 73A688BDB30C9DA26842323F48031AD317A1C6A8D66A954B5D68509AF241129B
 * Entry: 0x0014c970, Ghidra index: 4342, label: FUN_0014c970
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0014c970(void)

{
  int *piVar1;
  char cVar2;
  int in_EAX;
  undefined4 unaff_EBX;
  
  *(undefined4 *)(in_EAX + 0x1d8) = unaff_EBX;
  if ((*(int *)(in_EAX + 0x1b4) != 0) && (*(int *)(*(int *)(in_EAX + 0x1b4) + 0xb4) == 0)) {
    FUN_0014bc10();
  }
  if (*(int **)(in_EAX + 0x20) != (int *)0x0) {
    (**(code **)(**(int **)(in_EAX + 0x20) + 0x9c))();
  }
  if (*(int **)(in_EAX + 100) != (int *)0x0) {
    (**(code **)(**(int **)(in_EAX + 100) + 0x9c))();
  }
  if (*(int **)(in_EAX + 0x130) != (int *)0x0) {
    (**(code **)(**(int **)(in_EAX + 0x130) + 0x9c))();
  }
  if (*(int **)(in_EAX + 0x164) != (int *)0x0) {
    (**(code **)(**(int **)(in_EAX + 0x164) + 0x9c))();
  }
  if (*(int **)(in_EAX + 0xa8) != (int *)0x0) {
    (**(code **)(**(int **)(in_EAX + 0xa8) + 0x9c))();
  }
  if (*(int **)(in_EAX + 0x198) != (int *)0x0) {
    (**(code **)(**(int **)(in_EAX + 0x198) + 0x9c))();
  }
  if (*(int **)(in_EAX + 0xdc) != (int *)0x0) {
    (**(code **)(**(int **)(in_EAX + 0xdc) + 0x9c))();
  }
  if (*(int **)(in_EAX + 0x1ac) != (int *)0x0) {
    cVar2 = (**(code **)(**(int **)(in_EAX + 0x1ac) + 0x58))();
    if ((cVar2 != '\0') &&
       (piVar1 = *(int **)(*(int *)(in_EAX + 0x1ac) + 0x20), piVar1 != (int *)0x0)) {
      (**(code **)(*piVar1 + 0x9c))();
    }
  }
  return;
}
