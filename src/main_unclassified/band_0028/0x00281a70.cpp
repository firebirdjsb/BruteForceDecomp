/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C105F3D0CC550E43EB58C4CC2D8ED82248FA384C2BC1EB8071FB406DB3E70E45
 * Entry: 0x00281a70, Ghidra index: 9052, label: FUN_00281a70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00281a70(void)

{
  int in_EAX;
  undefined2 *in_ECX;
  int iVar1;
  int iVar2;
  int unaff_ESI;
  
  iVar2 = 0;
  if (*(int *)(unaff_ESI + 0x282c) != 0) {
    do {
      if (in_EAX == 0) break;
      FUN_00281810(*(int *)(unaff_ESI + 0x2804) + 0x81U & 0x1ff);
      if (in_EAX < 1) {
        *(int *)(unaff_ESI + 0x2820) = *(int *)(unaff_ESI + 0x2820) + -1;
      }
      else {
        *(undefined2 *)(unaff_ESI + 4 + (*(int *)(unaff_ESI + 0x2804) + 0x81U & 0x1ff) * 2) =
             *in_ECX;
        in_ECX = in_ECX + 1;
        iVar2 = iVar2 + 1;
        *(int *)(unaff_ESI + 0x2838) = *(int *)(unaff_ESI + 0x2838) + 1;
        in_EAX = in_EAX + -1;
      }
      *(uint *)(unaff_ESI + 0x2804) = *(int *)(unaff_ESI + 0x2804) + 1U & 0x1ff;
      if (*(int *)(unaff_ESI + 0x2820) != 0) {
        FUN_002816e0();
      }
      iVar1 = *(int *)(unaff_ESI + 0x282c) + -1;
      *(int *)(unaff_ESI + 0x282c) = iVar1;
    } while (iVar1 != 0);
    if (*(int *)(unaff_ESI + 0x282c) != 0) {
      return iVar2;
    }
  }
  *(undefined4 *)(unaff_ESI + 0x2810) = 1;
  return iVar2;
}
