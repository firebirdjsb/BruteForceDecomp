/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 524AF3E92BEEE587E5E97BE7C364F0F32EEE534137BEDE41C8C85B4A5BC0AC15
 * Entry: 0x0020c180, Ghidra index: 7349, label: FUN_0020c180
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0020c180(undefined4 param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  uint in_EAX;
  int unaff_EDI;
  
  uVar1 = *(uint *)(unaff_EDI + 8);
  if (uVar1 < in_EAX) {
    FUN_0020c6a0(unaff_EDI,*(undefined4 *)(unaff_EDI + 4),in_EAX - uVar1,&param_1);
  }
  else {
    while (in_EAX < uVar1) {
      piVar2 = (int *)(*(int **)(unaff_EDI + 4))[1];
      if (piVar2 != *(int **)(unaff_EDI + 4)) {
        *(int *)piVar2[1] = *piVar2;
        *(int *)(*piVar2 + 4) = piVar2[1];
        FUN_0001fe80();
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(piVar2);
      }
      uVar1 = *(uint *)(unaff_EDI + 8);
    }
  }
  if (param_2 != 0) {
    FUN_0008f6e0();
  }
  return;
}
