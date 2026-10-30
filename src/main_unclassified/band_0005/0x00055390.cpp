/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9AF8E31892E5204456F6DE2311D756D6293F59DC1EB8956D002DE2EFD1D5ABF8
 * Entry: 0x00055390, Ghidra index: 807, label: FUN_00055390
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00443314;
void FUN_00055390(void)

{
  uint *puVar1;
  int iVar2;
  int in_EAX;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iStack_8;
  int iStack_4;
  
  iVar2 = *(int *)(in_EAX + 8);
  *(undefined1 *)(in_EAX + 0xd) = 0;
  *(undefined4 *)(in_EAX + 0x10) = 0;
  *(undefined4 *)(in_EAX + 0x14) = 0;
  puVar1 = (uint *)(*(int *)(iVar2 + 0x6c) + 0x44);
  *puVar1 = *puVar1 & 0xfffffbff;
  iVar4 = *(int *)(iVar2 + 0x21c);
  if (iVar4 != 0) {
    *(byte *)(iVar4 + 0x24) = *(byte *)(iVar4 + 0x24) & 0xfd;
    (**(code **)(*DAT_00443314 + 0x44))(DAT_00443314,iVar4);
  }
  piVar5 = (int *)(iVar2 + 0x228);
  iVar4 = 3;
  do {
    iVar3 = *piVar5;
    if (iVar3 != 0) {
      *(byte *)(iVar3 + 0x24) = *(byte *)(iVar3 + 0x24) & 0xfd;
      (**(code **)(*DAT_00443314 + 0x44))(DAT_00443314,iVar3);
    }
    piVar5 = piVar5 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  if ((*(byte *)(iVar2 + 0x26) & 0x10) == 0) {
    iStack_4 = *(int *)(iVar2 + 8);
    if (iStack_4 != 0) {
      iVar4 = *(int *)(iStack_4 + 0x40);
      iStack_8 = iVar2;
      iVar3 = FUN_000ff730(iStack_4 + 0x3c,iVar4,*(undefined4 *)(iVar4 + 4),&iStack_8);
      FUN_000b2a50();
      *(int *)(iVar4 + 4) = iVar3;
      **(int **)(iVar3 + 4) = iVar3;
      *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(*(int *)(iStack_4 + 0x40) + 4);
      *(byte *)(iVar2 + 0x26) = *(byte *)(iVar2 + 0x26) | 0x10;
    }
  }
  return;
}
