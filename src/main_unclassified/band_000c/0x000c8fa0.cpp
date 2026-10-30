/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9C1CE7D989CC5298BA95B138769F00E57F01EB5D90699E2888106A2A0FF9871C
 * Entry: 0x000c8fa0, Ghidra index: 2482, label: FUN_000c8fa0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469ab0;
void FUN_000c8fa0(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  int in_EAX;
  undefined4 *puVar5;
  int in_ECX;
  int iVar6;
  int local_4;
  
  if (*(undefined4 **)(DAT_00469ab0 + 0x1348) == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5 = (undefined4 *)**(undefined4 **)(DAT_00469ab0 + 0x1348);
  }
  for (; puVar5 != *(undefined4 **)(DAT_00469ab0 + 0x1348); puVar5 = (undefined4 *)*puVar5) {
    local_4 = puVar5[2];
    if (*(int *)(local_4 + 0xe0) == in_ECX) goto LAB_000c8fe5;
  }
  local_4 = 0;
LAB_000c8fe5:
  if (*(undefined4 **)(DAT_00469ab0 + 0x1348) == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5 = (undefined4 *)**(undefined4 **)(DAT_00469ab0 + 0x1348);
  }
  while ((iVar6 = 0, puVar5 != *(undefined4 **)(DAT_00469ab0 + 0x1348) &&
         (iVar6 = puVar5[2], *(int *)(iVar6 + 0xe0) != in_EAX))) {
    puVar5 = (undefined4 *)*puVar5;
  }
  if (in_ECX != 0) {
    iVar1 = *(int *)(in_EAX + 0x2e8);
    uVar2 = *(undefined4 *)(*(int *)(in_ECX + 0x2e8) + 0x1c4);
    uVar3 = *(undefined4 *)(*(int *)(in_ECX + 0x2e8) + 0x1c0);
    cVar4 = FUN_0014d680(uVar3,uVar2);
    if (cVar4 != '\0') {
      *(undefined4 *)(iVar1 + 0x1c0) = uVar3;
      *(undefined4 *)(iVar1 + 0x1c4) = uVar2;
    }
  }
  if (local_4 != 0) {
    FUN_000ac160();
  }
  if (iVar6 != 0) {
    uVar2 = 0x40000000;
    if ((*(short *)(iVar6 + 0x20) < 600) || (*(short *)(iVar6 + 0x22) < 400)) {
      uVar2 = 0x3f000000;
    }
    *(undefined4 *)(*(int *)(iVar6 + 0x104) + 0x74) = uVar2;
    (**(code **)(**(int **)(iVar6 + 0x108) + 0x14))(0x3f800000);
  }
  FUN_000bb220(0x7949f0d);
  return;
}
