/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 674E286DEDAC6CDE3C6FCB86A1138BCBE95A127FAD57FF651D9C88D679CA5FC4
 * Entry: 0x002b5fd0, Ghidra index: 9813, label: FUN_002b5fd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* XBE 0x002BEA90 returns with RET 8 after two guest DWORDs.
 * The callee's implicit ESI state remains ABI_UNVERIFIED.
 * Source-matched C++ declaration only; not a native guest ABI adapter. */
extern uint FUN_002bea90(undefined4 param_1, uint param_2);
void FUN_002b5fd0(void)

{
  int in_EAX;
  int unaff_EBX;
  uint uVar1;
  
  FUN_002bea90(unaff_EBX,
               *(int *)(*(int *)(unaff_EBX + 0x44) + 0x8c) +
               *(int *)(*(int *)(unaff_EBX + 0x28) + 0x8c) | 0x80000000);
  uVar1 = (uint)*(ushort *)(in_EAX + 0x12);
  while (uVar1 = uVar1 - 1, -1 < (int)uVar1) {
    (**(code **)(**(int **)(*(int *)(in_EAX + 0x14) + uVar1 * 4) + 4))();
  }
  return;
}
