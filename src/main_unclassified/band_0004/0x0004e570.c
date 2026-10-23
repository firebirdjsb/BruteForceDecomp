/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9C9018A1C70EED1BA1CB473B0F322B12285F8C85F2B5A096F07823B479C1D55F
 * Entry: 0x0004e570, Ghidra index: 670, label: FUN_0004e570
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0004e570(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_3 - param_1 >> 3;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    FUN_0004e6a0(param_1);
    FUN_0004e6a0(param_2 + iVar1 * -8);
    FUN_0004e6a0(param_3 + iVar1 * -0x10);
    FUN_0004e6a0(iVar1 * 8 + param_1);
    return;
  }
  FUN_0004e6a0(param_1);
  return;
}
