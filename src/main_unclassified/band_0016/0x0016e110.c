/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7B621D27D2FE56C98212BDD4D345BB18403883E7F091218BDA05E9A80330E4DD
 * Entry: 0x0016e110, Ghidra index: 4811, label: FUN_0016e110
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0016e110(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_2 - param_1;
  iVar1 = -(iVar2 >> 0x1f);
  while (1 < iVar2 / 0x14) {
    FUN_0016ea30(param_1,param_2,0);
    iVar2 = iVar2 + -0x14;
    iVar1 = iVar2 * 0x66666667;
    param_2 = param_2 + -0x14;
  }
  return iVar1;
}
