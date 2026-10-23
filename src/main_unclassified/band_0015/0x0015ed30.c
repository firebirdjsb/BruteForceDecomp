/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 90CD46B3532EA2E9563218B63C0D2AAA12E66C4FAF155F26F30BE699059B0C44
 * Entry: 0x0015ed30, Ghidra index: 4566, label: FUN_0015ed30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0015ed30(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int unaff_retaddr;
  undefined1 auStack_100 [48];
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  
  iVar2 = *(int *)(param_1 + 0xc);
  uVar4 = 1;
  if (iVar2 == 0) {
    uVar4 = 2;
  }
  else if (iVar2 == 1) {
    if (*(int **)(param_1 + 4) != (int *)0x0) {
      iVar2 = **(int **)(param_1 + 4);
      if (*(char *)(param_1 + 0x48) != '\0') {
        iVar1 = (*(int **)(param_1 + 8))[2];
        (**(code **)(iVar2 + 0x40))();
        uVar4 = FUN_0003d690();
        (**(code **)(iVar1 + 0x14))(uVar4);
        return 0;
      }
      iVar1 = **(int **)(param_1 + 8);
      (**(code **)(iVar2 + 0x40))();
      uVar4 = FUN_0003d690();
      (**(code **)(iVar1 + 0x44))(uVar4);
      return 0;
    }
  }
  else if ((iVar2 == 2) && (*(int **)(param_1 + 4) != (int *)0x0)) {
    iVar2 = (**(code **)(**(int **)(param_1 + 4) + 0x34))(*(undefined4 *)(param_1 + 0x44));
    if ((iVar2 != 0) && (iVar2 != -1)) {
      iVar2 = FUN_00236e00();
      if (iVar2 == 0) {
        iVar2 = **(int **)(unaff_retaddr + 8);
        uVar4 = (**(code **)(**(int **)(unaff_retaddr + 4) + 0x40))();
        (**(code **)(iVar2 + 0x44))(uVar4);
        return 1;
      }
      FUN_00066160();
      FUN_0003d7e0();
      FUN_002333b0(iVar2 + 0x14);
      puVar3 = (undefined4 *)FUN_002334b0();
      uStack_d0 = *puVar3;
      uStack_cc = puVar3[1];
      uStack_c8 = puVar3[2];
      uStack_c4 = puVar3[3];
      uStack_b0 = puVar3[8];
      uStack_c0 = puVar3[4];
      uStack_bc = puVar3[5];
      uStack_b8 = puVar3[6];
      uStack_b4 = puVar3[7];
      FUN_0003d7a0(auStack_100,&uStack_d0);
      if (*(char *)(unaff_retaddr + 0x48) != '\0') {
        (**(code **)((*(int **)(unaff_retaddr + 8))[2] + 0x14))(auStack_100);
        return 0;
      }
      (**(code **)(**(int **)(unaff_retaddr + 8) + 0x44))(auStack_100);
      return 0;
    }
  }
  return uVar4;
}
