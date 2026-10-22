/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 37E317CBD2D84FFB91A1F7551AF98A2BC7A59F86A54C23FB053FE6C93A22C30B
 * Entry: 0x00251060, Ghidra index: 8358, label: FUN_00251060
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00251060(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_2 - param_1 >> 2;
  for (iVar1 = iVar2 - (param_2 - param_1 >> 0x1f) >> 1; 0 < iVar1; iVar1 = iVar1 + -1) {
    FUN_00251280(param_1,iVar2,*(undefined4 *)(param_1 + -4 + iVar1 * 4),param_3);
  }
  return;
}
