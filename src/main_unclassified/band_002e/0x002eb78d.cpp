/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B44B9A895BF7471244FFAE783CB42B0FB067B703DA27FD530885A6E741A25F05
 * Entry: 0x002eb78d, Ghidra index: 10627, label: FUN_002eb78d
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_002eb78d(undefined4 *param_1,uint param_2,uint param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint local_c;
  uint local_8;
  
  uVar5 = param_2 * param_3;
  if (uVar5 == 0) {
    param_3 = 0;
  }
  else {
    local_8 = uVar5;
    if ((*(ushort *)(param_4 + 3) & 0x10c) == 0) {
      local_c = 0x1000;
    }
    else {
      local_c = param_4[6];
    }
    do {
      if (((*(ushort *)(param_4 + 3) & 0x10c) == 0) || (uVar1 = param_4[1], uVar1 == 0)) {
        if (local_8 < local_c) {
          iVar3 = __filbuf(param_4);
          if (iVar3 == -1) goto LAB_002eb874;
          *(char *)param_1 = (char)iVar3;
          local_c = param_4[6];
          iVar3 = -1;
          param_1 = (undefined4 *)((int)param_1 + 1);
        }
        else {
          uVar1 = local_8;
          if (local_c != 0) {
            uVar1 = local_8 - local_8 % local_c;
          }
          iVar2 = FUN_002ef6db(param_4[4],param_1,uVar1);
          if (iVar2 == 0) {
            param_4[3] = param_4[3] | 0x10;
LAB_002eb874:
            return (uVar5 - local_8) / param_2;
          }
          if (iVar2 == -1) {
            param_4[3] = param_4[3] | 0x20;
            goto LAB_002eb874;
          }
          iVar3 = -iVar2;
          param_1 = (undefined4 *)((int)param_1 + iVar2);
        }
      }
      else {
        if (local_8 < uVar1) {
          uVar1 = local_8;
        }
        iVar3 = -uVar1;
        puVar6 = (undefined4 *)*param_4;
        puVar7 = param_1;
        for (uVar4 = uVar1 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
        for (uVar4 = uVar1 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
          puVar7 = (undefined4 *)((int)puVar7 + 1);
        }
        param_4[1] = param_4[1] - uVar1;
        *param_4 = *param_4 + uVar1;
        param_1 = (undefined4 *)((int)param_1 + uVar1);
      }
      local_8 = local_8 + iVar3;
    } while (local_8 != 0);
  }
  return param_3;
}
