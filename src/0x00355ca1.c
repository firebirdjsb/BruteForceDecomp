/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 349A1AF9009544FE2A2A7F6FD317752228EF88F6AAC7D2D708C634D1A2E45642
 * Entry: 0x00355ca1, Ghidra index: 13132, label: FUN_00355ca1
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint * FUN_00355ca1(uint param_1,int param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  int in_ECX;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  
  if (**(uint **)(in_ECX + 0x298) == param_1) {
    return *(uint **)(in_ECX + 0x298);
  }
  puVar2 = (uint *)(in_ECX + 0x29c + (param_1 % 0x3b) * 0x18);
  puVar6 = puVar2;
  if (*puVar2 != param_1) {
    puVar1 = puVar2 + 0x1e;
    puVar5 = puVar2 + 6;
    for (puVar6 = puVar5; puVar6 < puVar1; puVar6 = puVar6 + 6) {
      if (*puVar6 == param_1) goto LAB_00355d7c;
    }
    if (param_2 == 0) {
      return (uint *)0x0;
    }
    puVar6 = puVar2;
    puVar4 = puVar5;
    if (*(short *)((int)puVar2 + 0x16) != 0) {
      for (; (puVar4 < puVar1 && (*(short *)((int)puVar4 + 0x16) != 0)); puVar4 = puVar4 + 6) {
      }
      puVar6 = puVar4;
      if (puVar4 == puVar1) {
        for (; (puVar5 < puVar1 && (2 < *(ushort *)((int)puVar5 + 0x16))); puVar5 = puVar5 + 6) {
        }
        puVar6 = puVar5;
        if (puVar5 == puVar1) {
          return (uint *)0x0;
        }
      }
    }
    *puVar6 = param_1;
    if (param_2 == 2) {
      *(ushort *)((int)puVar6 + 0x16) = *(byte *)(in_ECX + 0x11) + 3;
      uVar3 = FUN_0034c3bf(in_ECX + 0x89c,(uint)*(byte *)(in_ECX + 0x12) * 5);
      puVar6[1] = uVar3;
      FUN_00355bea(0x100,*(undefined4 *)(in_ECX + 0x268),param_1,0);
    }
    else {
      *(undefined2 *)((int)puVar6 + 0x16) = 3;
    }
  }
LAB_00355d7c:
  *(uint **)(in_ECX + 0x298) = puVar6;
  return puVar6;
}
