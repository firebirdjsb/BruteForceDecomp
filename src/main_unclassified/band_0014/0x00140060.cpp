/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6E8248ED5359B6AD5644F726A876850D2B236D2FDEF0997F1CDFF1CE33821C4A
 * Entry: 0x00140060, Ghidra index: 4075, label: FUN_00140060
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00140060(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint *unaff_EBX;
  int local_4;
  
  iVar3 = param_2;
  iVar1 = *(int *)(param_2 + 0xc);
  param_2 = FUN_000a2840(unaff_EBX);
  iVar2 = *(int *)(iVar1 + 0x1fc);
  if ((param_2 == iVar2) || (*unaff_EBX < *(uint *)(param_2 + 0xc))) {
    local_4 = iVar2;
    piVar4 = &local_4;
  }
  else {
    piVar4 = &param_2;
  }
  if ((*piVar4 != *(int *)(iVar1 + 0x1fc)) && (iVar1 = *(int *)(*piVar4 + 0x10), iVar1 != 0)) {
    FUN_001400d0(param_1,iVar1,iVar3,param_3,param_4);
  }
  return;
}
