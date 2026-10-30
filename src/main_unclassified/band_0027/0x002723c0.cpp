/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2DD965137E8AFD8FA03E30060D5E5C6560297C390B1DE0289136FF8FC6272658
 * Entry: 0x002723c0, Ghidra index: 8834, label: FUN_002723c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002723c0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *in_EAX;
  int unaff_ESI;
  
  *(undefined4 *)(unaff_ESI + 0x108) = *in_EAX;
  *(undefined4 *)(unaff_ESI + 0x10c) = in_EAX[1];
  *(undefined4 *)(unaff_ESI + 0x110) = in_EAX[2];
  *(undefined4 *)(unaff_ESI + 0x124) = in_EAX[7];
  uVar1 = in_EAX[5];
  uVar2 = in_EAX[4];
  *(undefined4 *)(unaff_ESI + 0x114) = in_EAX[3];
  *(undefined4 *)(unaff_ESI + 0x118) = uVar2;
  *(undefined4 *)(unaff_ESI + 0x11c) = uVar1;
  *(undefined4 *)(unaff_ESI + 300) = in_EAX[9];
  *(undefined4 *)(unaff_ESI + 0x128) = in_EAX[8];
  *(undefined4 *)(unaff_ESI + 0x120) = in_EAX[6];
  piVar3 = *(int **)(unaff_ESI + 0x104);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0xc))(piVar3,(undefined4 *)(unaff_ESI + 0x108));
    (**(code **)(**(int **)(unaff_ESI + 0x104) + 0x10))
              (*(int **)(unaff_ESI + 0x104),unaff_ESI + 0x114);
    (**(code **)(**(int **)(unaff_ESI + 0x104) + 0x14))
              (*(int **)(unaff_ESI + 0x104),*(undefined4 *)(unaff_ESI + 0x120));
    (**(code **)(**(int **)(unaff_ESI + 0x104) + 0x18))
              (*(int **)(unaff_ESI + 0x104),*(undefined4 *)(unaff_ESI + 0x124));
    (**(code **)(**(int **)(unaff_ESI + 0x104) + 0x20))
              (*(int **)(unaff_ESI + 0x104),*(undefined4 *)(unaff_ESI + 300));
    (**(code **)(**(int **)(unaff_ESI + 0x104) + 0x1c))
              (*(int **)(unaff_ESI + 0x104),*(undefined4 *)(unaff_ESI + 0x128));
  }
  return;
}
