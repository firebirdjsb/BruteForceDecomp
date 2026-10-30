/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7199F7FCDA4DBAD21A5C800C5F0984B6853EDF24C5A16F30EB571EC354E3AE8D
 * Entry: 0x0025e140, Ghidra index: 8587, label: FUN_0025e140
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00443308;
void FUN_0025e140(void)

{
  int *piVar1;
  int iVar2;
  int in_EAX;
  int iVar3;
  int iVar4;
  int iStack00000004;
  
  iVar4 = *(int *)(in_EAX + 0x18);
  iStack00000004 = *(int *)(in_EAX + 0x1c);
  if (iVar4 != iStack00000004) {
    do {
      piVar1 = *(int **)(iVar4 + 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
        *(undefined4 *)(iVar4 + 4) = 0;
      }
      (**(code **)(*DAT_00443308 + 0x28))(DAT_00443308,iVar4,(undefined4 *)(iVar4 + 4));
      iVar2 = *(int *)(iVar4 + 0x20);
      for (iVar3 = *(int *)(iVar4 + 0x1c); iVar3 != iVar2; iVar3 = iVar3 + 0x30) {
        FUN_0025e050();
      }
      iVar4 = iVar4 + 0x2c;
    } while (iVar4 != iStack00000004);
  }
  return;
}
