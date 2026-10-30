/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C411A25325C285F8065FAAB0300757F1115CCF7C83694BE0E40CCED2CA362223
 * Entry: 0x0021c500, Ghidra index: 7528, label: FUN_0021c500
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_0021c500(void)

{
  int iVar1;
  int *piVar2;
  int in_EAX;
  uint uVar3;
  
  uVar3 = FUN_00219fc0(in_EAX,*(undefined4 *)(in_EAX + 0xc));
  if ((char)uVar3 != '\0') {
    if (*(int *)(in_EAX + 0xec) != 0) {
      FUN_0021d040(in_EAX,0,*(undefined4 *)(in_EAX + 8));
    }
    *(byte *)(in_EAX + 0x10c) = *(byte *)(in_EAX + 0x10c) & 0xfb;
    *(undefined4 *)(in_EAX + 0xa8) = 0;
    *(undefined4 *)(in_EAX + 0xb4) = 0;
    *(undefined4 *)(in_EAX + 0xbc) = *(undefined4 *)(in_EAX + 0xb8);
    return uVar3 & 0xff;
  }
  if ((*(int **)(in_EAX + 0xec) != (int *)0x0) && (iVar1 = **(int **)(in_EAX + 0xec), iVar1 != 0)) {
    piVar2 = *(int **)(iVar1 + 0x14);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x34))(piVar2,7);
    }
    piVar2 = *(int **)(iVar1 + 0x14);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
      *(undefined4 *)(iVar1 + 0x14) = 0;
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(iVar1);
  }
  return uVar3;
}
