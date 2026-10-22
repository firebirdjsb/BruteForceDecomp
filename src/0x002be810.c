/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9F42EE5E8CD84CE878697374687708A7F3289A61C9B9C5F9B6B12EA3E7C99BFC
 * Entry: 0x002be810, Ghidra index: 9974, label: FUN_002be810
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002be810(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int in_EAX;
  int iVar3;
  int iVar4;
  undefined4 local_14;
  undefined4 local_10;
  
  local_14 = *(undefined4 *)(in_EAX + 0xb4);
  local_10 = *(undefined4 *)(in_EAX + 0xb8);
  iVar3 = *(int *)(param_1 + 0x18);
  if (iVar3 != 0) {
    iVar4 = *(int *)(iVar3 + 8);
    if (iVar4 != 0) {
      iVar1 = *(int *)(iVar4 + 8);
      if (iVar1 != 0) {
        for (iVar2 = *(int *)(iVar1 + 8); iVar2 != 0; iVar2 = *(int *)(iVar2 + 8)) {
          FUN_002be4c0(iVar3,&local_14,param_2);
          iVar3 = iVar4;
          iVar4 = iVar1;
          iVar1 = iVar2;
        }
        FUN_002be4c0(iVar1,&local_14,param_2);
      }
      FUN_002be4c0(iVar4,&local_14,param_2);
    }
    FUN_002be4c0(iVar3,&local_14,param_2);
  }
  return;
}
