/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6400BA37D68EB53C187C8A0F785C8524BA1F9464B6C9F935B8F148CF1C37C0D8
 * Entry: 0x0029f9b0, Ghidra index: 9492, label: FUN_0029f9b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0029f9b0(undefined4 *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  int *piVar2;
  
  if ((*param_2 != 0x10) || (param_2[1] != param_1[2])) {
    *param_3 = 0;
    return -0x7fffbffe;
  }
  iVar1 = FUN_002ea01d(0x18);
  if (iVar1 == 0) {
    *param_3 = 0;
    return -0x7ff8fff2;
  }
  piVar2 = (int *)FUN_0029fbe0();
  if (piVar2 == (int *)0x0) {
    *param_3 = 0;
    return -0x7ff8fff2;
  }
  iVar1 = (**(code **)(*piVar2 + 0x30))(param_2);
  if (iVar1 != 0) {
    if ((undefined4 *)param_2[3] != (undefined4 *)0x0) {
      *(undefined4 *)param_2[3] = 0;
    }
    (**(code **)(*piVar2 + 0x2c))(1);
    *param_1 = 0;
    return iVar1;
  }
  *param_2 = (int)piVar2;
  return 0;
}
