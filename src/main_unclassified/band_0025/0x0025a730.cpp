/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 56548A797F9686BF584D1C992B1247D43EDAB907DF258D53E10BF259BDE29F3C
 * Entry: 0x0025a730, Ghidra index: 8522, label: FUN_0025a730
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0025a730(int param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  int *piVar2;
  
  if ((*param_2 != 0x10) || (param_2[1] != *(int *)(param_1 + 8))) {
    *param_3 = 0;
    return 0x80004002;
  }
  iVar1 = FUN_002ea01d(0x24);
  if (iVar1 == 0) {
    *param_3 = 0;
    return 0x8007000e;
  }
  piVar2 = (int *)FUN_0025ab00();
  if (piVar2 == (int *)0x0) {
    *param_3 = 0;
    return 0x8007000e;
  }
  iVar1 = (**(code **)(*piVar2 + 0x44))(param_2);
  if (iVar1 != 0) {
    if ((undefined4 *)param_2[3] != (undefined4 *)0x0) {
      *(undefined4 *)param_2[3] = 0;
    }
    FUN_00259e20();
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(piVar2);
  }
  *param_2 = (int)piVar2;
  return 0;
}
