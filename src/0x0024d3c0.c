/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EC69B7BFB78E8C1492E44985D53F398F7A5C3F471C924078C2E62500F501C861
 * Entry: 0x0024d3c0, Ghidra index: 8298, label: FUN_0024d3c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0024d3c0(int *param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uVar2 = (**(code **)(*param_1 + 0x7c))(param_1,param_2);
  if (param_3 < uVar2) {
    piVar3 = (int *)FUN_00279c40(&stack0xffffffd8);
    iVar1 = **(int **)(*(int *)(*piVar3 + 0x10) + 0x90);
    uVar2 = 0;
    if (param_3 != 0) {
      uStack_20 = param_2;
      uStack_1c = 0;
      do {
        piVar3 = (int *)FUN_00279c40(&uStack_20);
        if (iVar1 == *(int *)(*(int *)(*piVar3 + 0x10) + 0x90)) break;
        uVar2 = uVar2 + 1;
        FUN_00270df0();
      } while (uVar2 < param_3);
    }
    uStack_20 = param_2;
    uStack_1c = 0;
    piVar3 = (int *)FUN_00279c40(&uStack_20);
    if (iVar1 != *(int *)(*(int *)(*piVar3 + 0x10) + 0x90)) {
      if (0xf < *(uint *)(iVar1 + 0x24)) {
        return *(int *)(iVar1 + 0x10);
      }
      return iVar1 + 0x10;
    }
  }
  return 0;
}
