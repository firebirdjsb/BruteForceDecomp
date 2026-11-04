/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 43F74CDB33292031B7E5CF862D4DC02F36366F729AF5F9A92F7819E8E2F15B75
 * Entry: 0x002511b0, Ghidra index: 8360, label: FUN_002511b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-draft declaration only; original Xbox guest ABI remains ABI_UNVERIFIED. */
extern void FUN_00251370(int param_1,int param_2,undefined4 param_3,undefined4 param_4);
void FUN_002511b0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_2 - param_1 >> 2;
  for (iVar1 = iVar2 - (param_2 - param_1 >> 0x1f) >> 1; 0 < iVar1; iVar1 = iVar1 + -1) {
    FUN_00251370(param_1,iVar2,*(undefined4 *)(param_1 + -4 + iVar1 * 4),param_3);
  }
  return;
}
