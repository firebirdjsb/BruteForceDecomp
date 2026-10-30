/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2C156F573F6BCF035D06BB8D6A63681C20801B61ED4B157F97121D6A95C10F70
 * Entry: 0x00114540, Ghidra index: 3571, label: FUN_00114540
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00114540(void)

{
  int *piVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  int in_ECX;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  int *piVar10;
  int *local_8 [2];
  
  FUN_00159430();
  FUN_000dff80(in_ECX);
  piVar10 = *(int **)(in_ECX + 0x4d8);
  if (piVar10 != *(int **)(in_ECX + 0x4dc)) {
    do {
      iVar4 = *(int *)(*(int *)(in_ECX + 8) + 0xa44);
      piVar6 = *(int **)(iVar4 + 0x2c);
      piVar9 = piVar10 + 1;
      if (piVar6 != *(int **)(iVar4 + 0x30)) {
LAB_00114590:
        if (*piVar6 != *piVar10) goto code_r0x00114594;
        piVar1 = *(int **)(iVar4 + 0x30);
        piVar5 = piVar6 + 1;
        if (piVar5 != piVar1) {
          iVar7 = (int)piVar6 - (int)piVar5;
          do {
            *(int *)(iVar7 + (int)piVar5) = *piVar5;
            piVar5 = piVar5 + 1;
          } while (piVar5 != piVar1);
        }
        *(int *)(iVar4 + 0x30) = *(int *)(iVar4 + 0x30) + -4;
      }
LAB_001145c4:
      piVar6 = (int *)(*(undefined4 **)(*piVar10 + 8))[0x1f];
      local_8[0] = piVar9;
      (**(code **)**(undefined4 **)(*piVar10 + 8))(1);
      if ((piVar6 != (int *)0x0) && (iVar4 = (**(code **)(*piVar6 + 0x28))(), iVar4 == 0)) {
        (**(code **)(*piVar6 + 0x24))(1);
      }
      if ((undefined4 *)*piVar10 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar10)(1);
      }
      piVar10 = piVar9;
    } while (piVar9 != *(int **)(in_ECX + 0x4dc));
  }
  if (*(int *)(in_ECX + 0x4d8) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(in_ECX + 0x4d8));
  }
  *(undefined4 *)(in_ECX + 0x4d8) = 0;
  *(undefined4 *)(in_ECX + 0x4dc) = 0;
  *(undefined4 *)(in_ECX + 0x4e0) = 0;
  piVar10 = *(int **)(in_ECX + 0x50c);
  if (piVar10 != *(int **)(in_ECX + 0x510)) {
    do {
      iVar4 = *(int *)(*(int *)(in_ECX + 8) + 0xa44);
      piVar6 = *(int **)(iVar4 + 0x2c);
      piVar9 = piVar10 + 1;
      if (piVar6 != *(int **)(iVar4 + 0x30)) {
LAB_00114660:
        if (*piVar6 != *piVar10) goto code_r0x00114664;
        piVar1 = *(int **)(iVar4 + 0x30);
        piVar5 = piVar6 + 1;
        if (piVar5 != piVar1) {
          iVar7 = (int)piVar6 - (int)piVar5;
          do {
            *(int *)(iVar7 + (int)piVar5) = *piVar5;
            piVar5 = piVar5 + 1;
          } while (piVar5 != piVar1);
        }
        *(int *)(iVar4 + 0x30) = *(int *)(iVar4 + 0x30) + -4;
      }
LAB_00114694:
      local_8[0] = piVar10;
      if ((undefined4 *)*piVar10 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar10)(1);
      }
      piVar10 = piVar9;
    } while (piVar9 != *(int **)(in_ECX + 0x510));
  }
  if (*(int *)(in_ECX + 0x50c) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(in_ECX + 0x50c));
  }
  *(undefined4 *)(in_ECX + 0x50c) = 0;
  *(undefined4 *)(in_ECX + 0x510) = 0;
  *(undefined4 *)(in_ECX + 0x514) = 0;
  iVar4 = *(int *)(in_ECX + 0x2e8);
  if (iVar4 != 0) {
    if ((iVar4 != -0x144) && (*(int **)(iVar4 + 0x164) != (int *)0x0)) {
      (**(code **)(**(int **)(iVar4 + 0x164) + 0xbc))();
    }
    if ((*(int *)(in_ECX + 0x2e8) != -0x110) &&
       (piVar10 = *(int **)(*(int *)(in_ECX + 0x2e8) + 0x130), piVar10 != (int *)0x0)) {
      (**(code **)(*piVar10 + 0xbc))();
    }
    piVar10 = *(int **)(in_ECX + 0x2e8);
    cVar3 = (**(code **)(*piVar10 + 0x20))();
    if ((cVar3 != '\0') && (piVar10[8] != 0)) {
      piVar10 = *(int **)(in_ECX + 0x2e8);
      cVar3 = (**(code **)(*piVar10 + 0x20))();
      if (cVar3 == '\0') {
        piVar10 = (int *)0x0;
      }
      else {
        piVar10 = (int *)piVar10[8];
      }
      (**(code **)(*piVar10 + 0xbc))();
    }
    iVar4 = *(int *)(in_ECX + 0x2e8);
    cVar3 = (**(code **)(*(int *)(iVar4 + 0x44) + 0x20))();
    if ((cVar3 != '\0') && (*(int *)(iVar4 + 100) != 0)) {
      iVar4 = *(int *)(in_ECX + 0x2e8);
      cVar3 = (**(code **)(*(int *)(iVar4 + 0x44) + 0x20))();
      if (cVar3 == '\0') {
        piVar10 = (int *)0x0;
      }
      else {
        piVar10 = *(int **)(iVar4 + 100);
      }
      (**(code **)(*piVar10 + 0xbc))();
    }
    piVar10 = *(int **)(*(int *)(in_ECX + 0x2e8) + 0x1ac);
    if (((piVar10 != (int *)0x0) && (cVar3 = (**(code **)(*piVar10 + 0x58))(), cVar3 != '\0')) &&
       (piVar10 = *(int **)(*(int *)(*(int *)(in_ECX + 0x2e8) + 0x1ac) + 0x20),
       piVar10 != (int *)0x0)) {
      (**(code **)(*piVar10 + 0xbc))();
    }
  }
  *(undefined4 *)(in_ECX + 0x7d4) = 0;
  if (*(undefined4 **)(in_ECX + 0x4f8) == (undefined4 *)0x0) {
    piVar10 = (int *)0x0;
  }
  else {
    piVar10 = (int *)**(undefined4 **)(in_ECX + 0x4f8);
  }
  if (piVar10 != *(int **)(in_ECX + 0x4f8)) {
    do {
      piVar6 = (int *)((undefined4 *)piVar10[3])[0x1f];
      (*(code *)**(undefined4 **)piVar10[3])(1);
      if ((piVar6 != (int *)0x0) && (iVar4 = (**(code **)(*piVar6 + 0x28))(), iVar4 == 0)) {
        (**(code **)(*piVar6 + 0x24))(1);
      }
      piVar10 = (int *)*piVar10;
    } while (piVar10 != (int *)*(int *)(in_ECX + 0x4f8));
  }
  puVar2 = *(undefined4 **)(in_ECX + 0x4f8);
  if (puVar2 == (undefined4 *)0x0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *puVar2;
  }
  FUN_001298b0(local_8,uVar8,puVar2);
  piVar10 = *(int **)(in_ECX + 0x534);
  *(undefined4 *)(in_ECX + 0x500) = 0;
  if (piVar10 != *(int **)(in_ECX + 0x538)) {
    do {
      iVar4 = *(int *)(*(int *)(in_ECX + 8) + 0xa44);
      piVar9 = piVar10 + 2;
      for (piVar6 = *(int **)(iVar4 + 0x3c); local_8[0] = piVar10, piVar6 != *(int **)(iVar4 + 0x40)
          ; piVar6 = piVar6 + 4) {
        if (*piVar6 == *piVar10) {
          FUN_00176700(piVar6 + 4,*(undefined4 *)(iVar4 + 0x40),piVar6,piVar10);
          *(int *)(iVar4 + 0x40) = *(int *)(iVar4 + 0x40) + -0x10;
          break;
        }
      }
      FUN_002b2e00();
      piVar10 = piVar9;
    } while (piVar9 != *(int **)(in_ECX + 0x538));
  }
  *(byte *)(in_ECX + 0x7d8) = *(byte *)(in_ECX + 0x7d8) & 0xfb;
  FUN_001144f0(*(undefined4 *)(*(int *)(in_ECX + 8) + 0xa44),*(undefined4 *)(in_ECX + 0x6c));
  return;
code_r0x00114594:
  piVar6 = piVar6 + 1;
  if (piVar6 == *(int **)(iVar4 + 0x30)) goto LAB_001145c4;
  goto LAB_00114590;
code_r0x00114664:
  piVar6 = piVar6 + 1;
  if (piVar6 == *(int **)(iVar4 + 0x30)) goto LAB_00114694;
  goto LAB_00114660;
}
