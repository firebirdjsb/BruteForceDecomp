/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B5A9D74E0E4E197537032AB0D52C0423126988C07E5ACF748D506AE4FD0B17C0
 * Entry: 0x0034018d, Ghidra index: 12665, label: FUN_0034018d
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0034018d(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *local_10;
  undefined4 *local_c;
  undefined4 local_8;
  
  iVar1 = (int)param_1;
  puVar7 = *(undefined4 **)((int)param_1 + 8);
  local_8 = 0;
  *(undefined4 **)((int)param_1 + 8) = puVar7 + 4;
  if (*(undefined4 **)((int)param_1 + 4) < puVar7 + 4) {
    *(undefined4 **)((int)param_1 + 8) = puVar7;
    param_1 = (undefined4 *)0x0;
    puVar7 = param_1;
  }
  param_1 = puVar7;
  if (param_1 != (undefined4 *)0x0) {
    *(undefined4 *)(iVar1 + 0x18 + *(int *)(iVar1 + 0x14) * 4) = *(undefined4 *)(iVar1 + 8);
    *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + 1;
    local_c = (undefined4 *)0x0;
    iVar2 = FUN_0033fbee(iVar1,param_2 + 0x168,*(undefined4 *)(param_2 + 0x164),0x1d,&local_c);
    puVar7 = (undefined4 *)&stack0xffffffe4;
    if (iVar2 == 0) {
      local_10 = *(undefined4 **)(iVar1 + 8);
      *(undefined4 **)(iVar1 + 8) = local_10 + 0xc;
      if (*(undefined4 **)(iVar1 + 4) < local_10 + 0xc) {
        *(undefined4 **)(iVar1 + 8) = local_10;
        local_10 = (undefined4 *)0x0;
      }
      if (local_10 != (undefined4 *)0x0) {
        puVar8 = local_c;
        puVar9 = local_10;
        for (iVar2 = 0xb; puVar9 = puVar9 + 1, iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar9 = *puVar8;
          puVar8 = puVar8 + 1;
        }
        *local_10 = 0;
        iVar2 = FUN_0033fa74(iVar1,&local_10,0x29,param_1 + 2,param_1 + 3);
        if (iVar2 == 0) {
          uVar5 = param_1[2];
          if (*(uint *)(iVar1 + 0x10) < uVar5) {
            FUN_002ebea0();
          }
          else {
            puVar7 = (undefined4 *)0x0;
          }
          if (puVar7 == (undefined4 *)0x0) {
            puVar7 = *(undefined4 **)(iVar1 + 0xc);
          }
          puVar9 = (undefined4 *)param_1[3];
          puVar8 = puVar7;
          for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
            *puVar8 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar8 = puVar8 + 1;
          }
          for (uVar4 = uVar5 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
            *(undefined1 *)puVar8 = *(undefined1 *)puVar9;
            puVar9 = (undefined4 *)((int)puVar9 + 1);
            puVar8 = (undefined4 *)((int)puVar8 + 1);
          }
          *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + -1;
          puVar9 = *(undefined4 **)(iVar1 + 0x18 + *(int *)(iVar1 + 0x14) * 4);
          uVar6 = *(int *)(iVar1 + 8) - (int)puVar9;
          *(undefined4 **)(iVar1 + 8) = puVar9;
          for (uVar4 = uVar6 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
            *puVar9 = 0;
            puVar9 = puVar9 + 1;
          }
          for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(undefined1 *)puVar9 = 0;
            puVar9 = (undefined4 *)((int)puVar9 + 1);
          }
          if (puVar7 != (undefined4 *)0x0) {
            puVar9 = *(undefined4 **)(iVar1 + 8);
            puVar3 = (undefined1 *)((uVar5 + 3 & 0xfffffffc) + (int)puVar9);
            *(undefined1 **)(iVar1 + 8) = puVar3;
            if (*(undefined1 **)(iVar1 + 4) < puVar3) {
              *(undefined4 **)(iVar1 + 8) = puVar9;
              puVar9 = (undefined4 *)0x0;
            }
            param_1[3] = puVar9;
            for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
              *puVar9 = *puVar7;
              puVar7 = puVar7 + 1;
              puVar9 = puVar9 + 1;
            }
            for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
              *(undefined1 *)puVar9 = *(undefined1 *)puVar7;
              puVar7 = (undefined4 *)((int)puVar7 + 1);
              puVar9 = (undefined4 *)((int)puVar9 + 1);
            }
          }
          param_1[1] = 0x82;
          *param_1 = *param_3;
          *param_3 = param_1;
          return local_8;
        }
      }
    }
    *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + -1;
    puVar7 = *(undefined4 **)(iVar1 + 0x18 + *(int *)(iVar1 + 0x14) * 4);
    uVar4 = *(int *)(iVar1 + 8) - (int)puVar7;
    *(undefined4 **)(iVar1 + 8) = puVar7;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar7 = 0;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
  }
  return 0xc000009a;
}
