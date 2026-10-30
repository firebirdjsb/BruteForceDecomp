/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2270E637BD9AD279D39D273EC643BEC243EB866770B5484BAAC4D7A158EC86CF
 * Entry: 0x0029c7a0, Ghidra index: 9445, label: FUN_0029c7a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469888;
extern char s_unexpected_end_of_file_in__s_00403e8c[];
undefined4 FUN_0029c7a0(void)

{
  int in_EAX;
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  byte *pbVar5;
  
  iVar1 = FUN_0029c5b0();
  uVar2 = FUN_0029c5b0();
  uVar2 = uVar2 | iVar1 << 0x10;
  if (uVar2 == 0) {
    return 0;
  }
  if (*(int *)(DAT_00469888 + 0x24) < (int)(*(int *)(DAT_00469888 + 0x28) + uVar2)) {
    FUN_0029d540(uVar2);
  }
  pbVar5 = (byte *)(*(int *)(DAT_00469888 + 0x28) + *(int *)(DAT_00469888 + 0x1c));
  iVar1 = FUN_0029c530(pbVar5,uVar2);
  if (iVar1 != 0) {
    FUN_00295370(s_unexpected_end_of_file_in__s_00403e8c,*(undefined4 *)(in_EAX + 0x10));
  }
  iVar1 = uVar2 - 1;
  if (iVar1 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = (int)((uint)*pbVar5 * iVar1) % 0x1f;
  }
  uVar3 = FUN_00294640(pbVar5,iVar1,*(int *)(DAT_00469888 + 0x60) + iVar4 * 0xc);
  return uVar3;
}
