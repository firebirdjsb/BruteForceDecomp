/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9D4EA7F10AD5D6CF8F094050B52AD6687EF367993E3CCFA99ED4AF5BCFB3577B
 * Entry: 0x000e3fa0, Ghidra index: 2837, label: FUN_000e3fa0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000e3fa0(int param_1)

{
  float fVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  undefined4 uVar9;
  
  iVar5 = param_1;
  if (*(undefined4 **)(param_1 + 0x4c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x4c))(1);
    *(undefined4 *)(iVar5 + 0x4c) = 0;
  }
  FUN_000d18a0();
  if (*(int *)(iVar5 + 0x28) != 0) {
    puVar2 = *(undefined4 **)(iVar5 + 0x24);
    if (puVar2 == (undefined4 *)0x0) {
      uVar9 = 0;
    }
    else {
      uVar9 = *puVar2;
    }
    FUN_001298b0(&param_1,uVar9,puVar2);
  }
  if (*(int *)(iVar5 + 0x34) != 0) {
    puVar2 = *(undefined4 **)(iVar5 + 0x30);
    if (puVar2 == (undefined4 *)0x0) {
      uVar9 = 0;
    }
    else {
      uVar9 = *puVar2;
    }
    FUN_001298b0(&param_1,uVar9,puVar2);
  }
  if (*(int *)(iVar5 + 0x1c) != 0) {
    iVar6 = 0;
    if (*(int **)(iVar5 + 0x18) != (int *)0x0) {
      iVar6 = **(int **)(iVar5 + 0x18);
    }
    fVar1 = *(float *)(*(int *)(iVar6 + 8) + 0xc);
    if (fVar1 < 3.4028235e+38 != (fVar1 == 3.4028235e+38)) {
      piVar3 = *(int **)(iVar5 + 0x18);
      if (piVar3 == (int *)0x0) {
        piVar7 = (int *)0x0;
      }
      else {
        piVar7 = (int *)*piVar3;
      }
      if (piVar7 == piVar3) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(*(int *)(iVar6 + 8));
      }
      *(int *)piVar7[1] = *piVar7;
      *(int *)(*piVar7 + 4) = piVar7[1];
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(piVar7);
    }
  }
  iVar6 = *(int *)(iVar5 + 0x44);
  if (iVar6 != *(int *)(iVar5 + 0x48) + *(int *)(iVar5 + 0x44)) {
    uVar8 = (int)(iVar6 + (iVar6 >> 0x1f & 3U)) >> 2;
    iVar4 = uVar8 * -4;
    if (*(uint *)(iVar5 + 0x40) <= uVar8) {
      uVar8 = uVar8 - *(uint *)(iVar5 + 0x40);
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)
                        (*(int *)(*(int *)(iVar5 + 0x3c) + uVar8 * 4) + (iVar6 + iVar4) * 4));
  }
  FUN_0001bd30();
  return;
}
