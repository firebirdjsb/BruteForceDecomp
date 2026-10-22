/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AA35726C3037E872B1F4DD54BC64DF55B01AC73E8ED04533F2411D071FCEBD54
 * Entry: 0x00237ec0, Ghidra index: 7860, label: FUN_00237ec0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00237ec0(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = FUN_002f77f3(0,param_1);
  XAPILIB__HeapFree(uVar1,uVar2,param_1);
  return;
}
