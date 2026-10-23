/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2DDD2BCC05E8FBF464A7386581D6D17B33A0B0CDE4383ECE5196B15F3FF79DA7
 * Entry: 0x003858cc, Ghidra index: 13676, label: FUN_003858cc
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004a8fe8;
void FUN_003858cc(void)

{
  byte bVar1;
  int iVar2;
  int in_EDX;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  
  iVar2 = *(int *)(in_EDX + 0x10);
  bVar1 = *(byte *)(iVar2 + 0x25);
  uVar3 = ((uint)*(byte *)(iVar2 + 0x26) - (uint)bVar1) + (uint)*(byte *)(iVar2 + 0x24);
  while (bVar1 != 0) {
    uVar3 = uVar3 % (uint)*(byte *)(iVar2 + 0x24);
    *(char *)(iVar2 + 0x25) = *(char *)(iVar2 + 0x25) + -1;
    iVar5 = uVar3 * 0x40 + *(int *)(iVar2 + 0x2c);
    uVar3 = uVar3 + 1;
    MmLockUnlockPhysicalPage(*(undefined4 *)(iVar5 + 4),1);
    if (((*(uint *)(iVar5 + 4) ^ *(uint *)(iVar5 + 0xc)) & 0xfffff000) != 0) {
      MmLockUnlockPhysicalPage(*(uint *)(iVar5 + 0xc),1);
    }
    bVar1 = *(byte *)(iVar2 + 0x25);
  }
  *(char *)(iVar2 + 0x25) = *(char *)(iVar2 + 0x25) + -1;
  puVar4 = (undefined4 *)(iVar2 + (uint)*(byte *)(iVar2 + 0x24) * -0x40);
  *puVar4 = DAT_004a8fe8;
  DAT_004a8fe8 = puVar4;
  *(undefined4 *)(in_EDX + 4) = 0;
  FUN_00380eda(in_EDX);
  return;
}
