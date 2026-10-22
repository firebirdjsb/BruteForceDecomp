/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0FBAC64B8670A10D86B4ABB7E4A62D81FEDE11C6FFEE0900A7EFAB986A2E5D22
 * Entry: 0x0004d230, Ghidra index: 647, label: FUN_0004d230
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0004d230(int param_1,float param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  bool bVar9;
  bool bVar10;
  char cVar11;
  int iVar12;
  int *piVar13;
  int *piVar14;
  undefined4 uVar15;
  int iVar16;
  int *piVar17;
  undefined4 *puVar18;
  float10 fVar19;
  undefined4 *local_10;
  undefined4 *local_8;
  
  piVar1 = *(int **)(param_1 + 0x10);
  bVar9 = false;
  bVar10 = false;
  if (*(int *)(param_1 + 8) == 0x30) {
    bVar10 = true;
  }
  else if (*(int *)(param_1 + 8) == 0x34) {
    bVar9 = true;
  }
  if (piVar1 != (int *)0x0) {
    iVar12 = piVar1[2];
    puVar2 = *(undefined4 **)(iVar12 + 0x74);
    local_8 = (undefined4 *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      local_8 = (undefined4 *)*puVar2;
    }
    puVar3 = *(undefined4 **)(iVar12 + 0x68);
    puVar18 = (undefined4 *)0x0;
    if (puVar3 != (undefined4 *)0x0) {
      puVar18 = (undefined4 *)*puVar3;
    }
    puVar4 = *(undefined4 **)(iVar12 + 0x74);
    puVar5 = *(undefined4 **)(iVar12 + 0x68);
    local_10 = puVar18;
    while ((((puVar18 != puVar5 || (puVar3 != puVar5)) || (local_8 != puVar4)) || (puVar2 != puVar4)
           )) {
      if (puVar18 == puVar3) {
        piVar17 = (int *)local_8[3];
      }
      else {
        piVar17 = (int *)puVar18[3];
      }
      if (((piVar17 != (int *)0x0) && ((*(byte *)(piVar17 + 0x1c) & 1) == 0)) &&
         ((((uint)piVar17 & -(uint)((*(byte *)((int)piVar17 + 0x26) & 0x40) != 0)) != 0 &&
          ((piVar17 != piVar1 && (iVar12 = (**(code **)(*piVar17 + 0xec))(), iVar12 != 0)))))) {
        piVar13 = (int *)(**(code **)(*piVar17 + 0xec))();
        piVar14 = (int *)(**(code **)(*piVar1 + 0xec))();
        iVar12 = *piVar14;
        uVar15 = (**(code **)(*piVar13 + 0x9c))();
        cVar11 = (**(code **)(iVar12 + 0xc0))(uVar15);
        puVar18 = local_10;
        if ((!bVar9) || (cVar11 != '\0')) {
          if ((bVar10) && (cVar11 == '\0')) {
            iVar12 = (**(code **)(*piVar1 + 0xf4))();
            if ((iVar12 == 0) || (iVar12 = FUN_00049ca0(), iVar12 == 0)) goto LAB_0004d466;
            FUN_00012250();
            iVar12 = (**(code **)(*piVar1 + 0x40))();
            FUN_00022ca0(*(undefined4 *)(iVar12 + 0x24),*(undefined4 *)(iVar12 + 0x28),
                         *(undefined4 *)(iVar12 + 0x2c));
          }
          iVar12 = (**(code **)(*piVar17 + 0x40))();
          iVar16 = (**(code **)(*piVar1 + 0x40))();
          fVar6 = *(float *)(iVar16 + 0x2c) - *(float *)(iVar12 + 0x2c);
          fVar7 = *(float *)(iVar16 + 0x28) - *(float *)(iVar12 + 0x28);
          fVar8 = *(float *)(iVar16 + 0x24) - *(float *)(iVar12 + 0x24);
          piVar17 = (int *)(**(code **)(*piVar17 + 0xec))();
          fVar19 = (float10)(**(code **)(*piVar17 + 0xb0))();
          if (((float10)fVar8 * (float10)fVar8 +
              (float10)fVar7 * (float10)fVar7 + (float10)fVar6 * (float10)fVar6) *
              fVar19 * (float10)0.02 * fVar19 * (float10)0.02 < (float10)param_2 * (float10)param_2)
          {
            FUN_0004b8f0();
          }
        }
      }
LAB_0004d466:
      if (puVar18 == puVar3) {
        local_8 = (undefined4 *)*local_8;
      }
      else {
        puVar18 = (undefined4 *)*puVar18;
        local_10 = puVar18;
      }
    }
  }
  return;
}
