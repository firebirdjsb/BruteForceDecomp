/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 64C8B50F2F7C850D41FD106470312B42D64C8F848B972C8B906C99890FE85EFA
 * Entry: 0x00137080, Ghidra index: 3898, label: FUN_00137080
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00137080(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int unaff_EBX;
  int *piVar2;
  int unaff_EDI;
  
  if (*(int *)(unaff_EBX + 4) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(unaff_EBX + 4));
  }
  *(undefined4 *)(unaff_EBX + 4) = 0;
  *(undefined4 *)(unaff_EBX + 8) = 0;
  *(undefined4 *)(unaff_EBX + 0xc) = 0;
  piVar2 = *(int **)(unaff_EDI + 0x20);
  if (piVar2 != *(int **)(unaff_EDI + 0x24)) {
    do {
      iVar1 = FUN_00137360(unaff_EDI,param_2,0);
      if ((*piVar2 <= iVar1) && (iVar1 <= piVar2[1])) {
        FUN_001376b0();
      }
      piVar2 = piVar2 + 4;
    } while (piVar2 != *(int **)(unaff_EDI + 0x24));
  }
  if (*(int *)(unaff_EBX + 4) != 0) {
    return *(int *)(unaff_EBX + 8) - *(int *)(unaff_EBX + 4) >> 4;
  }
  return 0;
}
