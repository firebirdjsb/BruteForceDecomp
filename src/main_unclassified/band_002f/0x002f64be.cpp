/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6787C4A235E7B13657C0CEC0623132747FE538EDF8E49D456BE1196357DE9B13
 * Entry: 0x002f64be, Ghidra index: 10915, label: FUN_002f64be
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4
FUN_002f64be(undefined2 *param_1,undefined2 *param_2,byte param_3,undefined4 param_4,
            undefined2 *param_5,uint param_6,uint param_7)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined2 local_10;
  
  puVar2 = param_2;
  iVar4 = (int)(param_7 - (int)param_5) / 0x1000;
  uVar8 = (int)param_2 + 0x57U & 0xfffffff0;
  if (param_1 == param_5) {
    uVar1 = *param_1;
  }
  else {
    uVar1 = 0;
  }
  iVar5 = uVar8 - (int)param_2;
  if (uVar8 + 0x10 < param_6) {
LAB_002f6542:
    bVar3 = param_3;
    iVar6 = (int)(param_7 - param_6) / 0x1000;
    puVar2[1] = uVar1;
    local_10 = (undefined2)(iVar5 >> 4);
    *puVar2 = local_10;
    *(undefined4 *)(puVar2 + 10) = param_4;
    *(undefined2 **)(puVar2 + 0xc) = param_1;
    *(undefined2 **)(puVar2 + 0x10) = param_5;
    *(undefined1 *)((int)puVar2 + 5) = 1;
    *(undefined2 **)(puVar2 + 0x16) = param_5 + iVar4 * 0x800;
    *(byte *)(puVar2 + 2) = param_3;
    *(undefined4 *)(puVar2 + 8) = 0xffeeffee;
    *(uint *)(puVar2 + 0x14) = uVar8;
    *(int *)(puVar2 + 0x12) = iVar4;
    *(int *)(puVar2 + 0x18) = iVar6;
    if (iVar6 != 0) {
      FUN_002f5ed2(puVar2,param_6,iVar6 << 0xc);
    }
    *(undefined2 **)(param_1 + (uint)bVar3 * 2 + 0x30) = puVar2;
    uVar1 = *puVar2;
    *(undefined1 *)(uVar8 + 5) = 0x10;
    *(uint *)(puVar2 + 0x20) = uVar8;
    *(undefined2 *)(uVar8 + 2) = uVar1;
    *(byte *)(uVar8 + 4) = bVar3;
    FUN_002f6395(param_1,uVar8,(int)(param_6 - uVar8) >> 4);
    uVar7 = 1;
  }
  else {
    if (uVar8 + 0x10 < param_7) {
      param_2 = (undefined2 *)((uVar8 - param_6) + 0x10);
      iVar6 = NtAllocateVirtualMemory(&param_6,0,&param_2,0x1000,4);
      if (-1 < iVar6) {
        param_6 = param_6 + (int)param_2;
        goto LAB_002f6542;
      }
    }
    uVar7 = 0;
  }
  return uVar7;
}
