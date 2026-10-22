/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 857BB54488EBBDD0DD513435838C339B17123A4BB2827236436AA65F478061AB
 * Entry: 0x000e43b0, Ghidra index: 2843, label: FUN_000e43b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000e43b0(void)

{
  bool bVar1;
  int in_EAX;
  int *piVar2;
  int *piVar3;
  int unaff_EBX;
  
  bVar1 = false;
  if (*(int *)(in_EAX + 0x28) != 0) {
    piVar2 = (int *)0x0;
    if (*(undefined4 **)(in_EAX + 0x24) != (undefined4 *)0x0) {
      piVar2 = (int *)**(undefined4 **)(in_EAX + 0x24);
    }
    if (piVar2 != *(int **)(in_EAX + 0x24)) {
      do {
        if (bVar1) goto LAB_000e440e;
        if (piVar2[2] == unaff_EBX) {
          piVar3 = (int *)*piVar2;
          if (piVar2 != *(int **)(in_EAX + 0x24)) {
            *(int **)piVar2[1] = piVar3;
            *(int *)(*piVar2 + 4) = piVar2[1];
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00237ec0(piVar2);
          }
          bVar1 = true;
        }
        else {
          piVar3 = (int *)*piVar2;
        }
        piVar2 = piVar3;
      } while (piVar3 != *(int **)(in_EAX + 0x24));
      if (bVar1) {
LAB_000e440e:
        FUN_000e3e10(unaff_EBX);
        *(int *)(in_EAX + 0x60) = *(int *)(in_EAX + 0x60) + -1;
      }
    }
  }
  return;
}
