/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AD677C1F44BFF0D557E07A8E01F624F26E3430458F0DEDC7DFCB2220B4AFF057
 * Entry: 0x00343bd0, Ghidra index: 12723, label: FUN_00343bd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00343bd0(int param_1,uint param_2,int *param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  
  piVar2 = param_3;
  iVar1 = param_1;
  if (param_3 != (int *)0x0) {
    *param_3 = param_1;
  }
  iVar3 = FUN_00343a65(param_1,param_2 | 0x20000000,0);
  if ((iVar3 != 0) && (iVar3 = FUN_00343af7(iVar1,&param_1,&param_3), iVar3 != 0)) {
    if (piVar2 == (int *)0x0) {
      if (param_3 == (int *)0x0) {
        param_1 = *(int *)(iVar1 + 0x24) + param_1;
      }
      else {
        param_1 = 0;
      }
      *param_4 = param_1;
      return 1;
    }
    uVar4 = FUN_003439f6(iVar1,param_1,param_3,piVar2,param_4);
    return uVar4;
  }
  return 0;
}
