/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B92AAE7AA91909C213F108BBB4B7BE696B0A79FCBAAE532A0126F9ABBA4B2978
 * Entry: 0x00142cb0, Ghidra index: 4136, label: FUN_00142cb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00142cb0(void)

{
  int *piVar1;
  int in_EAX;
  int iVar2;
  int *piVar3;
  int unaff_ESI;
  
  *(undefined4 *)(unaff_ESI + 4) = 0;
  *(undefined4 *)(unaff_ESI + 8) = 0;
  *(undefined4 *)(unaff_ESI + 0xc) = 0;
  *(undefined4 *)(unaff_ESI + 0x14) = 0;
  *(undefined4 *)(unaff_ESI + 0x18) = 0;
  *(undefined4 *)(unaff_ESI + 0x1c) = 0;
  *(undefined4 *)(unaff_ESI + 0x24) = 0;
  *(undefined4 *)(unaff_ESI + 0x28) = 0;
  *(undefined4 *)(unaff_ESI + 0x2c) = 0;
  *(undefined4 *)(unaff_ESI + 0x30) = 0;
  *(float *)(unaff_ESI + 0x34) = (float)*(int *)(in_EAX + 0x394);
  *(undefined4 *)(unaff_ESI + 0x38) = *(undefined4 *)(in_EAX + 0x398);
  if (*(int *)(in_EAX + 0x38c) != 0) {
    if (*(uint *)(in_EAX + 0x390) < 0x10) {
      iVar2 = in_EAX + 0x37c;
    }
    else {
      iVar2 = *(int *)(in_EAX + 0x37c);
    }
    FUN_00142df0(unaff_ESI,iVar2);
    if ((*(int *)(unaff_ESI + 4) != 0) &&
       ((*(int *)(unaff_ESI + 8) - *(int *)(unaff_ESI + 4)) / 0x1c == 0x16)) {
      iVar2 = 0;
      do {
        *(undefined4 *)(iVar2 + 0x18 + *(int *)(unaff_ESI + 4)) = 0x3f800000;
        iVar2 = iVar2 + 0x1c;
      } while (iVar2 < 0x268);
      piVar1 = *(int **)(in_EAX + 0x3a4);
      for (piVar3 = *(int **)(in_EAX + 0x3a0); piVar3 != piVar1; piVar3 = piVar3 + 2) {
        *(int *)(*piVar3 * 0x1c + 0x18 + *(int *)(unaff_ESI + 4)) = piVar3[1];
      }
    }
  }
  return;
}
