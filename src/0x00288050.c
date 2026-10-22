/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1D047F19E3ACFD1856A183D5E70B862F228FAA2935EA12D7FA2A0AA687095153
 * Entry: 0x00288050, Ghidra index: 9101, label: FUN_00288050
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00288050(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_3 - param_1 >> 2;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar2 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    iVar1 = iVar2 * 4 + param_1;
    FUN_00288180(param_1,iVar1,iVar2 * 8 + param_1);
    FUN_00288180(param_2 + iVar2 * -4,param_2,iVar2 * 4 + param_2);
    iVar3 = param_3 + iVar2 * -4;
    FUN_00288180(param_3 + iVar2 * -8,iVar3,param_3);
    FUN_00288180(iVar1,param_2,iVar3);
    return;
  }
  FUN_00288180(param_1,param_2,param_3);
  return;
}
