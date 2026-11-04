/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 44207FD1FDED9B52D61D711BB9A99035CC44B989E2886DF20538F171E168FD93
 * Entry: 0x00384b8a, Ghidra index: 13659, label: FUN_00384b8a
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-draft declaration only; Xbox x86 guest ABI_UNVERIFIED. */
extern void FUN_00384b13(byte param_1);
undefined4 FUN_00384b8a(void)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  undefined4 uVar6;
  int in_ECX;
  int in_EDX;
  short *psVar7;
  byte bVar8;
  ushort uVar9;
  uint local_10;
  byte local_9;
  byte local_5;
  
  if (*(char *)(in_EDX + 0x11) == '\x03') {
    local_5 = 0x20;
    if (*(byte *)(in_EDX + 0x13) < 0x20) {
      do {
        local_5 = local_5 >> 1;
      } while (*(byte *)(in_EDX + 0x13) < local_5);
    }
    bVar8 = local_5 * '\x02' - 1;
    uVar9 = 12000;
    if (local_5 <= bVar8) {
      psVar7 = (short *)((uint)local_5 * 0x10 + 0x10 + in_ECX);
      do {
        uVar5 = psVar7[-1] + psVar7[1] + *psVar7;
        if (uVar5 < uVar9) {
          uVar9 = uVar5;
          local_9 = local_5;
        }
        local_5 = local_5 + 1;
        psVar7 = psVar7 + 8;
      } while (local_5 <= bVar8);
    }
  }
  else {
    uVar9 = *(short *)(in_ECX + 0x10) + *(short *)(in_ECX + 0xe);
    local_9 = 0;
  }
  if ((uint)*(ushort *)(in_ECX + 0x414) < (uint)*(ushort *)(in_EDX + 0x22) + (uint)uVar9) {
    uVar6 = 0x80000800;
  }
  else {
    iVar1 = (uint)local_9 * 0x10 + 0xc + in_ECX;
    *(byte *)(in_EDX + 0x12) = local_9;
    *(short *)(iVar1 + 2) = *(short *)(iVar1 + 2) + *(ushort *)(in_EDX + 0x22);
    local_5 = local_9;
    bVar8 = local_9;
    if (local_9 != 0) goto joined_r0x00384c49;
    bVar8 = 1;
    local_5 = 1;
    do {
      if (local_5 <= bVar8) {
        psVar7 = (short *)((uint)local_5 * 0x10 + 0x12 + in_ECX);
        local_10 = (uint)(byte)((bVar8 - local_5) + 1);
        do {
          *psVar7 = *psVar7 + *(short *)(in_EDX + 0x22);
          psVar7 = psVar7 + 8;
          local_10 = local_10 - 1;
        } while (local_10 != 0);
      }
joined_r0x00384c49:
      bVar8 = bVar8 * '\x02' + 1;
      local_5 = local_5 << 1;
      bVar4 = local_9;
    } while (bVar8 < 0x41);
    while (1 < bVar4) {
      iVar2 = (uint)bVar4 * 0x10 + 0xc + in_ECX;
      uVar9 = *(ushort *)(iVar2 + 4);
      uVar5 = *(ushort *)(iVar2 + 2);
      iVar2 = (uint)(bVar4 ^ 1) * 0x10 + 0xc + in_ECX;
      if ((uint)uVar5 + (uint)uVar9 <= (uint)*(ushort *)(iVar2 + 4) + (uint)*(ushort *)(iVar2 + 2))
      break;
      *(ushort *)((uint)(bVar4 >> 1) * 0x10 + 0x10 + in_ECX) = uVar5 + uVar9;
      bVar4 = bVar4 >> 1;
    }
    if (bVar4 == 1) {
      *(short *)(in_ECX + 0x10) = *(short *)(in_ECX + 0x20) + *(short *)(in_ECX + 0x1e);
    }
    bVar8 = local_9;
    if (*(int *)(iVar1 + 8) == 0) {
      do {
        bVar4 = bVar8 >> 1;
        if (*(int *)((uint)bVar4 * 0x10 + 0x14 + in_ECX) != 0) break;
        bVar3 = bVar8 >> 1;
        bVar8 = bVar4;
      } while (bVar3 != 0);
      iVar2 = *(int *)((uint)bVar4 * 0x10 + 0x14 + in_ECX);
      if (iVar2 != 0) {
        *(undefined4 *)(in_EDX + 0xc) = *(undefined4 *)(iVar2 + 0x14);
      }
      *(int *)(iVar1 + 8) = in_EDX;
      *(int *)(iVar1 + 0xc) = in_EDX;
      *(undefined4 *)(in_EDX + 0x18) = 0;
    }
    else {
      *(int *)(in_EDX + 0x18) = *(int *)(iVar1 + 8);
      *(int *)(iVar1 + 8) = in_EDX;
      *(undefined4 *)(in_EDX + 0xc) = *(undefined4 *)(*(int *)(in_EDX + 0x18) + 0x14);
    }
    FUN_00384b13(local_9);
    uVar6 = 0;
  }
  return uVar6;
}
