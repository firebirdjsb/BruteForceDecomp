/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F04E4C69058122FBB7CE31E973EC29885957B2542C1B8E1E417F33B27C2016B1
 * Entry: 0x002f84f7, Ghidra index: 10950, label: XQueryValue
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void XAPILIB__XQueryValue
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  undefined4 uVar1;
  
  uVar1 = ExQueryNonVolatileSetting(param_1,param_2,param_3,param_4,param_5);
  RtlNtStatusToDosError(uVar1);
  return;
}
