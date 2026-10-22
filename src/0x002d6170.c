/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A4992C33685E58141C3DE8710505161304494451461C269C0C2C36B42077CE9A
 * Entry: 0x002d6170, Ghidra index: 10235, label: FUN_002d6170
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003bc654;
void FUN_002d6170(void)

{
  int *piVar1;
  int unaff_ESI;
  uint uVar2;
  
  uVar2 = (uint)*(ushort *)(unaff_ESI + 0x8a);
  while (uVar2 = uVar2 - 1, -1 < (int)uVar2) {
    piVar1 = *(int **)(*(int *)(unaff_ESI + 0x8c) + uVar2 * 4);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x10))(1);
    }
  }
  if (*(short *)(unaff_ESI + 0x90) != 0) {
    if (*(int *)(unaff_ESI + 0x8c) != 0) {
      (*(code *)PTR_FUN_003bc654)(*(int *)(unaff_ESI + 0x8c));
      return;
    }
    *(undefined2 *)(unaff_ESI + 0x88) = 0;
    *(undefined2 *)(unaff_ESI + 0x90) = 0;
  }
  *(undefined2 *)(unaff_ESI + 0x8a) = 0;
  return;
}
