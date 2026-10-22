/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 89A5235AD2E1E3569C2DCA31C1F3D6DA3C94B711DBB2A3FAF354258DF88E10EC
 * Entry: 0x001f1b90, Ghidra index: 6996, label: FUN_001f1b90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_001f1b90(undefined4 param_1,int *param_2)

{
  int *piVar1;
  int in_EAX;
  undefined4 uVar2;
  int iVar3;
  int unaff_ESI;
  
  iVar3 = *(int *)(unaff_ESI + 0x2c0);
  if ((iVar3 == -3) || (iVar3 == -1)) {
    *(undefined4 *)(unaff_ESI + 8) = 0xb;
    return 0x80004005;
  }
  if (param_2 == (int *)0x0) {
    param_2 = (int *)&param_2;
  }
  if (iVar3 == 1) {
    *param_2 = 0;
    return 0;
  }
  *(undefined4 *)(unaff_ESI + 0x28c) = param_1;
  *(int *)(unaff_ESI + 0x290) = in_EAX;
  if (in_EAX != 0) {
    piVar1 = (int *)(unaff_ESI + 0x284);
    do {
      if ((*piVar1 == 0) && (*(char *)(unaff_ESI + 0x27c) == '\0')) {
        uVar2 = FUN_001f2020(piVar1);
        *(undefined4 *)(unaff_ESI + 0x280) = uVar2;
        if (*piVar1 == 0) {
          *(undefined1 *)(unaff_ESI + 0x27c) = 1;
        }
      }
      iVar3 = FUN_00252870();
      *(int *)(unaff_ESI + 0x2c0) = iVar3;
      if (iVar3 == 1) {
        *param_2 = in_EAX - *(int *)(unaff_ESI + 0x290);
        return 0;
      }
    } while (((iVar3 == 0) && (*(char *)(unaff_ESI + 0x27c) == '\0')) &&
            (*(int *)(unaff_ESI + 0x290) != 0));
  }
  *param_2 = in_EAX - *(int *)(unaff_ESI + 0x290);
  return 0;
}
