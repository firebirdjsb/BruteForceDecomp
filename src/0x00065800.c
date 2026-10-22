/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C8AAEFDB42AF428BD850DCDC4A9B177563747264332B7F1D244EFD4EC0C82025
 * Entry: 0x00065800, Ghidra index: 1107, label: FUN_00065800
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_00065800(int *param_1,float param_2)

{
  float *pfVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float10 fVar6;
  undefined1 auVar7 [16];
  int *piVar8;
  int *piVar9;
  int *piVar10;
  float fStack_98;
  int **ppiStack_94;
  int *piStack_90;
  int *piStack_8c;
  float fStack_88;
  float fStack_84;
  int *piStack_80;
  float fStack_7c;
  float fStack_78;
  int *piStack_74;
  int *piStack_70;
  float fStack_6c;
  int *piStack_68;
  float fStack_64;
  float fStack_4c;
  float fStack_48;
  float *pfStack_44;
  float fStack_40;
  int *piStack_38;
  int iStack_34;
  int *piStack_2c;
  float fStack_28;
  int iStack_24;
  
  fStack_64 = param_2;
  piStack_68 = (int *)0x65819;
  (**(code **)(*param_1 + 0xbc))();
  piStack_68 = (int *)param_1[0x25];
  if (piStack_68 == (int *)0x0) {
    *(undefined1 *)(param_1 + 0x2d) = 0;
    return 0;
  }
  fStack_6c = 5.8266e-40;
  cVar2 = (**(code **)(*piStack_68 + 0x1c))();
  if ((cVar2 == '\0') && (-1 < param_1[1])) {
    fStack_6c = (float)param_1[0x20];
    piStack_74 = *(int **)(param_1[0x26] + 0x38);
    piStack_70 = (int *)param_1[0x22];
    fStack_78 = 5.82727e-40;
    fVar6 = (float10)(**(code **)(*piStack_74 + 0x1c))();
    param_1[0x2b] = (int)(float)fVar6;
    fStack_78 = (float)param_1[0x20];
    piStack_80 = *(int **)(param_1[0x26] + 0x34);
    fStack_7c = (float)param_1[0x22];
    fStack_84 = 5.82776e-40;
    fVar6 = (float10)(**(code **)(*piStack_80 + 0x1c))();
    param_1[0x2c] = (int)(float)fVar6;
    fStack_84 = (float)param_1[0x20];
    piStack_8c = *(int **)(param_1[0x26] + 0x30);
    fStack_88 = (float)param_1[0x22];
    piStack_90 = (int *)0x658ae;
    fVar6 = (float10)(**(code **)(*piStack_8c + 0x1c))();
    fStack_78 = (float)fVar6;
    piStack_80 = (int *)((float)param_1[0x20] - (float)param_1[0x2a]);
    fStack_28 = (float)piStack_80 * fStack_78;
    iStack_24 = (int)fStack_28;
    if ((char)param_1[0x2d] != '\0') {
      iStack_24 = iStack_24 + *(int *)(param_1[0x26] + 0x44);
      *(undefined1 *)(param_1 + 0x2d) = 0;
      fStack_7c = (float)param_1[0x1d];
      fStack_28 = (float)param_1[0x1c];
      param_1[0x27] = param_1[0x1b];
      param_1[0x28] = (int)fStack_28;
      param_1[0x29] = (int)fStack_7c;
    }
    piStack_90 = *(int **)(param_1[0x26] + 0x3c);
    ppiStack_94 = (int **)0x6592a;
    iVar3 = (**(code **)(*piStack_90 + 0x38))();
    if (0 < iVar3) {
      ppiStack_94 = &piStack_2c;
      piStack_2c = (int *)0x0;
      fStack_98 = 0.0;
      (**(code **)(**(int **)(param_1[0x26] + 0x3c) + 0x24))(*(int **)(param_1[0x26] + 0x3c));
      iVar3 = (**(code **)(*piStack_38 + 0x14))(piStack_38);
      fVar5 = 0.0;
      if (0 < iVar3) {
        do {
          ppiStack_94 = &piStack_80;
          fStack_98 = fVar5;
          iVar4 = (**(code **)(*piStack_2c + 0x2c))(piStack_2c);
          if ((iVar4 == 0) && ((float)param_1[0x2a] <= (float)piStack_80)) {
            if ((float)param_1[0x20] < (float)piStack_80) break;
            ppiStack_94 = (int **)&fStack_48;
            fStack_48 = 0.0;
            pfStack_44 = (float *)0x0;
            fStack_40 = 0.0;
            fStack_98 = fVar5;
            iVar4 = (**(code **)(*piStack_2c + 0x30))(piStack_2c);
            if (iVar4 == 0) {
              fStack_28 = (float)(int)((float)(int)fStack_28 + fStack_48);
            }
          }
          fVar5 = (float)((int)fVar5 + 1);
        } while ((int)fVar5 < iVar3);
      }
      if (piStack_2c != (int *)0x0) {
        ppiStack_94 = (int **)piStack_2c;
        fStack_98 = 5.83272e-40;
        (**(code **)(*piStack_2c + 8))();
      }
    }
    ppiStack_94 = (int **)param_1[0x23];
    piVar10 = *(int **)(param_1[0x26] + 0x48);
    fStack_98 = (float)param_1[0x22];
    fVar6 = (float10)(**(code **)(*piVar10 + 0x1c))();
    piStack_38 = (int *)(float)(fVar6 * (float10)iStack_34);
    iVar3 = (int)(fVar6 * (float10)iStack_34);
    iStack_34 = iVar3;
    if (iVar3 == 0) {
      if (fStack_88 == 0.0) {
        param_1[0x2a] = param_1[0x20];
      }
      if ((*(byte *)(param_1 + 1) & 1) != 0) {
        (**(code **)(*param_1 + 0xa4))(param_1,0);
        return 0;
      }
    }
    else {
      piVar9 = param_1 + 0x2e;
      piVar8 = param_1;
      (**(code **)(*param_1 + 0x48))(param_1,param_1[0x25],piVar9);
      FUN_000a0c60();
      ppiStack_94 = (int **)(1.0 / (float)(int)fStack_40);
      fStack_78 = (float)ppiStack_94 * (float)piStack_90;
      piStack_74 = (int *)((float)ppiStack_94 * (float)piStack_8c);
      piStack_70 = (int *)((float)ppiStack_94 * fStack_88);
      param_1[0x29] = param_1[0x1d];
      param_1[0x27] = param_1[0x1b];
      param_1[0x28] = param_1[0x1c];
      fStack_40 = 0.0;
      pfStack_44 = (float *)0x0;
      fStack_84 = 0.0;
      piStack_80 = (int *)0x0;
      fStack_7c = 0.0;
      if (0.0 < (float)piVar10) {
        auVar7 = rcpss(ZEXT416((uint)-(float)piVar10),ZEXT416((uint)-(float)piVar10));
        fStack_64 = auVar7._0_4_;
        fStack_6c = fStack_64 * (float)piStack_90;
        piStack_68 = (int *)(fStack_64 * (float)piStack_8c);
        fStack_64 = fStack_64 * fStack_88;
        pfStack_44 = (float *)&stack0xffffffa0;
        fStack_40 = fStack_64;
        fVar6 = (float10)(**(code **)(**(int **)(param_1[0x26] + 0x40) + 0x1c))
                                   (*(int **)(param_1[0x26] + 0x40),param_1[0x22],param_1[0x20]);
        fStack_40 = (float)fVar6;
        pfVar1 = pfStack_44 + 1;
        fStack_84 = fStack_40 * *pfStack_44;
        pfStack_44 = (float *)(fStack_40 * (float)*(undefined8 *)pfVar1);
        fStack_7c = fStack_40 * (float)((ulonglong)*(undefined8 *)pfVar1 >> 0x20);
        fStack_4c = fStack_7c;
      }
      fStack_98 = (float)ppiStack_94 * (float)piVar10;
      piStack_80 = (int *)pfStack_44;
      pfStack_44 = (float *)piVar10;
      iVar4 = (**(code **)(*(int *)param_1[0x25] + 0x2c))((int *)param_1[0x25]);
      if (iVar4 == param_1[2]) {
        fStack_98 = 0.0;
        fStack_78 = 0.0;
        pfStack_44 = (float *)0x0;
        fStack_7c = 0.0;
        piStack_74 = (int *)0x0;
        ppiStack_94 = (int **)0x0;
        piStack_90 = (int *)0x0;
        piStack_8c = (int *)0x0;
      }
      (**(code **)(*(int *)param_1[0x25] + 0xb0))((int *)param_1[0x25]);
      if (0 < iVar3) {
        do {
          fStack_4c = fStack_4c - (float)piVar9;
          fStack_98 = fStack_98 - (float)piStack_80;
          ppiStack_94 = (int **)((float)ppiStack_94 - fStack_7c);
          piStack_90 = (int *)((float)piStack_90 - fStack_78);
          (**(code **)(*param_1 + 0xc0))(fStack_4c,&fStack_98,&piStack_8c);
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      (**(code **)(*(int *)param_1[0x25] + 0xbc))((int *)param_1[0x25]);
      param_1[0x2a] = (int)((float)piVar8 + (float)param_1[0x2a]);
      if ((*(byte *)(param_1 + 1) & 1) != 0) {
        (**(code **)(*param_1 + 0xa4))(param_1,0);
        return 0;
      }
    }
  }
  else {
    fStack_6c = 0.0;
    piStack_70 = param_1;
    piStack_74 = (int *)0x65d35;
    (**(code **)(*param_1 + 0xa4))();
  }
  return 0;
}
