/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 50C1CEBD1964608C00D3E590ED459A50A1F1F64088575F9F97E9CDD7576002AA
 * Entry: 0x00279620, Ghidra index: 8929, label: FUN_00279620
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00279620(undefined4 *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  int *piVar2;
  
  if ((*param_2 != 0x10) || (param_2[1] != param_1[2])) {
    *param_3 = 0;
    return -0x7fffbffe;
  }
  iVar1 = FUN_002ea01d(0x44);
  if (iVar1 == 0) {
    *param_3 = 0;
    return -0x7ff8fff2;
  }
  piVar2 = (int *)FUN_0027a1f0();
  if (piVar2 == (int *)0x0) {
    *param_3 = 0;
    return -0x7ff8fff2;
  }
  iVar1 = (**(code **)(*piVar2 + 0x38))(param_2);
  if (iVar1 != 0) {
    if ((undefined4 *)param_2[3] != (undefined4 *)0x0) {
      *(undefined4 *)param_2[3] = 0;
    }
    (**(code **)(*piVar2 + 0x34))(1);
    *param_1 = 0;
    return iVar1;
  }
  *param_2 = (int)piVar2;
  return 0;
}
