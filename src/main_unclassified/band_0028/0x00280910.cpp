/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 499B15E7B0A5C76E3AD4E14E527ADA95F38246DB8C8C5331D7DF32B90A9151A7
 * Entry: 0x00280910, Ghidra index: 9031, label: FUN_00280910
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
bool FUN_00280910(undefined4 param_1,undefined4 param_2,int *param_3)

{
  char in_AL;
  int iVar1;
  undefined4 in_ECX;
  
  if (in_AL == '\0') {
    iVar1 = FUN_002ea01d(0x20);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_00280180(param_1,in_ECX,param_2);
    }
    *param_3 = iVar1;
    return *param_3 != 0;
  }
  iVar1 = FUN_002ea01d(0x44);
  if (iVar1 != 0) {
    iVar1 = FUN_00280480(param_2);
    *param_3 = iVar1;
    return *param_3 != 0;
  }
  *param_3 = 0;
  return *param_3 != 0;
}
