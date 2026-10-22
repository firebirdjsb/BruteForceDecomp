/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 463ED28EA7AB0333195E917DA645361F493F5E3E88A2B1824ADBAA1004A2C494
 * Entry: 0x0036fda0, Ghidra index: 13334, label: FUN_0036fda0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037bb28;
void FUN_0036fda0(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int in_EAX;
  int *piVar4;
  int in_ECX;
  int in_EDX;
  int iVar5;
  
  iVar2 = DAT_0037bb28;
  piVar4 = (int *)(*(int *)(in_EAX + 4) + param_1);
  if (DAT_0037bb28 != 0) {
    piVar4 = (int *)(*(int *)(DAT_0037bb28 + 4) + *(int *)(DAT_0037bb28 + 0x10));
    iVar5 = ((uint)(*(int *)(in_ECX + 0x10) != 0) * 4 + 3) * 4;
    *(int *)(DAT_0037bb28 + 0x10) = *(int *)(DAT_0037bb28 + 0x10) + iVar5 + 8;
    if (*(uint *)(iVar2 + 0x14) < *(uint *)(iVar2 + 0x10)) {
      return;
    }
    *piVar4 = iVar5;
    piVar4[1] = param_1;
    piVar4 = piVar4 + 2;
  }
  if (piVar4 != (int *)0x0) {
    iVar2 = *(int *)(in_ECX + 4);
    iVar5 = *(int *)(in_ECX + 0xc);
    *piVar4 = (in_EDX + 0x206c) * 0x40;
    piVar4[1] = iVar2;
    piVar4[2] = iVar5;
    uVar3 = *(uint *)(in_ECX + 0x10);
    if (uVar3 != 0) {
      bVar1 = *(byte *)(in_ECX + 0x13);
      piVar4[3] = in_EDX * 0x40 + 0x41b10;
      piVar4[4] = (bVar1 + 1) * 0x400000;
      piVar4[5] = in_EDX * 0x40 + 0x41b1c;
      piVar4[6] = ((uVar3 & 0xfff) + 1) * 0x10000 | (uVar3 >> 0xc & 0xfff) + 1;
    }
  }
  return;
}
