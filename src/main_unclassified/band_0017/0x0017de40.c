/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8321E4CDA17727381F40F2167BA2D0444C45E58B4B5E0CF76B70130E9652C1C8
 * Entry: 0x0017de40, Ghidra index: 5094, label: FUN_0017de40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0017de40(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_3 - param_1 >> 2;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    FUN_0017df90(param_1);
    FUN_0017df90(param_2 + iVar1 * -4);
    FUN_0017df90(param_3 + iVar1 * -8);
    FUN_0017df90(iVar1 * 4 + param_1);
    return;
  }
  FUN_0017df90(param_1);
  return;
}
