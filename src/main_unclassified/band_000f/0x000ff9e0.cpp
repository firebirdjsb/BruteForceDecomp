/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BFD4F5F5110ED6DE33772C03F7C8E2F1A3A9FDEDDD085B6C159A3A805BA56B52
 * Entry: 0x000ff9e0, Ghidra index: 3200, label: FUN_000ff9e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_000ff9e0(int *param_1)

{
  int iVar1;
  int unaff_EDI;
  
  iVar1 = -1;
  if (param_1 != (int *)0x0) {
    param_1[2] = unaff_EDI;
    (**(code **)(*param_1 + 0x30))();
    param_1[1] = unaff_EDI;
    if ((*(byte *)(param_1 + 10) & 2) == 0) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
      (**(code **)(*param_1 + 0x24))();
    }
    if ((*(byte *)(param_1 + 10) & 4) == 0) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
      (**(code **)(*param_1 + 0x28))();
    }
    FUN_001611d0();
    if (*(int *)(unaff_EDI + 0x74) == 0) {
      return 0;
    }
    iVar1 = *(int *)(unaff_EDI + 0x78) - *(int *)(unaff_EDI + 0x74) >> 2;
  }
  return iVar1;
}
