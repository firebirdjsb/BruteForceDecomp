/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B9AC4D592351235951A4263CC63E381405A9C2A0CFACF2971B118470C92F16B5
 * Entry: 0x002f390d, Ghidra index: 10842, label: FUN_002f390d
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002f390d(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int local_8;
  
  if (param_2 != 0) {
    XAPILIB__SetFilePointer(param_1,0,0,0);
  }
  iVar1 = XAPILIB__ReadFile(param_1,(int)&param_2 + 2,2,&local_8,0);
  if (((iVar1 == 0) || (local_8 != 2)) && (param_2._2_2_ != -0x101)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}
