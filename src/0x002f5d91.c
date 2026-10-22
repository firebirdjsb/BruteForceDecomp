/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5A16A861E609A7F5A505E7F661F495E44EE809DE5A300312451D8645202F78F9
 * Entry: 0x002f5d91, Ghidra index: 10908, label: FUN_002f5d91
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int * FUN_002f5d91(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 *local_10;
  undefined4 local_c;
  int local_8;
  
  iVar1 = (int)param_1;
  piVar5 = (int *)(*(int *)((int)param_1 + 0x18) + 0x4c);
  if (*piVar5 == 0) {
    param_1 = *(undefined4 **)(*(int *)((int)param_1 + 0x18) + 0x48);
    if ((param_1 == (undefined4 *)0x0) || (param_1[2] == param_1[1])) {
      local_c = 0x10000;
      param_1 = (undefined4 *)0x0;
      iVar2 = NtAllocateVirtualMemory(&param_1,0,&local_c,0x2000,4);
      if (-1 < iVar2) {
        local_8 = 0x1000;
        iVar2 = NtAllocateVirtualMemory(&param_1,0,&local_8,0x1000,4);
        if (-1 < iVar2) {
          *param_1 = *(undefined4 *)(*(int *)(iVar1 + 0x18) + 0x48);
          *(undefined4 **)(*(int *)(iVar1 + 0x18) + 0x48) = param_1;
          param_1[1] = local_c;
          param_1[2] = local_8;
          local_10 = param_1 + 4;
          goto LAB_002f5e81;
        }
        NtFreeVirtualMemory(&param_1,&local_c,0x8000);
      }
    }
    else {
      local_8 = 0x1000;
      local_10 = (undefined4 *)(param_1[2] + (int)param_1);
      iVar2 = NtAllocateVirtualMemory(&local_10,0,&local_8,0x1000,4);
      if (-1 < iVar2) {
        param_1[2] = param_1[2] + local_8;
LAB_002f5e81:
        iVar2 = param_1[2];
        puVar4 = (undefined4 *)(*(int *)(iVar1 + 0x18) + 0x4c);
        for (; local_10 < (undefined4 *)(iVar2 + (int)param_1); local_10 = local_10 + 4) {
          *puVar4 = local_10;
          puVar4 = local_10;
        }
        *puVar4 = 0;
        piVar5 = (int *)(*(int *)(iVar1 + 0x18) + 0x4c);
        goto LAB_002f5ea4;
      }
    }
    piVar3 = (int *)0x0;
  }
  else {
LAB_002f5ea4:
    piVar3 = (int *)*piVar5;
    *piVar5 = *piVar3;
  }
  return piVar3;
}
