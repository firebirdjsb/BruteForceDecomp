/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 60C84F4D0BE93A5E94A1B80B535F90462B55243975C53502B4C1C24FABDA4870
 * Entry: 0x00255ac0, Ghidra index: 8426, label: FUN_00255ac0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00255ac0(int param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  int *piVar2;
  
  if ((*param_2 != 0x10) || (param_2[1] != *(int *)(param_1 + 8))) {
    *param_3 = 0;
    return 0x80004002;
  }
  iVar1 = FUN_002ea01d(0x14);
  if (iVar1 == 0) {
    *param_3 = 0;
    return 0x8007000e;
  }
  piVar2 = (int *)FUN_00255b70();
  if (piVar2 == (int *)0x0) {
    *param_3 = 0;
    return 0x8007000e;
  }
  iVar1 = (**(code **)(*piVar2 + 0x10))(param_2);
  if (iVar1 != 0) {
    if ((undefined4 *)param_2[3] != (undefined4 *)0x0) {
      *(undefined4 *)param_2[3] = 0;
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(piVar2);
  }
  *param_2 = (int)piVar2;
  return 0;
}
