/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0CA2EA7862097D6E294ADE75F8CD510645A0E6BF426C9257E276C152BB784662
 * Entry: 0x00281440, Ghidra index: 9041, label: FUN_00281440
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
bool FUN_00281440(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int *param_6)

{
  char in_AL;
  int iVar1;
  undefined4 in_ECX;
  
  if (in_AL == '\0') {
    iVar1 = FUN_002ea01d(0x28);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_00280d50(param_1,in_ECX,param_2,param_3,param_4,param_5);
    }
  }
  else {
    iVar1 = FUN_002ea01d(0x4c);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_00280ff0(param_1,param_2,param_3,param_4,param_5);
    }
  }
  *param_6 = iVar1;
  return *param_6 != 0;
}
