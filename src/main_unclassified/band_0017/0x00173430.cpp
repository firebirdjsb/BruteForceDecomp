/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3514269D1B78C429A1A1F197B4DA8C2D12802032870665F71BBD95B797632342
 * Entry: 0x00173430, Ghidra index: 4878, label: FUN_00173430
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00173430(void)

{
  int *piVar1;
  int *piVar2;
  int unaff_EBX;
  int *piVar3;
  
  piVar1 = *(int **)(unaff_EBX + 0xc);
  for (piVar3 = *(int **)(unaff_EBX + 8); piVar3 != piVar1; piVar3 = piVar3 + 2) {
    piVar2 = *(int **)(*piVar3 + 0x74);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x34))(piVar2,piVar3[1]);
    }
  }
  if (*(int *)(unaff_EBX + 8) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(unaff_EBX + 8));
  }
  *(undefined4 *)(unaff_EBX + 8) = 0;
  *(undefined4 *)(unaff_EBX + 0xc) = 0;
  *(undefined4 *)(unaff_EBX + 0x10) = 0;
  return;
}
