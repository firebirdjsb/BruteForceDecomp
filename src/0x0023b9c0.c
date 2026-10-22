/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9B31ACFCFBD9B112E75FFB6B06F94B53FB9AA9182E90F64C7A0DC68BD61CBF71
 * Entry: 0x0023b9c0, Ghidra index: 7915, label: FUN_0023b9c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0023b9c0(undefined4 *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  int unaff_EBX;
  
  piVar2 = param_2;
  do {
    piVar1 = piVar2;
    if (piVar1 == param_3) {
      *param_1 = piVar1;
      return;
    }
    piVar2 = (int *)*piVar1;
  } while (piVar1 == *(int **)(unaff_EBX + 4));
  *(int *)piVar1[1] = *piVar1;
  *(int *)(*piVar1 + 4) = piVar1[1];
  if ((uint)piVar1[8] < 0x10) {
    piVar1[8] = 0xf;
    param_2 = (int *)((uint)param_2 & 0xffffff00);
    piVar1[7] = 0;
    uVar3 = FUN_0001f4d0(&param_2);
    FUN_0001f4e0(uVar3);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(piVar1);
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(piVar1[3]);
}
