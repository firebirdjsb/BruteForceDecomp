/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 278805D3E220BC4A7FB2D55D105CB3BC82745B57F09F82E30FF7600913BBC3F9
 * Entry: 0x002b5f80, Ghidra index: 9812, label: FUN_002b5f80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* XBE 0x002BE9E0 returns with RET 8 after two guest DWORDs.
 * The caller also supplies an implicit ECX receiver (ABI_UNVERIFIED).
 * Source-matched C++ declaration only; not a native guest ABI adapter. */
extern void FUN_002be9e0(uint param_1, uint param_2);
void FUN_002b5f80(void)

{
  int unaff_EBX;
  uint uVar1;
  int unaff_EDI;
  
  FUN_002be9e0(unaff_EBX,
               *(int *)(*(int *)(unaff_EBX + 0x44) + 0x8c) +
               *(int *)(*(int *)(unaff_EBX + 0x28) + 0x8c) | 0x80000000);
  uVar1 = (uint)*(ushort *)(unaff_EDI + 0x12);
  while (uVar1 = uVar1 - 1, -1 < (int)uVar1) {
    (**(code **)**(undefined4 **)(*(int *)(unaff_EDI + 0x14) + uVar1 * 4))();
  }
  return;
}
