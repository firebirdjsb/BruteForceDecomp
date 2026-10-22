/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 975801AF3B6C61CA5F87FE0CE12E29609BCFCCD91D42F533CDBACAB762DAFB0E
 * Entry: 0x003533cf, Ghidra index: 13084, label: FUN_003533cf
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_003533cf(int param_1,byte param_2,undefined4 *param_3,uint param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  iVar2 = *(int *)(param_1 + 0x20);
  uVar4 = *(uint *)(iVar2 + 0x14);
  if (param_4 < *(uint *)(iVar2 + 0x14)) {
    uVar4 = param_4;
  }
  puVar5 = *(undefined4 **)(iVar2 + 0x10);
  for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar5 = *param_3;
    param_3 = param_3 + 1;
    puVar5 = puVar5 + 1;
  }
  for (uVar3 = uVar4 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined1 *)puVar5 = *(undefined1 *)param_3;
    param_3 = (undefined4 *)((int)param_3 + 1);
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  }
  piVar1 = (int *)(*(int *)(iVar2 + 4) + 8);
  *piVar1 = *piVar1 + uVar4;
  *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + uVar4;
  piVar1 = (int *)(iVar2 + 0x14);
  *piVar1 = *piVar1 - uVar4;
  if ((*piVar1 == 0) || ((param_2 & 8 | 0x20) != 0)) {
    FUN_00345e88(param_1,iVar2,0);
  }
  FUN_00353181(param_1,uVar4);
  return uVar4;
}
