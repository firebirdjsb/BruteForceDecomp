/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B9F7295197E94A0FEB1FE54F16297A1002B328449CCF4DB4BE49151EF87FE140
 * Entry: 0x000552e0, Ghidra index: 806, label: FUN_000552e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00443314;
void FUN_000552e0(void)

{
  uint *puVar1;
  int iVar2;
  int in_EAX;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  iVar3 = (**(code **)(**(int **)(in_EAX + 8) + 0xf4))();
  *(undefined1 *)(in_EAX + 0xd) = 1;
  *(undefined4 *)(in_EAX + 0x10) = 0;
  *(undefined4 *)(in_EAX + 0x14) = 0;
  *(undefined4 *)(iVar3 + 0x130) = 0;
  *(undefined4 *)(iVar3 + 0x128) = 0;
  *(byte *)(iVar3 + 300) = *(byte *)(iVar3 + 300) & 0xfa | 2;
  iVar3 = *(int *)(in_EAX + 8);
  puVar1 = (uint *)(*(int *)(iVar3 + 0x6c) + 0x44);
  *puVar1 = *puVar1 | 0x400;
  iVar4 = *(int *)(iVar3 + 0x21c);
  if (iVar4 != 0) {
    *(byte *)(iVar4 + 0x24) = *(byte *)(iVar4 + 0x24) | 2;
    (**(code **)(*DAT_00443314 + 0x48))(DAT_00443314,iVar4);
  }
  piVar5 = (int *)(iVar3 + 0x228);
  iVar4 = 3;
  do {
    iVar2 = *piVar5;
    if (iVar2 != 0) {
      *(byte *)(iVar2 + 0x24) = *(byte *)(iVar2 + 0x24) | 2;
      (**(code **)(*DAT_00443314 + 0x48))(DAT_00443314,iVar2);
    }
    piVar5 = piVar5 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  if (((*(byte *)(iVar3 + 0x26) & 0x10) != 0) && (*(int *)(iVar3 + 8) != 0)) {
    FUN_000e03a0();
    *(byte *)(iVar3 + 0x26) = *(byte *)(iVar3 + 0x26) & 0xef;
  }
  return;
}
