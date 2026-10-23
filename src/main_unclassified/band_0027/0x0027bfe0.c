/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DA21A98573C922AE57247EBA2302E7168BA202933BC940667B079AD40D72E798
 * Entry: 0x0027bfe0, Ghidra index: 8970, label: FUN_0027bfe0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0027bfe0(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  if ((*param_2 != 0x10) || (param_2[1] != *(int *)(param_1 + 8))) {
    *param_3 = 0;
    return 0x80004002;
  }
  iVar1 = FUN_002ea01d(0x80);
  if (iVar1 == 0) {
    *param_3 = 0;
    return 0x8007000e;
  }
  iVar1 = FUN_0027c260();
  if (iVar1 == 0) {
    *param_3 = 0;
    return 0x8007000e;
  }
  *param_3 = iVar1;
  return 0;
}
