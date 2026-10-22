/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FC6C3AC47B7739DB2FB1AFBCC41DF5DD5D69F5052F8E1FF80CFCD5D7BDEE7ABE
 * Entry: 0x001e2b00, Ghidra index: 6755, label: FUN_001e2b00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001e2b00(uint *param_1,uint param_2,uint param_3)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  uint local_8;
  uint local_4;
  
  local_4 = ((int)(param_3 - param_2) / 0x38) * 0x1c + param_2;
  FUN_001e2f80(param_2,local_4,param_3 - 0x1c);
  uVar3 = local_4 + 0x1c;
  if (param_2 < local_4) {
    puVar5 = (undefined4 *)(local_4 - 8);
    do {
      if ((uint)puVar5[8] < 0x10) {
        puVar2 = puVar5 + 3;
      }
      else {
        puVar2 = (undefined4 *)puVar5[3];
      }
      iVar1 = FUN_000e0b20(0,puVar2,puVar5[7]);
      if (iVar1 < 0) break;
      if ((uint)puVar5[1] < 0x10) {
        puVar2 = puVar5 + -4;
      }
      else {
        puVar2 = (undefined4 *)puVar5[-4];
      }
      iVar1 = FUN_000e0b20(0,puVar2,*puVar5);
      if (iVar1 < 0) break;
      local_4 = local_4 - 0x1c;
      puVar5 = puVar5 + -7;
    } while (param_2 < local_4);
  }
  uVar4 = uVar3;
  local_8 = uVar3;
  uVar7 = local_4;
  if (uVar3 < param_3) {
    while( true ) {
      if (*(uint *)(local_4 + 0x18) < 0x10) {
        iVar1 = local_4 + 4;
      }
      else {
        iVar1 = *(int *)(local_4 + 4);
      }
      iVar1 = FUN_000e0b20(0,iVar1,*(undefined4 *)(local_4 + 0x14));
      uVar4 = uVar3;
      local_8 = uVar3;
      if (iVar1 < 0) break;
      if (*(uint *)(uVar3 + 0x18) < 0x10) {
        iVar1 = uVar3 + 4;
      }
      else {
        iVar1 = *(int *)(uVar3 + 4);
      }
      iVar1 = FUN_000e0b20(0,iVar1,*(undefined4 *)(uVar3 + 0x14));
      if ((iVar1 < 0) || (uVar3 = uVar3 + 0x1c, uVar4 = uVar3, local_8 = uVar3, param_3 <= uVar3))
      break;
    }
  }
joined_r0x001e2c24:
  do {
    if (param_3 <= uVar3) {
LAB_001e2c96:
      uVar6 = uVar4;
      if (param_2 < local_4) {
        puVar5 = (undefined4 *)(local_4 - 8);
        do {
          if (*(uint *)(uVar7 + 0x18) < 0x10) {
            iVar1 = uVar7 + 4;
          }
          else {
            iVar1 = *(int *)(uVar7 + 4);
          }
          iVar1 = FUN_000e0b20(0,iVar1,*(undefined4 *)(uVar7 + 0x14));
          uVar6 = local_8;
          if (-1 < iVar1) {
            if ((uint)puVar5[1] < 0x10) {
              puVar2 = puVar5 + -4;
            }
            else {
              puVar2 = (undefined4 *)puVar5[-4];
            }
            iVar1 = FUN_000e0b20(0,puVar2,*puVar5);
            if (iVar1 < 0) break;
            uVar7 = uVar7 - 0x1c;
            FUN_001e3140();
          }
          local_4 = local_4 - 0x1c;
          puVar5 = puVar5 + -7;
        } while (param_2 < local_4);
      }
      if (local_4 == param_2) {
        if (uVar3 == param_3) {
          *param_1 = uVar7;
          param_1[1] = uVar6;
          return;
        }
        if (uVar6 != uVar3) {
          FUN_001e3140();
        }
        uVar3 = uVar3 + 0x1c;
        FUN_001e3140();
        uVar4 = uVar6 + 0x1c;
        local_8 = uVar6 + 0x1c;
        uVar7 = uVar7 + 0x1c;
      }
      else {
        local_4 = local_4 - 0x1c;
        if (uVar3 == param_3) {
          if (local_4 != uVar7 - 0x1c) {
            FUN_001e3140();
          }
          FUN_001e3140();
          uVar4 = uVar6 - 0x1c;
          local_8 = uVar6 - 0x1c;
          uVar7 = uVar7 - 0x1c;
        }
        else {
          uVar3 = uVar3 + 0x1c;
          FUN_001e3140();
          uVar4 = uVar6;
        }
      }
      goto joined_r0x001e2c24;
    }
    if (*(uint *)(uVar3 + 0x18) < 0x10) {
      iVar1 = uVar3 + 4;
    }
    else {
      iVar1 = *(int *)(uVar3 + 4);
    }
    iVar1 = FUN_000e0b20(0,iVar1,*(undefined4 *)(uVar3 + 0x14));
    if (-1 < iVar1) {
      if (*(uint *)(uVar7 + 0x18) < 0x10) {
        iVar1 = uVar7 + 4;
      }
      else {
        iVar1 = *(int *)(uVar7 + 4);
      }
      iVar1 = FUN_000e0b20(0,iVar1,*(undefined4 *)(uVar7 + 0x14));
      local_8 = uVar4;
      if (iVar1 < 0) goto LAB_001e2c96;
      uVar4 = uVar4 + 0x1c;
      FUN_001e3140();
    }
    uVar3 = uVar3 + 0x1c;
    local_8 = uVar4;
  } while( true );
}
