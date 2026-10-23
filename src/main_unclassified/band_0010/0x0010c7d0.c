/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 756EDBA5E00B449FA9DCBBE9668DECC1A756802942B312BEACC462419F640984
 * Entry: 0x0010c7d0, Ghidra index: 3470, label: FUN_0010c7d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0010c7d0(void)

{
  int *piVar1;
  int in_EAX;
  int iVar2;
  uint in_EDX;
  
  if ((int)in_EDX < 0) {
    if ((*(byte *)(in_EAX + 0x80) & 1) == 0) {
      in_EDX = 0;
    }
    else if (*(int *)(in_EAX + 100) == 0) {
      in_EDX = 0xffffffff;
    }
    else {
      in_EDX = (*(int *)(in_EAX + 0x68) - *(int *)(in_EAX + 100) >> 2) - 1;
    }
  }
  else if ((*(int *)(in_EAX + 100) == 0) ||
          ((uint)(*(int *)(in_EAX + 0x68) - *(int *)(in_EAX + 100) >> 2) <= in_EDX)) {
    if ((*(byte *)(in_EAX + 0x80) & 1) == 0) {
      if (*(int *)(in_EAX + 100) == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(in_EAX + 0x68) - *(int *)(in_EAX + 100) >> 2;
      }
      in_EDX = iVar2 - 1;
    }
    else {
      in_EDX = 0;
    }
  }
  *(uint *)(in_EAX + 0x70) = in_EDX;
  if ((*(int *)(in_EAX + 4) != 0) &&
     (piVar1 = *(int **)(*(int *)(in_EAX + 4) + 0x94), piVar1 != (int *)0x0)) {
    (**(code **)(*piVar1 + 0x28))();
  }
  return;
}
