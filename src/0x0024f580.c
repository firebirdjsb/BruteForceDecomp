/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0E7927C3C52D73D21ED2725BBD3A31E488F477D7226C9578F4F16A3C58DF7766
 * Entry: 0x0024f580, Ghidra index: 8318, label: FUN_0024f580
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0024f580(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  if ((*param_2 != 0x10) || (param_2[1] != *(int *)(param_1 + 8))) {
    *param_3 = 0;
    return 0x80004002;
  }
  iVar1 = FUN_002ea01d(0xc4);
  if (iVar1 == 0) {
    *param_3 = 0;
    return 0x8007000e;
  }
  iVar1 = FUN_0024fb00();
  if (iVar1 == 0) {
    *param_3 = 0;
    return 0x8007000e;
  }
  *param_3 = iVar1;
  return 0;
}
