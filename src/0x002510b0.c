/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 31E4B2756D9401DE172B1BF0B552E9C61AE32D7ADB2340672C57284979F19241
 * Entry: 0x002510b0, Ghidra index: 8359, label: FUN_002510b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002510b0(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_3 - param_1 >> 2;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    FUN_002512f0(param_1);
    FUN_002512f0(param_2 + iVar1 * -4);
    FUN_002512f0(param_3 + iVar1 * -8);
    FUN_002512f0(iVar1 * 4 + param_1);
    return;
  }
  FUN_002512f0(param_1);
  return;
}
