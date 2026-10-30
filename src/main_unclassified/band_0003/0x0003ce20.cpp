/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A65769E384D96FD5CA0165A80F95DCBCEB2223E8E957ACCB6E87463D47E373BC
 * Entry: 0x0003ce20, Ghidra index: 440, label: FUN_0003ce20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0003ce20(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  while ((param_3 != param_5 || (param_2 != param_4))) {
    param_4 = param_4 + -1;
    uVar4 = param_4 / 2;
    if (*(uint *)(param_5 + 8) <= uVar4) {
      uVar4 = uVar4 - *(uint *)(param_5 + 8);
    }
    param_6 = param_6 + -1;
    uVar3 = param_6 / 2;
    if (*(uint *)(param_7 + 8) <= uVar3) {
      uVar3 = uVar3 - *(uint *)(param_7 + 8);
    }
    iVar1 = *(int *)(*(int *)(param_5 + 4) + uVar4 * 4);
    iVar2 = *(int *)(*(int *)(param_7 + 4) + uVar3 * 4);
    *(undefined4 *)(iVar2 + (param_6 % 2) * 8) = *(undefined4 *)(iVar1 + (param_4 % 2) * 8);
    *(undefined4 *)(iVar2 + 4 + (param_6 % 2) * 8) = *(undefined4 *)(iVar1 + 4 + (param_4 % 2) * 8);
  }
  *param_1 = param_6;
  param_1[1] = param_7;
  return;
}
