/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2B1945D42ABEC405136A250A7B7591D5526BF68D27B94B32B7DEA5CFD57F4DAD
 * Entry: 0x00352e5e, Ghidra index: 13071, label: FUN_00352e5e
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00352e5e(undefined4 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = KeQueryPerformanceFrequency();
  uVar2 = __allmul(*param_1,param_1[1],(uintptr_t)0x000f4240U,0);
  __alldiv(uVar2,uVar1);
  return;
}
