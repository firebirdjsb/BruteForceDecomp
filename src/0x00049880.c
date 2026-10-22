/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0B411DA27D1935300D6EA0C03976513D34AAE484EDD5C48CFF96D0D165C83713
 * Entry: 0x00049880, Ghidra index: 589, label: FUN_00049880
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00049880(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  for (; (param_3 != param_5 || (param_2 != param_4)); param_2 = param_2 + 1) {
    uVar3 = (int)(param_2 + (param_2 >> 0x1f & 3U)) >> 2;
    iVar1 = uVar3 * -4;
    if (*(uint *)(param_3 + 8) <= uVar3) {
      uVar3 = uVar3 - *(uint *)(param_3 + 8);
    }
    uVar2 = (int)(param_6 + (param_6 >> 0x1f & 3U)) >> 2;
    iVar4 = param_6 + uVar2 * -4;
    if (*(uint *)(param_7 + 8) <= uVar2) {
      uVar2 = uVar2 - *(uint *)(param_7 + 8);
    }
    param_6 = param_6 + 1;
    *(undefined4 *)(*(int *)(*(int *)(param_7 + 4) + uVar2 * 4) + iVar4 * 4) =
         *(undefined4 *)(*(int *)(*(int *)(param_3 + 4) + uVar3 * 4) + (param_2 + iVar1) * 4);
  }
  *param_1 = param_6;
  param_1[1] = param_7;
  return;
}
