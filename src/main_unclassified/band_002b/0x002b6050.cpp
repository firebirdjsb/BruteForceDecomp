/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8011D2B9D60DD9B4894E89588D6DFB62592FEEFD934166167BFB7D5BBFB31E80
 * Entry: 0x002b6050, Ghidra index: 9815, label: FUN_002b6050
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* XBE 0x002BEA90 returns with RET 8 after two guest DWORDs.
 * The callee's implicit ESI state remains ABI_UNVERIFIED.
 * Source-matched C++ declaration only; not a native guest ABI adapter. */
extern uint FUN_002bea90(undefined4 param_1, uint param_2);
void FUN_002b6050(void)

{
  int in_EAX;
  int unaff_EBX;
  uint uVar1;
  
  FUN_002bea90(unaff_EBX,*(undefined4 *)(unaff_EBX + 0x8c));
  uVar1 = (uint)*(ushort *)(in_EAX + 0x12);
  while (uVar1 = uVar1 - 1, -1 < (int)uVar1) {
    (**(code **)(**(int **)(*(int *)(in_EAX + 0x14) + uVar1 * 4) + 4))();
  }
  return;
}
