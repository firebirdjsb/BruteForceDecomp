/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 29545188CC7CF8EDAB807BB4AF8ABA9C993199E9099030290C0E26B2816896E8
 * Entry: 0x00042fa0, Ghidra index: 519, label: FUN_00042fa0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00042fa0(void)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_000120f0();
  if ((((iVar1 != 0) && (iVar2 = FUN_000120f0(), iVar2 != 0)) && (*(int *)(iVar2 + 0x59c) != 0)) &&
     ((iVar2 = FUN_0005bca0(), iVar2 != 0 && (iVar2 != iVar1)))) {
    if (*(int *)(in_EAX + 0x58) == 1) {
      FUN_00042c90();
      return;
    }
    if (*(int *)(in_EAX + 0x58) == 4) {
      FUN_00042e20(in_EAX);
    }
  }
  return;
}
