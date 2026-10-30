/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B0086112A5CE67AF015677DD2DA3C945AF7FF5D9437AA219882202870CED1462
 * Entry: 0x00087af0, Ghidra index: 1625, label: FUN_00087af0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00087af0(void)

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
  if (uVar5 < 0x10) {
    puVar1 = (undefined4 *)(in_EDX + 4);
  }
  else {
    puVar1 = *(undefined4 **)(in_EDX + 4);
  }
  if (puVar1 <= in_ECX) {
    puVar1 = (undefined4 *)(in_EDX + 4);
    puVar3 = puVar1;
    if (0xf < uVar5) {
      puVar3 = (undefined4 *)*puVar1;
    }
    if (in_ECX < (undefined4 *)(*(int *)(in_EDX + 0x14) + (int)puVar3)) {
      if (0xf < uVar5) {
        puVar1 = (undefined4 *)*puVar1;
      }
      FUN_000784c0((int)in_ECX - (int)puVar1);
      return;
    }
  }
  if (-*(int *)(in_EDX + 0x14) - 1U <= in_EAX) {
    FUN_002f258a();
  }
  if (in_EAX != 0) {
    uVar5 = *(int *)(in_EDX + 0x14) + in_EAX;
    if (uVar5 == 0xffffffff) {
      FUN_002f258a();
    }
    if (*(uint *)(in_EDX + 0x18) < uVar5) {
      FUN_0001f730(uVar5,*(undefined4 *)(in_EDX + 0x14));
    }
    else if (uVar5 == 0) {
      *(undefined4 *)(in_EDX + 0x14) = 0;
      if (*(uint *)(in_EDX + 0x18) < 0x10) {
        *(undefined1 *)(in_EDX + 4) = 0;
        return;
      }
      **(undefined1 **)(in_EDX + 4) = 0;
      return;
    }
    if (uVar5 != 0) {
      if (*(uint *)(in_EDX + 0x18) < 0x10) {
        iVar2 = in_EDX + 4;
      }
      else {
        iVar2 = *(int *)(in_EDX + 4);
      }
      puVar1 = (undefined4 *)(*(int *)(in_EDX + 0x14) + iVar2);
      for (uVar4 = in_EAX >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar1 = *in_ECX;
        in_ECX = in_ECX + 1;
        puVar1 = puVar1 + 1;
      }
      for (uVar4 = in_EAX & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar1 = *(undefined1 *)in_ECX;
        in_ECX = (undefined4 *)((int)in_ECX + 1);
        puVar1 = (undefined4 *)((int)puVar1 + 1);
      }
      *(uint *)(in_EDX + 0x14) = uVar5;
      if (0xf < *(uint *)(in_EDX + 0x18)) {
        *(undefined1 *)(*(int *)(in_EDX + 4) + uVar5) = 0;
        return;
      }
      *(undefined1 *)(in_EDX + 4 + uVar5) = 0;
    }
  }
  return;
}
