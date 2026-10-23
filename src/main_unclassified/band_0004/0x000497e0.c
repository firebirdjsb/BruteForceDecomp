/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 656196A24F457E377426B13C6C7D8C9EA5735E59D56B6B4897E312F8BD5EFD2F
 * Entry: 0x000497e0, Ghidra index: 588, label: FUN_000497e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000497e0(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  while ((param_3 != param_5 || (param_2 != param_4))) {
    param_4 = param_4 + -1;
    uVar4 = (int)(param_4 + (param_4 >> 0x1f & 3U)) >> 2;
    iVar1 = uVar4 * -4;
    if (*(uint *)(param_5 + 8) <= uVar4) {
      uVar4 = uVar4 - *(uint *)(param_5 + 8);
    }
    param_6 = param_6 + -1;
    uVar3 = (int)(param_6 + (param_6 >> 0x1f & 3U)) >> 2;
    iVar2 = uVar3 * -4;
    if (*(uint *)(param_7 + 8) <= uVar3) {
      uVar3 = uVar3 - *(uint *)(param_7 + 8);
    }
    *(undefined4 *)(*(int *)(*(int *)(param_7 + 4) + uVar3 * 4) + (param_6 + iVar2) * 4) =
         *(undefined4 *)(*(int *)(*(int *)(param_5 + 4) + uVar4 * 4) + (param_4 + iVar1) * 4);
  }
  *param_1 = param_6;
  param_1[1] = param_7;
  return;
}
