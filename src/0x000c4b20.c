/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 56397A73C755BA59037855D009E9FD56D565E6E14B62CA27708562416FD79FE1
 * Entry: 0x000c4b20, Ghidra index: 2411, label: FUN_000c4b20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003c8e28;
extern uint32_t DAT_003c8e2c;
extern uint32_t DAT_003c8e30;
extern uint32_t DAT_003c8e34;
void FUN_000c4b20(void)

{
  undefined2 uVar1;
  int *piVar2;
  int iVar3;
  int in_EDX;
  int unaff_ESI;
  int *piVar4;
  
  if (*(int *)(unaff_ESI + 0x28) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(unaff_ESI + 0x28) + -0x2c;
  }
  iVar3 = (in_EDX + (*(byte *)(*(int *)(iVar3 + 100) + 0x74) & 1) * 4) * 0x10;
  uVar1 = *(undefined2 *)(&DAT_003c8e2c + iVar3);
  *(undefined2 *)(unaff_ESI + 4) = *(undefined2 *)(&DAT_003c8e28 + iVar3);
  *(undefined2 *)(unaff_ESI + 6) = uVar1;
  *(undefined2 *)(unaff_ESI + 0xe) = *(undefined2 *)(&DAT_003c8e30 + iVar3);
  *(undefined2 *)(unaff_ESI + 0xc) = *(undefined2 *)(&DAT_003c8e34 + iVar3);
  if ((in_EDX == 0) || (in_EDX == 2)) {
    piVar4 = *(int **)(unaff_ESI + 0x38);
  }
  else {
    piVar4 = *(int **)(unaff_ESI + 0x3c);
  }
  piVar2 = *(int **)(unaff_ESI + 0x20);
  if ((piVar4 != piVar2) && (piVar2 != piVar4)) {
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
      *(undefined4 *)(unaff_ESI + 0x20) = 0;
    }
    *(int **)(unaff_ESI + 0x20) = piVar4;
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
  }
  return;
}
