/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F92133D9826D70398358DD8D6D1C52E9B15D7966197696AA0CF28AFABC29BA4D
 * Entry: 0x00234b30, Ghidra index: 7807, label: FUN_00234b30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
bool FUN_00234b30(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,int *param_8)

{
  int iVar1;
  
  iVar1 = FUN_002ea01d(0x28);
  if (iVar1 != 0) {
    iVar1 = FUN_00234860(param_1,param_3,param_4,param_5,param_6,param_7);
    *param_8 = iVar1;
    return iVar1 != 0;
  }
  *param_8 = 0;
  return false;
}
