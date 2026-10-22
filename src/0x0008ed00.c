/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 33D45B10F006A210088099BDECAE6D465D034F71F10F359859C4BD41D842DA23
 * Entry: 0x0008ed00, Ghidra index: 1740, label: FUN_0008ed00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0008ed00(void)

{
  uint in_EAX;
  undefined4 *puVar1;
  int iVar2;
  undefined4 *in_ECX;
  undefined4 *puVar3;
  uint uVar4;
  int in_EDX;
  uint uVar5;
  
  uVar5 = *(uint *)(in_EDX + 0x18);
  if (uVar5 < 8) {
    puVar1 = (undefined4 *)(in_EDX + 4);
  }
  else {
    puVar1 = *(undefined4 **)(in_EDX + 4);
  }
  if (puVar1 <= in_ECX) {
    puVar1 = (undefined4 *)(in_EDX + 4);
    puVar3 = puVar1;
    if (7 < uVar5) {
      puVar3 = (undefined4 *)*puVar1;
    }
    if (in_ECX < (undefined4 *)((int)puVar3 + *(int *)(in_EDX + 0x14) * 2)) {
      if (7 < uVar5) {
        puVar1 = (undefined4 *)*puVar1;
      }
      FUN_0008f110((int)in_ECX - (int)puVar1 >> 1);
      return;
    }
  }
  if (-*(int *)(in_EDX + 0x14) - 1U <= in_EAX) {
    FUN_002f258a();
  }
  if (in_EAX != 0) {
    uVar5 = *(int *)(in_EDX + 0x14) + in_EAX;
    if (0x7ffffffe < uVar5) {
      FUN_002f258a();
    }
    if (*(uint *)(in_EDX + 0x18) < uVar5) {
      FUN_00087810(in_EDX,uVar5,*(undefined4 *)(in_EDX + 0x14));
    }
    else if (uVar5 == 0) {
      *(undefined4 *)(in_EDX + 0x14) = 0;
      if (*(uint *)(in_EDX + 0x18) < 8) {
        *(undefined2 *)(in_EDX + 4) = 0;
        return;
      }
      **(undefined2 **)(in_EDX + 4) = 0;
      return;
    }
    if (uVar5 != 0) {
      if (*(uint *)(in_EDX + 0x18) < 8) {
        iVar2 = in_EDX + 4;
      }
      else {
        iVar2 = *(int *)(in_EDX + 4);
      }
      puVar1 = (undefined4 *)(iVar2 + *(int *)(in_EDX + 0x14) * 2);
      for (uVar4 = (in_EAX & 0x7fffffff) >> 1; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar1 = *in_ECX;
        in_ECX = in_ECX + 1;
        puVar1 = puVar1 + 1;
      }
      for (uVar4 = in_EAX * 2 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar1 = *(undefined1 *)in_ECX;
        in_ECX = (undefined4 *)((int)in_ECX + 1);
        puVar1 = (undefined4 *)((int)puVar1 + 1);
      }
      *(uint *)(in_EDX + 0x14) = uVar5;
      if (7 < *(uint *)(in_EDX + 0x18)) {
        *(undefined2 *)(*(int *)(in_EDX + 4) + uVar5 * 2) = 0;
        return;
      }
      *(undefined2 *)(in_EDX + 4 + uVar5 * 2) = 0;
    }
  }
  return;
}
