/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AC1DFEE24E3EB326C0F2D64B514190E748D530401CCFBE8DE7E6AA5ECA8C4969
 * Entry: 0x001a6ed0, Ghidra index: 5385, label: FUN_001a6ed0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001a6ed0(void)

{
  int iVar1;
  int unaff_EBX;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 auStack_5c [9];
  undefined4 uStack_38;
  undefined4 local_28 [10];
  
  if (*(int *)(unaff_EBX + 4) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (*(int *)(unaff_EBX + 8) - *(int *)(unaff_EBX + 4)) / 0x28;
    if (iVar2 != 0) goto LAB_001a6f11;
  }
  uStack_38 = 0x1a6f06;
  FUN_0008ea90();
LAB_001a6f11:
  puVar3 = local_28;
  puVar4 = auStack_5c;
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  FUN_001b1aa0();
  return *(int *)(unaff_EBX + 4) + iVar2 * 0x28;
}
