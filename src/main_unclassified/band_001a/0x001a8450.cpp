/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B6AA9203D1543304C99E5B9AC38865B914903112C4862115FF44166BF67BCE2B
 * Entry: 0x001a8450, Ghidra index: 5437, label: FUN_001a8450
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001a8450(void)

{
  int iVar1;
  int unaff_EBX;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 auStack_34 [4];
  undefined4 uStack_24;
  undefined4 local_14 [5];
  
  if (*(int *)(unaff_EBX + 4) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (*(int *)(unaff_EBX + 8) - *(int *)(unaff_EBX + 4)) / 0x14;
    if (iVar2 != 0) goto LAB_001a8491;
  }
  uStack_24 = 0x1a8486;
  FUN_0001b7a0();
LAB_001a8491:
  puVar3 = local_14;
  puVar4 = auStack_34;
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  FUN_001b38d0();
  return *(int *)(unaff_EBX + 4) + iVar2 * 0x14;
}
