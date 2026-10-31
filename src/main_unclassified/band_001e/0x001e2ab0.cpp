/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1D5997DA8AD0EC6ED6283E8FB588BFBEFA4CA1D22C0B2EC33D911BBF328C550D
 * Entry: 0x001e2ab0, Ghidra index: 6754, label: FUN_001e2ab0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Callee-draft-matched declaration for C++17 name lookup only; Xbox ABI_UNVERIFIED. */
extern int * FUN_000e0be0(int *param_1,int param_2,undefined4 param_3);
undefined4 *
FUN_001e2ab0(undefined4 *param_1,int param_2,int param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = param_4;
  iVar1 = param_3;
  iVar4 = param_5;
  for (iVar5 = param_2; iVar5 != iVar1; iVar5 = iVar5 + 0x1c) {
    piVar3 = (int *)FUN_000e0be0(&param_2,iVar4,iVar5);
    iVar4 = *piVar3 + 0x1c;
  }
  *(char *)param_1 = (char)uVar2;
  *param_1 = uVar2;
  param_1[1] = iVar4;
  return param_1;
}
