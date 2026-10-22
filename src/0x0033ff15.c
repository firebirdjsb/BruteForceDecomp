/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5739EA4FE4ED41A1C7F5B6290C082477CD4D4B4880030946C84471DA3F496F8A
 * Entry: 0x0033ff15, Ghidra index: 12662, label: FUN_0033ff15
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0033ff15(uint param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined1 local_24 [16];
  undefined4 local_14;
  undefined4 local_10;
  undefined1 *local_c;
  int local_8;
  
  iVar1 = param_1;
  local_8 = 0;
  *(undefined4 *)(param_1 + 0x18 + *(int *)(param_1 + 0x14) * 4) = *(undefined4 *)(param_1 + 8);
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  iVar3 = FUN_0033fbee(param_1,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 4),6,&local_8)
  ;
  iVar2 = param_4;
  if (iVar3 == 0) {
    if (*(int *)(local_8 + 0xc) == 0x6c) {
      param_1 = 0;
      if (*(int *)(param_4 + 0x38) != 0) {
        local_c = local_24;
        local_14 = 0x17;
        local_10 = 0x10;
        puVar6 = (undefined4 *)(param_4 + 0x3c);
        do {
          FUN_0033f64f(iVar1,param_3,*puVar6,local_24);
          iVar3 = FUN_0033fc56(iVar1,local_8,&local_14,0x4b3,&param_2,*(undefined4 *)(iVar2 + 0xac))
          ;
          if (iVar3 == 0) {
            if (param_2 != 0x54) goto LAB_0033ffca;
            break;
          }
          param_1 = param_1 + 1;
          puVar6 = puVar6 + 1;
        } while (param_1 < *(uint *)(iVar2 + 0x38));
      }
      if (param_1 != *(uint *)(iVar2 + 0x38)) {
        iVar3 = 0;
        goto LAB_0033ffd3;
      }
    }
LAB_0033ffca:
    iVar3 = -0x3fffff93;
  }
LAB_0033ffd3:
  *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + -1;
  puVar6 = *(undefined4 **)(iVar1 + 0x18 + *(int *)(iVar1 + 0x14) * 4);
  uVar4 = *(int *)(iVar1 + 8) - (int)puVar6;
  *(undefined4 **)(iVar1 + 8) = puVar6;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined1 *)puVar6 = 0;
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  return iVar3;
}
