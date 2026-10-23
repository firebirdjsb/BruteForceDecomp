/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1D5FADE0480FD45EC23D83F0F1ECC07BBBEEE60B12A4258062FF413F2C0BA8D5
 * Entry: 0x000d0680, Ghidra index: 2576, label: FUN_000d0680
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000d0680(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int in_EDX;
  int *unaff_EBX;
  int *unaff_ESI;
  
  if (in_EDX == 0) {
    return;
  }
  piVar1 = *(int **)(in_EDX + 4);
  piVar2 = (int *)unaff_ESI[1];
  if (piVar2 == (int *)0x0) {
    if (piVar1 == (int *)0x0) {
      *unaff_ESI = 0;
    }
    else {
      *piVar1 = 0;
    }
  }
  else {
    iVar3 = *piVar2;
    if (piVar1 == (int *)0x0) {
      *unaff_ESI = iVar3;
    }
    else {
      *piVar1 = iVar3;
    }
    if (iVar3 != 0) {
      *(int **)(iVar3 + 4) = piVar1;
      goto LAB_000d0698;
    }
  }
  unaff_ESI[1] = (int)piVar1;
LAB_000d0698:
  if ((int *)unaff_EBX[1] == (int *)0x0) {
    *(undefined4 *)(in_EDX + 4) = 0;
    *unaff_EBX = in_EDX;
    *piVar2 = 0;
    unaff_EBX[1] = (int)piVar2;
    return;
  }
  *(int *)unaff_EBX[1] = in_EDX;
  *(int *)(in_EDX + 4) = unaff_EBX[1];
  *piVar2 = 0;
  unaff_EBX[1] = (int)piVar2;
  return;
}
