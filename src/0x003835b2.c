/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4F0B3CB778E5DE3BD71A6933DC90301D190252D770DFF2D098B4F69F096EF7D8
 * Entry: 0x003835b2, Ghidra index: 13617, label: FUN_003835b2
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004a8fc0;
extern uint32_t DAT_004a8fc8;
int FUN_003835b2(void)

{
  undefined2 uVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  int in_EDX;
  uint *puVar5;
  uint uVar6;
  int local_c;
  
  local_c = 0;
  KeRaiseIrqlToDpcLevel();
  puVar2 = (uint *)FUN_0038359f();
  if (puVar2 == (uint *)0x0) {
    local_c = -0x7fffff00;
  }
  else {
    puVar5 = puVar2;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    puVar2[5] = (int)puVar2 - DAT_004a8fc0;
    *(undefined1 *)((int)puVar2 + 0x11) = *(undefined1 *)(in_EDX + 0x16);
    *(undefined1 *)((int)puVar2 + 0x13) = *(undefined1 *)(in_EDX + 0x17);
    uVar1 = FUN_00380eee(*(undefined2 *)(in_EDX + 0x1c),*(undefined1 *)((int)puVar2 + 0x11),
                         *(undefined1 *)(in_EDX + 0x1e));
    *(undefined2 *)((int)puVar2 + 0x22) = uVar1;
    *puVar2 = *puVar2 ^ ((uint)*(byte *)(in_EDX + 0x14) ^ *puVar2) & 0x7f;
    uVar3 = ((uint)*(byte *)(in_EDX + 0x15) << 7 ^ *puVar2) & 0x780 ^ *puVar2;
    *puVar2 = uVar3;
    if (*(char *)((int)puVar2 + 0x11) == '\0') {
      *puVar2 = uVar3 & 0xffffe7ff;
    }
    else {
      *puVar2 = ((((*(byte *)(in_EDX + 0x15) & 0x80) != 0) + 1) * 0x800 ^ uVar3) & 0x1800 ^ uVar3;
    }
    uVar3 = (*(byte *)(in_EDX + 0x1e) & 1 | 2) << 0xd | *puVar2 & 0xffff5fff;
    *puVar2 = uVar3;
    uVar3 = ((uint)*(ushort *)(in_EDX + 0x1c) << 0x10 ^ uVar3) & 0x7ff0000 ^ uVar3;
    *puVar2 = uVar3;
    puVar2[3] = 0;
    puVar2[2] = 0;
    puVar2[1] = 0;
    if (*(uint **)(in_EDX + 0x18) != (uint *)0x0) {
      uVar6 = 1 << ((byte)(uVar3 >> 7) & 0xf);
      if ((uVar3 & 0x1800) == 0x1000) {
        uVar6 = uVar6 << 0x10;
      }
      if ((**(uint **)(in_EDX + 0x18) & uVar6) != 0) {
        puVar2[2] = 2;
      }
    }
    if ((*(char *)((int)puVar2 + 0x11) == '\0') || (*(char *)((int)puVar2 + 0x11) == '\x02')) {
      FUN_00384a70();
    }
    else {
      local_c = FUN_00384b8a();
    }
    if (local_c < 0) {
      *(undefined4 *)(in_EDX + 0x10) = 0;
      puVar2[6] = (uint)DAT_004a8fc8;
      DAT_004a8fc8 = puVar2;
    }
    else {
      *(uint **)(in_EDX + 0x10) = puVar2;
    }
  }
  *(int *)(in_EDX + 4) = local_c;
  KfLowerIrql();
  return local_c;
}
