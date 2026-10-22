/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C552ADA372D0FCD079D2FFCBA7E0F499D50AA663C08514C709BB2D70F744394D
 * Entry: 0x000785b0, Ghidra index: 1428, label: FUN_000785b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000785b0(uint param_1,undefined4 *param_2,uint param_3)

{
  uint in_EAX;
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int unaff_EBX;
  undefined4 *puVar5;
  size_t __n;
  undefined4 *puStack_4;
  
  uVar3 = *(uint *)(unaff_EBX + 0x18);
  if (uVar3 < 0x10) {
    puVar1 = (undefined4 *)(unaff_EBX + 4);
  }
  else {
    puVar1 = *(undefined4 **)(unaff_EBX + 4);
  }
  if (puVar1 <= param_2) {
    puVar1 = (undefined4 *)(unaff_EBX + 4);
    puVar5 = puVar1;
    if (0xf < uVar3) {
      puVar5 = (undefined4 *)*puVar1;
    }
    if (param_2 < (undefined4 *)(*(int *)(unaff_EBX + 0x14) + (int)puVar5)) {
      if (0xf < uVar3) {
        puVar1 = (undefined4 *)*puVar1;
      }
      FUN_00078780(unaff_EBX,unaff_EBX,(int)param_2 - (int)puVar1,param_3);
      return;
    }
  }
  if (*(uint *)(unaff_EBX + 0x14) < param_1) {
    FUN_002f254a();
  }
  uVar3 = *(int *)(unaff_EBX + 0x14) - param_1;
  if (uVar3 < in_EAX) {
    in_EAX = uVar3;
  }
  if (-param_3 - 1 <= *(int *)(unaff_EBX + 0x14) - in_EAX) {
    FUN_002f258a();
  }
  __n = (*(int *)(unaff_EBX + 0x14) - param_1) - in_EAX;
  if (param_3 < in_EAX) {
    puVar1 = (undefined4 *)(unaff_EBX + 4);
    puStack_4 = puVar1;
    if (0xf < *(uint *)(unaff_EBX + 0x18)) {
      puStack_4 = (undefined4 *)*puVar1;
    }
    if (0xf < *(uint *)(unaff_EBX + 0x18)) {
      puVar1 = (undefined4 *)*puVar1;
    }
    _memmove((void *)((int)puVar1 + param_3 + param_1),(void *)((int)puStack_4 + in_EAX + param_1),
             __n);
  }
  if ((param_3 != 0) || (in_EAX != 0)) {
    uVar3 = (param_3 - in_EAX) + *(int *)(unaff_EBX + 0x14);
    if (uVar3 == 0xffffffff) {
      FUN_002f258a();
    }
    if (*(uint *)(unaff_EBX + 0x18) < uVar3) {
      FUN_0001f730(uVar3,*(undefined4 *)(unaff_EBX + 0x14));
    }
    else if (uVar3 == 0) {
      *(undefined4 *)(unaff_EBX + 0x14) = 0;
      if (0xf < *(uint *)(unaff_EBX + 0x18)) {
        **(undefined1 **)(unaff_EBX + 4) = 0;
        return;
      }
      *(undefined1 *)(unaff_EBX + 4) = 0;
      return;
    }
    if (uVar3 != 0) {
      if (in_EAX < param_3) {
        puVar1 = (undefined4 *)(unaff_EBX + 4);
        puVar5 = puVar1;
        if (0xf < *(uint *)(unaff_EBX + 0x18)) {
          puVar5 = (undefined4 *)*puVar1;
          puVar1 = (undefined4 *)*puVar1;
        }
        _memmove((void *)((int)puVar1 + param_3 + param_1),(void *)((int)puVar5 + in_EAX + param_1),
                 __n);
      }
      if (*(uint *)(unaff_EBX + 0x18) < 0x10) {
        iVar2 = unaff_EBX + 4;
      }
      else {
        iVar2 = *(int *)(unaff_EBX + 4);
      }
      puVar1 = (undefined4 *)(param_1 + iVar2);
      for (uVar4 = param_3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar1 = *param_2;
        param_2 = param_2 + 1;
        puVar1 = puVar1 + 1;
      }
      for (param_3 = param_3 & 3; param_3 != 0; param_3 = param_3 - 1) {
        *(undefined1 *)puVar1 = *(undefined1 *)param_2;
        param_2 = (undefined4 *)((int)param_2 + 1);
        puVar1 = (undefined4 *)((int)puVar1 + 1);
      }
      *(uint *)(unaff_EBX + 0x14) = uVar3;
      if (0xf < *(uint *)(unaff_EBX + 0x18)) {
        *(undefined1 *)(*(int *)(unaff_EBX + 4) + uVar3) = 0;
        return;
      }
      *(undefined1 *)(unaff_EBX + 4 + uVar3) = 0;
    }
  }
  return;
}
