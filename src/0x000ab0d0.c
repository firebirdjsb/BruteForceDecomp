/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 07A423B0FF6CA60B4F2B382987209872ED51B9F1772FA153BF8CEDFF0BE30CEF
 * Entry: 0x000ab0d0, Ghidra index: 2040, label: FUN_000ab0d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000ab0d0(uint param_1,int param_2,uint param_3)

{
  uint in_EAX;
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int unaff_EBX;
  undefined4 *puVar5;
  
  if ((*(uint *)(unaff_EBX + 0x14) < param_1) || (*(uint *)(param_2 + 0x14) < param_3)) {
    FUN_002f254a();
  }
  uVar1 = *(int *)(param_2 + 0x14) - param_3;
  if (uVar1 < in_EAX) {
    in_EAX = uVar1;
  }
  if (-*(int *)(unaff_EBX + 0x14) - 1U <= in_EAX) {
    FUN_002f258a();
  }
  if (in_EAX != 0) {
    uVar1 = *(int *)(unaff_EBX + 0x14) + in_EAX;
    if (0x7ffffffe < uVar1) {
      FUN_002f258a();
    }
    if (*(uint *)(unaff_EBX + 0x18) < uVar1) {
      FUN_00087810(unaff_EBX,uVar1,*(undefined4 *)(unaff_EBX + 0x14));
    }
    else if (uVar1 == 0) {
      *(undefined4 *)(unaff_EBX + 0x14) = 0;
      if (7 < *(uint *)(unaff_EBX + 0x18)) {
        **(undefined2 **)(unaff_EBX + 4) = 0;
        return;
      }
      *(undefined2 *)(unaff_EBX + 4) = 0;
      return;
    }
    if (uVar1 != 0) {
      puVar5 = (undefined4 *)(unaff_EBX + 4);
      puVar2 = puVar5;
      puVar3 = puVar5;
      if (7 < *(uint *)(unaff_EBX + 0x18)) {
        puVar2 = (undefined4 *)*puVar5;
        puVar3 = (undefined4 *)*puVar5;
      }
      _memmove((void *)((int)puVar2 + (param_1 + in_EAX) * 2),(void *)((int)puVar3 + param_1 * 2),
               (*(int *)(unaff_EBX + 0x14) - param_1) * 2);
      if (unaff_EBX == param_2) {
        if (param_1 < param_3) {
          param_3 = param_3 + in_EAX;
        }
        puVar2 = puVar5;
        puVar3 = puVar5;
        if (7 < *(uint *)(unaff_EBX + 0x18)) {
          puVar2 = (undefined4 *)*puVar5;
          puVar3 = (undefined4 *)*puVar5;
        }
        _memmove((void *)((int)puVar2 + param_1 * 2),(void *)((int)puVar3 + param_3 * 2),in_EAX * 2)
        ;
      }
      else {
        if (*(uint *)(param_2 + 0x18) < 8) {
          param_2 = param_2 + 4;
        }
        else {
          param_2 = *(int *)(param_2 + 4);
        }
        puVar3 = puVar5;
        if (7 < *(uint *)(unaff_EBX + 0x18)) {
          puVar3 = (undefined4 *)*puVar5;
        }
        puVar2 = (undefined4 *)(param_2 + param_3 * 2);
        puVar3 = (undefined4 *)((int)puVar3 + param_1 * 2);
        for (uVar4 = (in_EAX & 0x7fffffff) >> 1; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar3 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar3 = puVar3 + 1;
        }
        for (uVar4 = in_EAX * 2 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined1 *)puVar3 = *(undefined1 *)puVar2;
          puVar2 = (undefined4 *)((int)puVar2 + 1);
          puVar3 = (undefined4 *)((int)puVar3 + 1);
        }
      }
      *(uint *)(unaff_EBX + 0x14) = uVar1;
      if (7 < *(uint *)(unaff_EBX + 0x18)) {
        puVar5 = (undefined4 *)*puVar5;
      }
      *(undefined2 *)((int)puVar5 + uVar1 * 2) = 0;
    }
  }
  return;
}
