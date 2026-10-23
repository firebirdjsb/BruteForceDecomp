/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1B1AB8CD635F2B15331704370F58CDFA7AB4CCD7186AE6CF6B44AFAC62590FE7
 * Entry: 0x001ed5d0, Ghidra index: 6934, label: FUN_001ed5d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469948;
extern uint32_t *DAT_00469ab4;
extern uint32_t DAT_00469b58;
void FUN_001ed5d0(void)

{
  int iVar1;
  char cVar2;
  int in_EAX;
  int iVar3;
  undefined1 *puVar4;
  int in_ECX;
  int *piVar5;
  
  iVar1 = (in_EAX + -1) * 0x598 + in_ECX;
  if (*(char *)(iVar1 + 0x15c) == '\0') {
    *(undefined4 *)(iVar1 + 0x160) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x66c) = 0xffffffff;
    return;
  }
  FUN_001e5570(DAT_00469948);
  iVar3 = -1;
  if (*(int *)(in_ECX + 0x1c) != 0) {
    cVar2 = FUN_002e5880();
    if (cVar2 == '\0') {
      iVar3 = FUN_002e5bf0(0);
      iVar3 = *(int *)(iVar3 + 0x2c);
    }
    else {
      iVar3 = 0;
    }
  }
  if (*(int *)(iVar1 + 0x66c) == iVar3) {
    iVar3 = 0;
    piVar5 = (int *)(in_ECX + 0xac);
    do {
      if (*piVar5 == in_EAX) {
        FUN_001ed480();
        break;
      }
      iVar3 = iVar3 + 1;
      piVar5 = piVar5 + 0xb;
    } while (iVar3 < 4);
  }
  (**(code **)(**(int **)(DAT_00469b58 + 8) + 600))(&stack0xfffffff8,*(undefined4 *)(iVar1 + 0x66c))
  ;
  if (DAT_00469ab4 != (int *)0x0) {
    (**(code **)(*DAT_00469ab4 + 0x38))();
  }
  puVar4 = (undefined1 *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x130))();
  if (puVar4 != (undefined1 *)0x0) {
    *puVar4 = 0;
    *(undefined4 *)(puVar4 + 8) = 0xffffffff;
    *(undefined4 *)(puVar4 + 0xc) = 0xa6de845;
    *(undefined4 *)(puVar4 + 0x10) = 0;
    *(undefined4 *)(puVar4 + 0x9c) = 0;
    *(undefined4 *)(puVar4 + 4) = 4;
    *(undefined4 *)(puVar4 + 0x14) = 0;
    *(undefined4 *)(puVar4 + 0x98) = 4;
    *(undefined2 *)(puVar4 + 0x18) = 0;
    puVar4[1] = 1;
  }
  *(undefined1 *)(iVar1 + 0x15c) = 0;
  return;
}
