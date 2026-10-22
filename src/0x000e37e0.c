/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 80A12D5DED5726FE7064EBD862E45ADCBA12583B373ADD1822292D75B8CD6960
 * Entry: 0x000e37e0, Ghidra index: 2820, label: FUN_000e37e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000e37e0(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_3 - param_1 >> 2;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    FUN_000e3a70(param_1);
    FUN_000e3a70(param_2 + iVar1 * -4);
    FUN_000e3a70(param_3 + iVar1 * -8);
    FUN_000e3a70(iVar1 * 4 + param_1);
    return;
  }
  FUN_000e3a70(param_1);
  return;
}
