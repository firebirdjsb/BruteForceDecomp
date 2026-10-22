/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E86396A39E5ACCA065CFB5E1F643BD42CFA3164886AFA0F9A46B17CFA74B2F63
 * Entry: 0x00278810, Ghidra index: 8920, label: FUN_00278810
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00278810(void)

{
  int *piVar1;
  int *piVar2;
  int in_ECX;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 local_14 [5];
  
  piVar1 = *(int **)(in_ECX + 0x14);
  piVar2 = (int *)*piVar1;
  if (*(undefined4 **)(in_ECX + 8) == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = (undefined4 *)**(undefined4 **)(in_ECX + 8);
  }
  while (piVar2 != piVar1) {
    puVar5 = (undefined4 *)piVar2[4];
    puVar6 = puVar4 + 2;
    for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    FUN_0012aba0();
    puVar4 = (undefined4 *)*puVar4;
    piVar1 = *(int **)(in_ECX + 0x14);
  }
  FUN_00279070(in_ECX + 4);
  if (*(int *)(in_ECX + 0x28) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(in_ECX + 0x28));
  }
  *(undefined4 *)(in_ECX + 0x28) = 0;
  *(undefined4 *)(in_ECX + 0x2c) = 0;
  *(undefined4 *)(in_ECX + 0x30) = 0;
  piVar1 = *(int **)(in_ECX + 0x14);
  piVar2 = (int *)*piVar1;
  while (piVar2 != piVar1) {
    puVar4 = (undefined4 *)piVar2[4];
    puVar5 = local_14;
    for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    FUN_00278a10(in_ECX + 0x24);
    FUN_00278900();
    FUN_0012aba0();
    piVar1 = *(int **)(in_ECX + 0x14);
  }
  return;
}
