/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AF6205E4183BB7EA9506E2A7143B9BD43FE55B23EAC5B2BCFE3356D06EEB9487
 * Entry: 0x0024ab90, Ghidra index: 8228, label: FUN_0024ab90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int * FUN_0024ab90(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == param_3) {
    *param_1 = param_4;
    return param_1;
  }
  do {
    iVar1 = param_3 + -0x14;
    iVar2 = param_4 + -0x14;
    FUN_00249d40();
    *(undefined4 *)(param_4 + -4) = *(undefined4 *)(param_3 + -4);
    param_3 = iVar1;
    param_4 = iVar2;
  } while (iVar1 != param_2);
  *param_1 = iVar2;
  return param_1;
}
