/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 161953DE7A229B4F08B7B30ABE79F133F9A2AB46F895D401ACD3C14D7C980B52
 * Entry: 0x00292910, Ghidra index: 9257, label: FUN_00292910
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469888;
extern char s_indexed_expression_not_a_table_00404934[];
void FUN_00292910(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  iVar1 = *DAT_00469888;
  uVar2 = *(uint *)(iVar1 + -0x20);
  if (uVar2 == 0xfffffffd) {
    iVar5 = *(int *)(*(int *)(iVar1 + -0x18) + 0x14);
    piVar4 = (int *)(DAT_00469888[0x19] + iVar5 * -0x120);
    if (*piVar4 == -6) {
      iVar3 = FUN_00293c90(iVar1 + -0x10);
      if ((*(int *)(iVar3 + 0x10) != -6) ||
         (iVar5 = DAT_00469888[0x19] + iVar5 * -0x120, piVar4 = (int *)(iVar5 + 0x20),
         *(int *)(iVar5 + 0x20) == -6)) {
        *DAT_00469888 = *DAT_00469888 + -0x10;
        *(undefined4 *)(iVar1 + -0x20) = *(undefined4 *)(iVar3 + 0x10);
        *(undefined4 *)(iVar1 + -0x1c) = *(undefined4 *)(iVar3 + 0x14);
        *(undefined4 *)(iVar1 + -0x18) = *(undefined4 *)(iVar3 + 0x18);
        *(undefined4 *)(iVar1 + -0x14) = *(undefined4 *)(iVar3 + 0x1c);
        return;
      }
    }
  }
  else {
    if (uVar2 == 0xfffffff9) {
      uVar2 = *(uint *)(*(int *)(iVar1 + -0x18) + 0x10);
    }
    else if (uVar2 == 0) {
      uVar2 = *(uint *)(*(int *)(iVar1 + -0x18) + 0x10);
      uVar2 = uVar2 & (-1 < (int)uVar2) - 1;
    }
    piVar4 = (int *)(DAT_00469888[0x19] + uVar2 * -0x120);
    if (*piVar4 == -6) {
      FUN_0028ab50(s_indexed_expression_not_a_table_00404934);
    }
  }
  FUN_0028a540(2);
  iVar1 = *DAT_00469888;
  *(int *)(iVar1 + -0x30) = *piVar4;
  *(int *)(iVar1 + -0x2c) = piVar4[1];
  *(int *)(iVar1 + -0x28) = piVar4[2];
  *(int *)(iVar1 + -0x24) = piVar4[3];
  FUN_0028a8b0(2,1);
  return;
}
