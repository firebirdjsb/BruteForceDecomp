/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9149C1B5AC3F2015B907F1B4743AD767B809FE80A41A065D4639431CB15FC25B
 * Entry: 0x00044140, Ghidra index: 530, label: FUN_00044140
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Removing unreachable block (ram,0x00044297) */
/* WARNING: Removing unreachable block (ram,0x000442a4) */
/* WARNING: Removing unreachable block (ram,0x000442a8) */
/* WARNING: Removing unreachable block (ram,0x00044332) */
/* WARNING: Removing unreachable block (ram,0x00044352) */
/* WARNING: Removing unreachable block (ram,0x0004435e) */
/* WARNING: Removing unreachable block (ram,0x00044372) */
/* WARNING: Removing unreachable block (ram,0x0004437a) */
/* WARNING: Removing unreachable block (ram,0x00044381) */
/* WARNING: Removing unreachable block (ram,0x0004438b) */
/* WARNING: Removing unreachable block (ram,0x000443ac) */
/* WARNING: Removing unreachable block (ram,0x000443a8) */
/* WARNING: Removing unreachable block (ram,0x000443b6) */

void FUN_00044140(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  char cVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  int iVar12;
  undefined4 uVar13;
  int iVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  int *piVar17;
  undefined4 *puVar18;
  float10 fVar19;
  float fStack_bc;
  int *piStack_b8;
  undefined4 *puStack_b4;
  undefined4 auStack_6c [27];
  
  piVar9 = (int *)(**(code **)(*param_1 + 0x24))();
  piVar10 = (int *)(**(code **)*piVar9)();
  iVar12 = *(int *)(param_1[4] + 8);
  puVar1 = *(undefined4 **)(iVar12 + 0x74);
  piStack_b8 = (int *)0x0;
  fStack_bc = 3.4028235e+38;
  puVar15 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar15 = (undefined4 *)*puVar1;
  }
  puVar2 = *(undefined4 **)(iVar12 + 0x68);
  puVar16 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    puVar16 = (undefined4 *)*puVar2;
  }
  puVar3 = *(undefined4 **)(iVar12 + 0x74);
  puVar4 = *(undefined4 **)(iVar12 + 0x68);
  puStack_b4 = puVar16;
  while ((((puVar16 != puVar4 || (puVar2 != puVar4)) || (puVar15 != puVar3)) || (puVar1 != puVar3)))
  {
    if (puVar16 == puVar2) {
      piVar17 = (int *)puVar15[3];
    }
    else {
      piVar17 = (int *)puVar16[3];
    }
    if (piVar17 != (int *)0x0) {
      piVar11 = (int *)(**(code **)(*piVar17 + 0xec))();
      iVar12 = (**(code **)(*piVar17 + 0xf4))();
      if ((iVar12 != 0) && (piVar17 != piVar10)) {
        iVar12 = *piVar11;
        uVar13 = (**(code **)(*piVar9 + 0x9c))();
        cVar8 = (**(code **)(iVar12 + 0xc0))(uVar13);
        puVar16 = puStack_b4;
        if ((*(byte *)(piVar17 + 0x1c) & 1) == 0) {
          if (cVar8 != '\0') {
            puVar18 = auStack_6c;
            for (iVar12 = 0xb; iVar12 != 0; iVar12 = iVar12 + -1) {
              *puVar18 = 0;
              puVar18 = puVar18 + 1;
            }
            FUN_00043000(param_1,piVar17,1);
            if (param_2 != (undefined4 *)0x0) {
              iVar12 = (**(code **)(*piVar10 + 0x40))();
              iVar14 = (**(code **)(*piVar17 + 0x40))();
              fVar5 = *(float *)(iVar14 + 0x2c) - *(float *)(iVar12 + 0x2c);
              fVar6 = *(float *)(iVar14 + 0x28) - *(float *)(iVar12 + 0x28);
              fVar7 = *(float *)(iVar14 + 0x24) - *(float *)(iVar12 + 0x24);
              fVar5 = fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5;
              if (fVar5 < fStack_bc) {
                fStack_bc = fVar5;
                piStack_b8 = piVar17;
              }
            }
            iVar12 = FUN_000388b0(param_1[0xd6]);
            if (((iVar12 != 0) && (*(int *)(iVar12 + 100) == 1)) &&
               (fVar19 = (float10)(**(code **)(piVar17[0x1a] + 8))(),
               fVar19 < (float10)0.2 != (fVar19 == (float10)0.2))) {
              FUN_0003db50();
            }
          }
        }
        else {
          FUN_00043470(param_1,cVar8);
        }
      }
    }
    if (puVar16 == puVar2) {
      puVar15 = (undefined4 *)*puVar15;
    }
    else {
      puVar16 = (undefined4 *)*puVar16;
      puStack_b4 = puVar16;
    }
  }
  if ((param_2 != (undefined4 *)0x0) && (piStack_b8 != (int *)0x0)) {
    *param_2 = piStack_b8;
  }
  return;
}
