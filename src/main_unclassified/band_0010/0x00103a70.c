/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CE5D61C7D44B1FE29BAE3BD647D72AD7046C0A379E8B257538CA820699DFA7E0
 * Entry: 0x00103a70, Ghidra index: 3308, label: FUN_00103a70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00103a70(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int iStack_18;
  int iStack_14;
  
  if ((*(int *)(param_1 + 0x88) == 0) ||
     (iVar9 = *(int *)(param_1 + 0x8c) - *(int *)(param_1 + 0x88) >> 2, iVar9 == 0)) {
    return 0;
  }
  iVar5 = *(int *)(param_1 + 0x78) * 2 + 1;
  if (param_2 < 0) {
    if (iVar9 < iVar5) {
      param_2 = 0;
      goto LAB_00103acd;
    }
  }
  else {
    if (param_2 < iVar9) goto LAB_00103acd;
    if (iVar9 >= iVar5) {
      param_2 = 0;
      goto LAB_00103acd;
    }
  }
  param_2 = iVar9 + -1;
LAB_00103acd:
  iVar8 = 0;
  *(int *)(param_1 + 0x94) = param_2;
  if (0 < iVar9) {
    do {
      piVar10 = (int *)**(int **)(*(int *)(param_1 + 0x88) + iVar8 * 4);
      if ((*(byte *)(piVar10 + 10) & 4) != 0) {
        *(byte *)(piVar10 + 10) = *(byte *)(piVar10 + 10) & 0xfb;
        (**(code **)(*piVar10 + 0x28))();
      }
      iVar8 = iVar8 + 1;
      piVar10[0x1a] = 0;
    } while (iVar8 < iVar9);
  }
  piVar10 = *(int **)(param_1 + 0x9c);
  if ((*(byte *)(piVar10 + 10) & 4) != 0) {
    *(byte *)(piVar10 + 10) = *(byte *)(piVar10 + 10) & 0xfb;
    (**(code **)(*piVar10 + 0x28))();
  }
  piVar10 = *(int **)(param_1 + 0xa4);
  if ((*(byte *)(piVar10 + 10) & 4) != 0) {
    *(byte *)(piVar10 + 10) = *(byte *)(piVar10 + 10) & 0xfb;
    (**(code **)(*piVar10 + 0x28))();
  }
  fVar4 = *(float *)(param_1 + 0x14) / (float)iVar5;
  iVar9 = *(int *)(param_1 + 0x94) + *(int *)(param_1 + 0x78);
  iVar5 = *(int *)(param_1 + 0x94) - *(int *)(param_1 + 0x78);
  iStack_14 = 0;
  if (iVar5 <= iVar9) {
    iStack_18 = -iVar5;
    do {
      if ((*(int *)(param_1 + 0x88) != 0) &&
         (iVar8 = *(int *)(param_1 + 0x8c) - *(int *)(param_1 + 0x88) >> 2, 0 < iVar8)) {
        if (iVar8 < *(int *)(param_1 + 0x78) * 2 + 1) {
          if (iVar5 < 0) {
            piVar10 = (int *)(param_1 + 0x9c);
          }
          else if (iVar5 < iVar8) {
            piVar10 = *(int **)(*(int *)(param_1 + 0x88) + iVar5 * 4);
          }
          else {
            piVar10 = (int *)(param_1 + 0xa4);
          }
        }
        else {
          piVar10 = (int *)0x0;
          if ((*(int *)(param_1 + 0x88) != 0) &&
             (iVar8 = *(int *)(param_1 + 0x8c) - *(int *)(param_1 + 0x88) >> 2, 0 < iVar8)) {
            iVar6 = iVar5;
            if (iVar5 < 0) {
              iVar6 = iVar8 - iStack_18 % iVar8;
            }
            if (iVar8 <= iVar6) {
              iVar6 = iVar6 % iVar8;
            }
            piVar10 = *(int **)(*(int *)(param_1 + 0x88) + iVar6 * 4);
          }
        }
        if (piVar10 != (int *)0x0) {
          piVar3 = (int *)*piVar10;
          if ((*(byte *)(piVar3 + 10) & 4) == 0) {
            *(byte *)(piVar3 + 10) = *(byte *)(piVar3 + 10) | 4;
            (**(code **)(*piVar3 + 0x28))();
          }
          if (iVar5 < *(int *)(param_1 + 0x94)) {
            *(undefined4 *)(*piVar10 + 0x6c) = 0xff000000;
            iVar8 = *piVar10;
            bVar7 = *(byte *)(iVar8 + 0x70) | 1;
LAB_00103c85:
            *(byte *)(iVar8 + 0x70) = bVar7;
          }
          else if (*(int *)(param_1 + 0x94) < iVar5) {
            *(undefined4 *)(*piVar10 + 0x6c) = 0xff000000;
            iVar8 = *piVar10;
            bVar7 = *(byte *)(iVar8 + 0x70) & 0xfe;
            goto LAB_00103c85;
          }
          fVar1 = *(float *)(param_1 + 0x18);
          fVar2 = *(float *)(param_1 + 0x80);
          piVar10 = (int *)*piVar10;
          piVar10[3] = (int)(float)(int)((float)iStack_14 * fVar4 +
                                        (fVar4 - *(float *)(param_1 + 0x7c)) * 0.5);
          piVar10[4] = (int)(float)(int)((fVar1 - fVar2) * 0.5);
          (**(code **)(*piVar10 + 0x1c))();
        }
      }
      iVar5 = iVar5 + 1;
      iStack_18 = iStack_18 + -1;
      iStack_14 = iStack_14 + 1;
    } while (iVar5 <= iVar9);
  }
  FUN_00103a00();
  if (*(int *)(param_1 + 4) != 0) {
    piVar10 = *(int **)(*(int *)(param_1 + 4) + 0x94);
    if (piVar10 != (int *)0x0) {
      (**(code **)(*piVar10 + 0x28))(param_1);
    }
  }
  return 1;
}
