/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 10D3358BEDC86DA3E6FE078269EA1682A62B9DEC4893DCD59E4F3E4BD556ED42
 * Entry: 0x0031baa9, Ghidra index: 12307, label: FUN_0031baa9
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0031baa9(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00314868(param_1[2],param_2,param_3,1);
  iVar2 = (-(uint)(iVar1 != 0) & 0x7ff8fff2) + 0x8007000e;
  *param_1 = iVar1;
  if (-1 < iVar2) {
    iVar1 = MmGetPhysicalAddress(iVar1);
    param_1[1] = iVar1;
  }
  return iVar2;
}
