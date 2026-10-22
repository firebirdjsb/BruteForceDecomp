/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AA66865934237D5D52B3322D5E55663237957D83C8EF6B4093B8CEB65BB933A6
 * Entry: 0x001a7790, Ghidra index: 5406, label: FUN_001a7790
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001a7790(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 auStack_810 [255];
  undefined4 uStack_414;
  undefined4 local_400 [256];
  
  if (*(int *)(param_1 + 4) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 10;
    if (iVar2 != 0) goto LAB_001a77c4;
  }
  uStack_414 = 0x1a77bf;
  FUN_001abbf0();
LAB_001a77c4:
  puVar3 = local_400;
  puVar4 = auStack_810;
  for (iVar1 = 0x100; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  FUN_001b26b0();
  return iVar2 * 0x400 + *(int *)(param_1 + 4);
}
