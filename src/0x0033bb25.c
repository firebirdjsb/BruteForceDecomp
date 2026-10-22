/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BC102B5CDC24F740002F0754997DF5950DE674B17568B04144E06C4EFDA2AA77
 * Entry: 0x0033bb25, Ghidra index: 12524, label: FUN_0033bb25
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
bool FUN_0033bb25(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_2;
  if (param_2 == 0) {
    iVar1 = 0x4000000c;
  }
  iVar1 = FUN_003449ff(param_1,iVar1,&param_2);
  if ((iVar1 != 0) && (iVar1 = FUN_0033b9e1(), iVar1 != 0)) {
    iVar1 = FUN_00344a56(param_1,param_2);
    return iVar1 != 0;
  }
  return false;
}
