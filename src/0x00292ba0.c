/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 30ABC6E83C7F8F869C2E756A7538AA4369C038D396DB1ABA33EC7C6DFA5702E7
 * Entry: 0x00292ba0, Ghidra index: 9260, label: FUN_00292ba0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469888;
void FUN_00292ba0(void)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int in_EAX;
  uint uVar4;
  int iVar5;
  
  piVar3 = DAT_00469888;
  uVar4 = *(uint *)(in_EAX + 0x10);
  if (*(char *)(0x3b9798 - uVar4) != '\0') {
    if (uVar4 == 0xfffffff9) {
      uVar4 = *(uint *)(*(int *)(in_EAX + 0x18) + 0x10);
    }
    else if (uVar4 == 0xfffffffd) {
      uVar4 = *(uint *)(*(int *)(in_EAX + 0x18) + 0x14);
    }
    else if (uVar4 == 0) {
      uVar4 = *(uint *)(*(int *)(in_EAX + 0x18) + 0x10);
      uVar4 = (-1 < (int)uVar4) - 1 & uVar4;
    }
    iVar5 = DAT_00469888[0x19] + uVar4 * -0x120;
    if (*(int *)(iVar5 + 0x30) != -6) {
      *(undefined4 *)*DAT_00469888 = 0xfffffffe;
      *(int *)(*piVar3 + 8) = in_EAX;
      iVar1 = *piVar3;
      *piVar3 = iVar1 + 0x10;
      *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(in_EAX + 0x10);
      *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(in_EAX + 0x14);
      *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)(in_EAX + 0x18);
      *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(in_EAX + 0x1c);
      *piVar3 = *piVar3 + 0x10;
      FUN_0028a540(2);
      iVar1 = *DAT_00469888;
      *(undefined4 *)(iVar1 + -0x30) = *(undefined4 *)(iVar5 + 0x30);
      *(undefined4 *)(iVar1 + -0x2c) = *(undefined4 *)(iVar5 + 0x34);
      *(undefined4 *)(iVar1 + -0x28) = *(undefined4 *)(iVar5 + 0x38);
      *(undefined4 *)(iVar1 + -0x24) = *(undefined4 *)(iVar5 + 0x3c);
      FUN_0028a8b0(2,1);
      return;
    }
  }
  puVar2 = (undefined4 *)*DAT_00469888;
  *puVar2 = *(undefined4 *)(in_EAX + 0x10);
  puVar2[1] = *(undefined4 *)(in_EAX + 0x14);
  puVar2[2] = *(undefined4 *)(in_EAX + 0x18);
  puVar2[3] = *(undefined4 *)(in_EAX + 0x1c);
  *piVar3 = *piVar3 + 0x10;
  return;
}
