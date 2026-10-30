/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C4F303468B523F0BC0EC9CB9B75D2B40ACD26AD1C0F382FF07DE6FB2C77D24C5
 * Entry: 0x002b5850, Ghidra index: 9800, label: FUN_002b5850
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0038e734;
extern uint32_t PTR_FUN_0038e818;
extern uint32_t PTR_FUN_003bc654;
void FUN_002b5850(void)

{
  undefined4 *unaff_ESI;
  uint uVar1;
  
  uVar1 = (uint)*(ushort *)((int)unaff_ESI + 0x12);
  *unaff_ESI = PTR_FUN_0038e818;
  while (uVar1 = uVar1 - 1, -1 < (int)uVar1) {
    (**(code **)(**(int **)(unaff_ESI[5] + uVar1 * 4) + 8))();
  }
  if (*(short *)(unaff_ESI + 6) != 0) {
    if (unaff_ESI[5] != 0) {
      (*(code *)PTR_FUN_003bc654)(unaff_ESI[5]);
      return;
    }
    *(undefined2 *)(unaff_ESI + 4) = 0;
    *(undefined2 *)(unaff_ESI + 6) = 0;
  }
  *(undefined2 *)((int)unaff_ESI + 0x12) = 0;
  *unaff_ESI = &PTR_FUN_0038e734;
  if (((unaff_ESI[2] & 0xff000000) == 0) && (unaff_ESI[3] != 0)) {
    (*(code *)PTR_FUN_003bc654)(unaff_ESI[3]);
    return;
  }
  return;
}
