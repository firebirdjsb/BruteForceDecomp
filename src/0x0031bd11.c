/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 83F58FB58D78270B4C4FF8BA82432BD92A711B9C69C25D1723088049652B8AC5
 * Entry: 0x0031bd11, Ghidra index: 12313, label: FUN_0031bd11
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0032f75c;
extern uint32_t DAT_0032fdec;
extern uint32_t DAT_0032ff18;
extern uint32_t DAT_0032ff20;
extern uint32_t DAT_0032ff24;
int FUN_0031bd11(void)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int in_ECX;
  uint uVar4;
  uint *puVar5;
  uint local_8c [21];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  int local_14;
  undefined4 local_10;
  int local_8;
  
  uVar4 = 0;
  local_8 = 0;
  local_8c[1] = 0x1000;
  local_8c[2] = 0;
  do {
    local_8c[2] = local_8c[2] + *(int *)((int)&DAT_0032f75c + uVar4);
    uVar4 = uVar4 + 4;
  } while (uVar4 < 8);
  local_8c[6] = 0x8000;
  local_8c[7] = 0x8000;
  local_8c[0x14] = (local_8c[2] >> 0xc) << 3;
  local_8c[3] = 0x1000;
  local_8c[4] = 4;
  local_8c[5] = 0x1000;
  local_8c[8] = 0x4020;
  local_8c[9] = 0x4000;
  local_8c[10] = 0x4000;
  local_8c[0xb] = 0x4000;
  local_8c[0xc] = 0x10000;
  local_8c[0xd] = 0x4000;
  local_8c[0xe] = 0x2000;
  local_8c[0xf] = 0x4000;
  local_8c[0x10] = 0x2000;
  local_8c[0x11] = 0x4000;
  local_8c[0x12] = 0x10;
  local_8c[0x13] = 0x4000;
  local_38 = 0x4000;
  local_34 = 0x1000;
  local_30 = 0x4000;
  local_2c = 0xc000;
  local_28 = 0x4000;
  local_24 = 0x1060;
  local_20 = 0x4000;
  uVar4 = FUN_0031c8ab();
  uVar4 = (uVar4 >> 0xc) + 4;
  local_1c = uVar4 * 0x1000;
  local_14 = (uVar4 & 0xfffff) << 3;
  local_18 = 0x4000;
  local_10 = 0x4000;
  if (DAT_0032fdec == 0) {
    iVar3 = FUN_003148cf(0x626f5344,0x1c,1);
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_0031acb1();
    }
    *(int *)(in_ECX + 8) = iVar3;
    local_8 = (-(uint)(iVar3 != 0) & 0x7ff8fff2) + 0x8007000e;
  }
  else {
    uVar2 = FUN_00316bf2(DAT_0032fdec);
    *(undefined4 *)(in_ECX + 8) = uVar2;
  }
  puVar5 = local_8c + 1;
  uVar4 = 0;
  do {
    if (local_8 < 0) {
      return local_8;
    }
    uVar1 = *puVar5;
    *(uint *)((int)&DAT_0032ff20 + uVar4) = puVar5[-1];
    local_8 = FUN_0031baa9((undefined4 *)((int)&DAT_0032ff18 + uVar4),uVar1,4);
    if (-1 < local_8) {
      iVar3 = FUN_0031ad37(*(undefined4 *)((int)&DAT_0032ff18 + uVar4),
                           *(int *)((int)&DAT_0032ff20 + uVar4) + 0xfffU & 0xfffff000,
                           *(int *)((int)&DAT_0032ff20 + uVar4));
      *(uint *)((int)&DAT_0032ff24 + uVar4) = (uint)(iVar3 == 0);
    }
    uVar4 = uVar4 + 0x10;
    puVar5 = puVar5 + 2;
  } while (uVar4 < 0x100);
  return local_8;
}
