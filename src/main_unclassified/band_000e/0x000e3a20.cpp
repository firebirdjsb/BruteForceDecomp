/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: ED641369551E5A7B8682F47035324080DB085BE37DB962029DC1FB25C79FECD6
 * Entry: 0x000e3a20, Ghidra index: 2823, label: FUN_000e3a20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000e3a20(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  for (iVar1 = (param_2 - param_1 >> 2) - (param_2 - param_1 >> 0x1f) >> 1; 0 < iVar1;
      iVar1 = iVar1 + -1) {
    FUN_000e3ba0(param_1,*(undefined4 *)(param_1 + -4 + iVar1 * 4),param_3);
  }
  return;
}
