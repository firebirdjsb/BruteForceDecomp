/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5E7E4381CBF4AD5237568A92AB6B06949B19BB30C565EE79D5176495434BF97D
 * Entry: 0x002acd90, Ghidra index: 9676, label: FUN_002acd90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002acd90(undefined4 *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  int *piVar2;
  
  if ((*param_2 != 8) || (param_2[1] != param_1[2])) {
    *param_3 = 0;
    return 0x80004002;
  }
  iVar1 = FUN_002ea01d(0x20);
  if (iVar1 == 0) {
    *param_3 = 0;
    return 0x8007000e;
  }
  piVar2 = (int *)FUN_002ad670();
  if (piVar2 == (int *)0x0) {
    *param_3 = 0;
    return 0x8007000e;
  }
  iVar1 = (**(code **)(*piVar2 + 0x38))(piVar2,param_2);
  if (iVar1 != 0) {
    FUN_002ad0b0();
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(piVar2);
  }
  *param_1 = piVar2;
  return 0;
}
