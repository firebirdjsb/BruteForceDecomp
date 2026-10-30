/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E9D060F709CD1742B3DE06FC4C44325FF0B25B823629F0AD3D1057385C38B984
 * Entry: 0x003557ac, Ghidra index: 13122, label: FUN_003557ac
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_003557ac(int param_1,int param_2,undefined2 param_3,undefined4 *param_4,uint param_5,
                 undefined4 param_6,int param_7,int param_8)

{
  /* Ghidra _param_ alias is a draft-only temporary. Original x86 stack-slot
   * aliasing and incoming register/stack ABI remain UNVERIFIED. */
  uint bf_scratch_copy_size;
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  uint local_20;
  undefined4 *local_1c;
  uint local_18;
  undefined4 *local_14;
  int local_10;
  undefined4 local_c;
  
  if (param_8 == 0) {
    local_1c = param_4;
    local_20 = param_5;
    param_4 = (undefined4 *)0x1;
    uVar5 = param_5;
  }
  else {
    local_1c = &param_5;
    local_14 = param_4;
    local_c = param_6;
    local_18 = param_5;
    local_20 = 2;
    local_10 = param_7;
    param_4 = (undefined4 *)0x3;
    uVar5 = param_5 + 2 + param_7;
  }
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 == 0) {
    if (*(uint *)(param_1 + 0x2c) < *(uint *)(param_1 + 0x5c)) {
      piVar4 = (int *)FUN_0034c58a(uVar5 + 0x14,0x3954454e);
      if (piVar4 != (int *)0x0) {
        FUN_00345408(&local_20,param_4,0,piVar4 + 5,uVar5);
        piVar4[3] = param_2;
        *(undefined2 *)(piVar4 + 4) = param_3;
        piVar4[2] = uVar5;
        *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + uVar5;
        puVar2 = *(undefined4 **)(param_1 + 0x28);
        *piVar4 = param_1 + 0x24;
        piVar4[1] = (int)puVar2;
        *puVar2 = piVar4;
        *(int **)(param_1 + 0x28) = piVar4;
        if ((*(byte *)(param_1 + 0xd) & 8) != 0) {
          KeSetEvent(param_1 + 0x10,1,0);
        }
      }
    }
  }
  else {
    param_8 = *(int *)(iVar1 + 4);
    if (*(int *)(iVar1 + 0x18) != 0) {
      *(int *)(*(int *)(iVar1 + 0x18) + 4) = param_2;
      *(undefined2 *)(*(int *)(iVar1 + 0x18) + 2) = param_3;
    }
    bf_scratch_copy_size = uVar5;
    if (*(uint *)(iVar1 + 0x14) <= uVar5) {
      bf_scratch_copy_size = *(uint *)(iVar1 + 0x14);
    }
    FUN_00345408(&local_20,param_4,0,*(undefined4 *)(iVar1 + 0x10),bf_scratch_copy_size);
    *(uint *)(param_8 + 8) = bf_scratch_copy_size;
    if (bf_scratch_copy_size < uVar5) {
      *(undefined4 *)(param_8 + 4) = 0x8000;
      uVar3 = 0x80072738;
    }
    else {
      *(undefined4 *)(param_8 + 4) = 0;
      uVar3 = 0;
    }
    FUN_00345e88(param_1,iVar1,uVar3);
  }
  return;
}
