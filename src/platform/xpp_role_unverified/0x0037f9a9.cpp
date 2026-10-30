/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: ABB9727C43B05D5F2695E3895737ABB7FB01510211E56CA72D77E6344A2C4FB4
 * Entry: 0x0037f9a9, Ghidra index: 13505, label: FUN_0037f9a9
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004a8fc0;
extern uint32_t DAT_004a8fc8;
extern uint32_t DAT_004a8fcc;
extern uint32_t DAT_004a8fe0;
extern uint32_t DAT_004a8fe2;
extern uint32_t DAT_004a8fe4;
extern uint32_t DAT_004a8fe6;
extern uint32_t DAT_004a8fe8;
extern uint32_t DAT_004a8fec;
extern uint32_t _DAT_004a8fc4;
extern uint32_t *_DAT_004a8fd0;
extern uint32_t _DAT_004a8fd4;
extern uint32_t _DAT_004a8fd8;
extern uint32_t _DAT_004a8fdc;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0037f9a9(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  byte bVar5;
  uint *in_ECX;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint local_8;
  
  bVar5 = *(byte *)((int)in_ECX + 0xe);
  uVar2 = in_ECX[1];
  puVar6 = (undefined4 *)((uint)bVar5 * 0x40 + 0x30);
  if (*in_ECX < uVar2) {
    *in_ECX = uVar2;
  }
  iVar1 = uVar2 * (int)puVar6 + (in_ECX[2] + 8) * 0x20 + *in_ECX * 0x30;
  uVar2 = iVar1 + 0xfffU >> 0xc;
  if (uVar2 << 0xc < uVar2 * 0x10 + iVar1) {
    uVar2 = uVar2 + 1;
  }
  puVar3 = (undefined4 *)MmAllocateContiguousMemory(uVar2 * 0x1000);
  MmLockUnlockBufferPages(puVar3,uVar2 * 0x1000,0);
  iVar1 = MmGetPhysicalAddress(puVar3);
  DAT_004a8fc0 = (int)puVar3 - iVar1;
  puVar7 = puVar3;
  for (iVar1 = (uVar2 & 0xfffff) << 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined1 *)puVar7 = 0;
    puVar7 = (undefined4 *)((int)puVar7 + 1);
  }
  DAT_004a8fc8 = (undefined4 *)0x0;
  DAT_004a8fec = (uint)*(byte *)((int)in_ECX + 0xe);
  puVar7 = puVar3 + 0x40;
  uVar4 = 0;
  DAT_004a8fe8 = (undefined4 *)0x0;
  _DAT_004a8fc4 = puVar3;
  if (in_ECX[1] != 0) {
    do {
      *puVar7 = DAT_004a8fe8;
      puVar8 = puVar7 + (uint)bVar5 * 0x10 + 0xc;
      DAT_004a8fe8 = puVar7;
      puVar8[6] = DAT_004a8fc8;
      puVar7 = puVar8 + 0xc;
      uVar4 = uVar4 + 1;
      DAT_004a8fc8 = puVar8;
    } while (uVar4 < in_ECX[1]);
  }
  for (; _DAT_004a8fd0 = puVar7, uVar4 < *in_ECX; uVar4 = uVar4 + 1) {
    _DAT_004a8fd0[6] = DAT_004a8fc8;
    puVar7 = _DAT_004a8fd0 + 0xc;
    DAT_004a8fc8 = _DAT_004a8fd0;
  }
  local_8 = 0;
  DAT_004a8fcc = 0;
  puVar8 = _DAT_004a8fd0;
  puVar7 = _DAT_004a8fd0;
  while (puVar7 = puVar7 + 8, puVar7 <= puVar3 + uVar2 * 0x400) {
    puVar7[-4] = (int)puVar8 - DAT_004a8fc0;
    FUN_00384a53(puVar8);
    local_8 = local_8 + 1;
    puVar6 = puVar8;
    puVar8 = puVar8 + 8;
  }
  _DAT_004a8fd8 = 0;
  _DAT_004a8fdc = 1000;
  DAT_004a8fe0 = (ushort)(byte)in_ECX[3];
  DAT_004a8fe4 = (ushort)*(byte *)((int)in_ECX + 0xd);
  _DAT_004a8fd4 = puVar6;
  if (in_ECX[2] < local_8) {
    bVar5 = (char)local_8 - (char)in_ECX[2];
    if (DAT_004a8fe4 != 0) {
      DAT_004a8fe4 = (ushort)*(byte *)((int)in_ECX + 0xd) + (ushort)(bVar5 >> 1);
      bVar5 = bVar5 - (bVar5 >> 1);
    }
    DAT_004a8fe0 = DAT_004a8fe0 + bVar5;
    in_ECX[2] = local_8;
  }
  DAT_004a8fe2 = DAT_004a8fe0;
  DAT_004a8fe6 = DAT_004a8fe4;
  return;
}
