/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4D30C9D4239A592EA8C1C9BDCB565891FB4FB86B0650BDD088F2C60271088CDE
 * Entry: 0x00086cd0, Ghidra index: 1598, label: FUN_00086cd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int * FUN_00086cd0(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == param_3) {
    *param_1 = param_4;
    return param_1;
  }
  do {
    iVar1 = param_3 + -0x24;
    iVar2 = param_4 + -0x24;
    FUN_00087940(iVar2,0,0xffffffff);
    *(undefined4 *)(param_4 + -8) = *(undefined4 *)(param_3 + -8);
    *(undefined1 *)(param_4 + -4) = *(undefined1 *)(param_3 + -4);
    *(undefined1 *)(param_4 + -3) = *(undefined1 *)(param_3 + -3);
    param_3 = iVar1;
    param_4 = iVar2;
  } while (iVar1 != param_2);
  *param_1 = iVar2;
  return param_1;
}
