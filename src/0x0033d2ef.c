/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 77D5CA882A36EA635D4DB9319D3A25B0A4B001637403EEA510F67E60D7E99B4F
 * Entry: 0x0033d2ef, Ghidra index: 12577, label: FUN_0033d2ef
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0033d2ef(int param_1,int *param_2)

{
  int iVar1;
  undefined4 local_8;
  
  local_8 = 0;
  if (*(int *)(param_1 + 8) == 0) {
    *(undefined4 *)(param_1 + 8) = 1;
    iVar1 = FUN_0033cb57(1,param_2);
    if (iVar1 == 0) {
      FUN_0033cceb(1,param_2);
    }
    if ((*param_2 != 0) && (param_2[1] == 0)) {
      FUN_0033d172(param_2[2],param_2[4]);
    }
    *(undefined4 *)(param_1 + 8) = 0;
  }
  else {
    local_8 = 0x80004005;
  }
  return local_8;
}
