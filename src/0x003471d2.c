/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5EB08B86F6E2FDE31A3296C98EBE4D9A561B73ACB54B054C9BDA7A18149F76C4
 * Entry: 0x003471d2, Ghidra index: 12846, label: FUN_003471d2
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-matched declaration of FUN_0035418a; callback ABI and behavior remain
 * ABI_UNVERIFIED. This only resolves name lookup in the C11 draft. */
extern void FUN_0035418a(int param_1);
undefined4 * FUN_003471d2(int param_1,int param_2)

{
  byte bVar1;
  uint *puVar2;
  undefined4 *puVar3;
  int in_ECX;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint *local_8;
  
  uVar5 = (-(uint)(param_1 != 0) & 0x88) + 0x60;
  iVar4 = (-(uint)(param_1 != 0) & 0x29000000) + 0x3854454e;
  while ((ushort)*(byte *)(in_ECX + 10) <= *(ushort *)(in_ECX + 0xbd4)) {
    local_8 = (uint *)0x0;
    puVar2 = *(uint **)(in_ECX + 0xbd8U);
    puVar2 = (uint *)(-(uint)(puVar2 != (uint *)(in_ECX + 0xbd8U)) & (uint)puVar2);
    if (puVar2 == (uint *)0x0) break;
    do {
      if ((((puVar2[3] & 2) != 0) && ((puVar2[3] & 0x1000000) != 0)) &&
         ((local_8 == (uint *)0x0 || (puVar2[0x25] < local_8[0x25])))) {
        local_8 = puVar2;
      }
      puVar2 = (uint *)(-(uint)(*puVar2 != in_ECX + 0xbd8U) & *puVar2);
    } while (puVar2 != (uint *)0x0);
    if (local_8 == (uint *)0x0) break;
    FUN_00346cd5(local_8,1);
  }
  if (*(ushort *)(in_ECX + 0xbd4) < (ushort)*(byte *)(in_ECX + 10)) {
    if (param_2 == 0) {
      puVar3 = (undefined4 *)ExAllocatePoolWithTag(uVar5,iVar4);
      if (puVar3 != (undefined4 *)0x0) {
        puVar6 = puVar3;
        for (uVar5 = uVar5 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar6 = 0;
          puVar6 = puVar6 + 1;
        }
        for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
          *(undefined1 *)puVar6 = 0;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
        }
      }
    }
    else {
      puVar3 = (undefined4 *)FUN_0034c68a(uVar5,iVar4);
    }
    if (puVar3 != (undefined4 *)0x0) {
      puVar3[2] = 0x2b434f53;
      puVar3[3] = -(uint)(param_1 != 0) & 2 | (uint)(param_2 != 0);
      puVar3[0x16] = (uint)*(byte *)(in_ECX + 0xc) << 10;
      bVar1 = *(byte *)(in_ECX + 0xb);
      *(undefined1 *)(puVar3 + 4) = 0;
      puVar3[0x17] = (uint)bVar1 << 10;
      puVar6 = puVar3 + 9;
      puVar3[10] = puVar6;
      *puVar6 = puVar6;
      puVar6 = puVar3 + 0xd;
      puVar3[0xe] = puVar6;
      *puVar6 = puVar6;
      puVar6 = puVar3 + 6;
      puVar3[1] = puVar3;
      *puVar3 = puVar3;
      *(undefined1 *)((int)puVar3 + 0x12) = 4;
      puVar3[5] = 0;
      puVar3[7] = puVar6;
      *puVar6 = puVar6;
      if (param_1 != 0) {
        *(ushort *)((int)puVar3 + 0x82) = (ushort)*(byte *)(in_ECX + 0x32);
        puVar3[0x2f] = 0x200;
        puVar3[0x33] = 0x200;
        puVar3[0x2d] = 0xffff;
        puVar3[0x2e] = 0xffff;
        *(undefined2 *)(puVar3 + 0x20) = 0;
        puVar3[0x21] = 0;
        puVar3[0x35] = 0;
        iVar4 = (uint)*(byte *)(in_ECX + 0x34) * 5;
        puVar3[0x36] = iVar4;
        puVar3[0x37] = iVar4;
        puVar6 = puVar3 + 0x19;
        puVar3[0x1a] = puVar6;
        *puVar6 = puVar6;
        puVar3[0x1d] = 0xffffffff;
        puVar3[0x1b] = 0;
        puVar3[0x1e] = FUN_0035418a;
      }
      *(short *)(in_ECX + 0xbd4) = *(short *)(in_ECX + 0xbd4) + 1;
    }
  }
  else {
    puVar3 = (undefined4 *)0x0;
  }
  return puVar3;
}
