/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 41C127C77A3DC538A9AA079CD3CBF3F3AD01958047D13FEDC001642E3F31B310
 * Entry: 0x001a6fe0, Ghidra index: 5386, label: FUN_001a6fe0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001a6fe0(void)

{
  int iVar1;
  int unaff_EBX;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 auStack_44 [6];
  undefined4 uStack_2c;
  undefined4 local_1c [7];
  
  if (*(int *)(unaff_EBX + 4) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (*(int *)(unaff_EBX + 8) - *(int *)(unaff_EBX + 4)) / 0x1c;
    if (iVar2 != 0) goto LAB_001a7023;
  }
  uStack_2c = 0x1a7018;
  FUN_001aa850();
LAB_001a7023:
  puVar3 = local_1c;
  puVar4 = auStack_44;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  FUN_001b1bd0();
  return iVar2 * 0x1c + *(int *)(unaff_EBX + 4);
}
