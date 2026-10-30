/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BCBECC870B17C8B570A6D13FD68CC94C4B30AEFEB9A1379684C2AE38FC3B5E76
 * Entry: 0x00062900, Ghidra index: 1063, label: FUN_00062900
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00062900(int param_1,float param_2,int *param_3)

{
  float *pfVar1;
  int iVar2;
  int unaff_EBX;
  float *pfVar3;
  int local_c;
  float local_8;
  int *local_4;
  
  pfVar1 = *(float **)(param_1 + 0x10);
  pfVar3 = *(float **)(param_1 + 0xc);
  iVar2 = 0;
  local_c = 0;
  if (pfVar3 != pfVar1) {
    do {
      if (param_2 < *pfVar3) break;
      pfVar3 = pfVar3 + 2;
      iVar2 = iVar2 + 1;
    } while (pfVar3 != pfVar1);
    local_c = iVar2;
    if (pfVar3 != pfVar1) {
      local_8 = param_2;
      local_4 = param_3;
      if (param_3 != (int *)0x0) {
        (**(code **)(*param_3 + 4))(param_3);
      }
      FUN_00062a10(param_1 + 8,pfVar3,1,&local_8);
      if (param_3 == (int *)0x0) {
        return iVar2;
      }
      (**(code **)(*param_3 + 8))(param_3);
      return iVar2;
    }
  }
  local_8 = param_2;
  local_4 = param_3;
  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 4))(param_3);
  }
  iVar2 = *(int *)(param_1 + 0xc);
  if ((iVar2 == 0) ||
     ((uint)(*(int *)(param_1 + 0x14) - iVar2 >> 3) <= (uint)(*(int *)(param_1 + 0x10) - iVar2 >> 3)
     )) {
    FUN_00062a10(param_1 + 8,*(undefined4 *)(param_1 + 0x10),1,&local_8);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x10);
    FUN_000619d0(iVar2,1,&local_8,param_1 + 8,param_3);
    *(int *)(param_1 + 0x10) = iVar2 + 8;
  }
  if (param_3 == (int *)0x0) {
    return local_c;
  }
  (**(code **)(*param_3 + 8))(param_3);
  return unaff_EBX;
}
