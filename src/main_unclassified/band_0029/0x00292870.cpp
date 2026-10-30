/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A2DC2EC57F5814CB00C7B9F3E91975C132769A0BB9EA0AEBDCF7C4DD484E1AD8
 * Entry: 0x00292870, Ghidra index: 9256, label: FUN_00292870
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469888;
void FUN_00292870(void)

{
  int *piVar1;
  uint in_EAX;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  piVar1 = DAT_00469888;
  if (0 < (int)in_EAX) {
    piVar2 = (int *)FUN_00294b90(0,(in_EAX + 2) * 0x10);
    piVar4 = DAT_00469888;
    *piVar2 = DAT_00469888[0x12];
    piVar4[0x12] = (int)piVar2;
    piVar2[1] = 0;
    piVar4[0x1e] = piVar4[0x1e] + 1;
    piVar2[2] = in_EAX;
    iVar3 = *piVar1;
    piVar2[4] = *(int *)(iVar3 + -0x10);
    piVar2[5] = *(int *)(iVar3 + -0xc);
    piVar2[6] = *(int *)(iVar3 + -8);
    piVar2[7] = *(int *)(iVar3 + -4);
    piVar4 = (int *)(*piVar1 + in_EAX * -0x10 + -0x10);
    piVar5 = piVar2 + 8;
    for (iVar3 = (in_EAX & 0xfffffff) << 2; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar5 = *piVar4;
      piVar4 = piVar4 + 1;
      piVar5 = piVar5 + 1;
    }
    for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(char *)piVar5 = (char)*piVar4;
      piVar4 = (int *)((int)piVar4 + 1);
      piVar5 = (int *)((int)piVar5 + 1);
    }
    iVar3 = *piVar1 + in_EAX * -0x10;
    *piVar1 = iVar3;
    *(undefined4 *)(iVar3 + -0x10) = 0xfffffff9;
    *(int **)(*piVar1 + -8) = piVar2;
  }
  return;
}
