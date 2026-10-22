/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 08F37FCCE501E7017AB1D73E6E11C6B316EA7A63E68FA9F2148E5E1E3DF2105A
 * Entry: 0x003856db, Ghidra index: 13674, label: FUN_003856db
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004a8fc0;
extern uint32_t DAT_004a8fe8;
extern uint32_t DAT_004a8fec;
int FUN_003856db(void)

{
  byte *pbVar1;
  uint uVar2;
  undefined2 uVar3;
  undefined4 *puVar4;
  byte bVar5;
  uint uVar6;
  int in_EDX;
  uint *puVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  byte local_5;
  
  uVar2 = DAT_004a8fec;
  KeRaiseIrqlToDpcLevel();
  puVar4 = (undefined4 *)FUN_003856c9();
  if (puVar4 == (undefined4 *)0x0) {
    iVar8 = -0x7fffff00;
  }
  else {
    puVar9 = puVar4;
    for (uVar6 = uVar2 * 0x40 + 0x30 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
    }
    for (iVar8 = 0; iVar8 != 0; iVar8 = iVar8 + -1) {
      *(undefined1 *)puVar9 = 0;
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
    puVar7 = puVar4 + uVar2 * 0x10;
    puVar7[0xb] = (uint)puVar4;
    uVar6 = (int)puVar7 - DAT_004a8fc0;
    *(undefined1 *)((int)puVar7 + 0x11) = 1;
    puVar7[5] = uVar6;
    *(undefined1 *)((int)puVar7 + 0x13) = 1;
    uVar3 = FUN_00380eee(*(undefined2 *)(in_EDX + 0x16),1,0);
    *(undefined2 *)((int)puVar7 + 0x22) = uVar3;
    *(char *)(puVar7 + 9) = (char)uVar2;
    *(byte *)(puVar7 + 4) = *(byte *)(in_EDX + 0x18) & 1;
    *puVar7 = *puVar7 ^ ((uint)*(byte *)(in_EDX + 0x14) ^ *puVar7) & 0x7f;
    uVar6 = ((uint)*(byte *)(in_EDX + 0x15) << 7 ^ *puVar7) & 0x780 ^ *puVar7;
    *puVar7 = uVar6;
    uVar6 = (((*(byte *)(in_EDX + 0x15) & 0x80) != 0) + 1 | 0x18) << 0xb | uVar6 & 0xffffc7ff;
    *puVar7 = uVar6;
    *puVar7 = ((uint)*(ushort *)(in_EDX + 0x16) << 0x10 ^ uVar6) & 0x7ff0000 ^ uVar6;
    uVar6 = puVar7[0xb] - DAT_004a8fc0;
    puVar7[2] = (puVar7[2] ^ uVar6) & 0xf ^ uVar6;
    bVar5 = 0;
    puVar7[1] = uVar6;
    local_5 = 0;
    if (uVar2 != 0) {
      uVar6 = 0;
      do {
        iVar8 = uVar6 * 0x40;
        iVar10 = (iVar8 + puVar7[0xb]) - DAT_004a8fc0;
        *(byte *)(iVar8 + puVar7[0xb] + 0x2d) = local_5 - 1;
        *(byte *)(iVar8 + 0x2c + puVar7[0xb]) = local_5;
        *(uint **)(iVar8 + 0x20 + puVar7[0xb]) = puVar7;
        *(undefined4 *)(iVar8 + 0x28 + puVar7[0xb]) = 0;
        *(undefined4 *)(iVar8 + 0x24 + puVar7[0xb]) = 0;
        pbVar1 = (byte *)(puVar7[0xb] + iVar8 + 2);
        *pbVar1 = *pbVar1 | 1;
        bVar5 = local_5 + 1;
        *(int *)(iVar8 + 8 + puVar7[0xb]) = iVar10 + 0x40;
        uVar6 = (uint)bVar5;
        local_5 = bVar5;
      } while (uVar6 < uVar2);
    }
    *(undefined4 *)((uint)bVar5 * 0x40 + -0x38 + puVar7[0xb]) = 0;
    *(byte *)(puVar7[0xb] + 0x2d) = bVar5 - 1;
    iVar8 = FUN_00384b8a();
    if (iVar8 < 0) {
      *(undefined4 *)(in_EDX + 0x10) = 0;
      *puVar4 = DAT_004a8fe8;
      DAT_004a8fe8 = puVar4;
    }
    else {
      *(uint **)(in_EDX + 0x10) = puVar7;
    }
  }
  *(int *)(in_EDX + 4) = iVar8;
  KfLowerIrql();
  return iVar8;
}
