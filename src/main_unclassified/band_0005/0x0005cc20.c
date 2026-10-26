/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F5F1F24990FFC65F349C7884F6F6618D8D2A9C31D7006698D63482A69AEF5308
 * Entry: 0x0005cc20, Ghidra index: 959, label: FUN_0005cc20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0005cc20(int param_1,int *param_2,int *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  int *piVar12;
  int *piVar13;
  int iVar14;
  float *pfVar15;
  int **ppiVar16;
  undefined4 uVar17;
  int *piStack_40;
  int iStack_38;
  int *piStack_34;
  int *apiStack_30 [3];
  float guest_delta_z; /* 0x0005CCB2 FSTP DWORD [ESP+0x28] */
  float guest_delta_x; /* 0x0005CCAC FSTP DWORD [ESP+0x24] */
  int *piStack_1c;
  int *piStack_18;
  undefined4 uStack_14;
  int *piStack_c;
  int *piStack_8;
  undefined4 uStack_4;
  
  piVar7 = param_2;
  bVar6 = false;
  bVar5 = false;
  if (param_2 == param_3) {
    return;
  }
  if (param_2 == (int *)0x0) {
    return;
  }
  if (param_3 == (int *)0x0) {
    return;
  }
  if ((*(byte *)(param_1 + 0x40) & 2) == 0) goto LAB_0005d1b6;
  iVar8 = (**(code **)(*param_2 + 0xf4))();
  piStack_c = (int *)0x0;
  piStack_8 = (int *)0x0;
  uStack_4 = 0;
  piStack_1c = (int *)0x0;
  piStack_18 = (int *)0x0;
  uStack_14 = 0;
  iVar9 = (**(code **)(*param_3 + 0x40))();
  iVar10 = (**(code **)(*param_2 + 0x40))();
  guest_delta_z = *(float *)(iVar10 + 0x2c) - *(float *)(iVar9 + 0x2c);
  bVar4 = false;
  fVar1 = *(float *)(iVar10 + 0x28) - *(float *)(iVar9 + 0x28);
  guest_delta_x = *(float *)(iVar10 + 0x24) - *(float *)(iVar9 + 0x24);
  /* The draft's apiStack_30[0] assignment was a spurious Ghidra
   * overlap of the saved z float, not a distinct guest pointer write. */
  if (2500.0 < fVar1 * fVar1 +
               guest_delta_z * guest_delta_z + guest_delta_x * guest_delta_x) {
    bVar4 = true;
    FUN_0001b650();
    FUN_0001b650();
    if ((iVar8 != 0) && (*(int *)(iVar8 + 0x58) != 3)) {
      FUN_0004e8f0();
      *(undefined4 *)(iVar8 + 0x58) = 3;
      FUN_00018000();
      FUN_00039f00(iVar8);
      FUN_00055b50();
      FUN_00015fe0();
      FUN_0001a4e0();
      iVar9 = FUN_000120f0();
      if ((iVar9 != 0) && (iVar9 = FUN_000120f0(), *(int *)(iVar9 + 0x59c) != 0)) {
        FUN_000120f0();
        uVar17 = 1;
        uVar11 = FUN_000120f0(1);
        FUN_0005e8b0(uVar11,uVar17);
      }
    }
    piVar12 = (int *)FUN_0005c040();
    piStack_34 = piVar12;
    if (piVar12 != (int *)0x0) {
      apiStack_30[0] = (int *)((int)piStack_40 + -1);
      iStack_38 = (int)piStack_40 * 4 + -4;
      do {
        piStack_34 = piVar12;
        piVar13 = (int *)FUN_0005bca0();
        if (((((piVar13 == param_2) || (piVar13 = (int *)FUN_0005bc50(), piVar13 == param_2)) &&
             (piVar12 != param_3)) && (iVar9 = (**(code **)(*piVar12 + 0xf4))(), iVar9 != 0)) &&
           ((*(int *)(iVar9 + 0x58) == 4 || (*(int *)(iVar9 + 0x58) == 1)))) {
          iVar10 = param_2[0x93];
          param_2[0x94] = param_2[0x94] | 1;
          if (iVar10 == 0) {
LAB_0005cf2a:
            if (*(int *)(iVar9 + 0x58) != 3) {
              FUN_0004e8f0();
              *(undefined4 *)(iVar9 + 0x58) = 3;
              FUN_00018000();
              FUN_00039f00(iVar9);
              FUN_00055b50();
              FUN_00015fe0();
              FUN_0001a4e0();
              iVar9 = FUN_000120f0();
              if ((iVar9 != 0) && (iVar9 = FUN_000120f0(), *(int *)(iVar9 + 0x59c) != 0)) {
                FUN_000120f0();
                uVar17 = 1;
                uVar11 = FUN_000120f0(1);
                FUN_0005e8b0(uVar11,uVar17);
              }
            }
          }
          else {
            iVar14 = (**(code **)(*piVar12 + 0x40))();
            pfVar15 = (float *)(**(code **)(*(int *)(iVar10 + 8) + 4))();
            fVar1 = pfVar15[2] - *(float *)(iVar14 + 0x2c);
            fVar3 = pfVar15[1] - *(float *)(iVar14 + 0x28);
            fVar2 = *pfVar15 - *(float *)(iVar14 + 0x24);
            if (fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2 <= 25.0) goto LAB_0005cf2a;
            *(int *)(iVar9 + 0x8ac) = iVar10;
            FUN_0004e8f0();
            *(undefined4 *)(iVar9 + 0x58) = 5;
            FUN_00018000();
            FUN_00039f00(iVar9);
            FUN_00055b50();
            FUN_00015fe0();
            FUN_0001a4e0();
            iVar9 = FUN_000120f0();
            if ((iVar9 != 0) && (iVar9 = FUN_000120f0(), *(int *)(iVar9 + 0x59c) != 0)) {
              FUN_000120f0();
              uVar17 = 1;
              uVar11 = FUN_000120f0(1);
              FUN_0005e8b0(uVar11,uVar17);
            }
          }
          FUN_001611d0();
        }
        if (piStack_40 < *(int **)(param_1 + 4)) {
          piStack_40 = (int *)((int)piStack_40 + 1);
          iStack_38 = iStack_38 + 4;
          apiStack_30[0] = (int *)((int)apiStack_30[0] + 1);
          if (apiStack_30[0] < *(int **)(param_1 + 4)) {
            iVar9 = *(int *)(iStack_38 + *(int *)(param_1 + 8));
          }
          else {
            iVar9 = 0;
          }
          piVar12 = *(int **)(iVar9 + 4);
        }
        else {
          piVar12 = (int *)0x0;
        }
        piStack_34 = piVar12;
      } while (piVar12 != (int *)0x0);
    }
  }
  iVar9 = 0;
  piVar12 = piStack_1c;
  if (((*(byte *)(param_2 + 0x1c) & 1) == 0) && (iVar8 != 0)) {
    iVar8 = *(int *)(iVar8 + 0x58);
    if (iVar8 == 1) {
      uVar11 = 0xf415ab02;
    }
    else if (iVar8 == 3) {
      if (bVar4) {
        uVar11 = 0xe635ecc6;
      }
      else {
        uVar11 = 0xe69bfe5;
      }
    }
    else {
      if (iVar8 != 4) goto LAB_0005d083;
      uVar11 = 0x15dc4e2d;
    }
    iVar9 = FUN_00140a60(*(undefined4 *)(param_2[2] + 0xbe8),param_2,uVar11,0);
    piVar12 = piStack_1c;
  }
LAB_0005d083:
  while (piVar12 != piStack_18) {
    if (*piVar12 == 0) {
LAB_0005d0cb:
      piVar12 = piVar12 + 1;
    }
    else {
      if (iVar9 == 0) {
        iVar9 = FUN_00140a60(*(undefined4 *)(param_2[2] + 0xbe8),param_2,0xe635ecc6,0);
        goto LAB_0005d0cb;
      }
      FUN_00140060(iVar9,*piVar12,1,param_2);
      piVar12 = piVar12 + 1;
    }
  }
  bVar4 = false;
  for (piVar12 = piStack_c; piVar12 != piStack_8; piVar12 = piVar12 + 1) {
    if (*piVar12 != 0) {
      if (bVar4) {
        bVar6 = true;
        apiStack_30[0] = (int *)0xe97ce7fd;
        ppiVar16 = apiStack_30;
      }
      else {
        bVar5 = true;
        piStack_34 = (int *)0xed05c0d7;
        ppiVar16 = &piStack_34;
      }
      if (bVar5) {
        bVar5 = false;
      }
      if (bVar6) {
        bVar6 = false;
      }
      if (iVar9 == 0) {
        if (bVar4) goto LAB_0005d180;
        iVar9 = FUN_00140a60(*(undefined4 *)(*(int *)(*piVar12 + 8) + 0xbe8),*piVar12,*ppiVar16,0);
      }
      else {
        FUN_00140060(iVar9,*piVar12,1,param_2);
      }
      if (iVar9 != 0) {
        bVar4 = true;
      }
    }
LAB_0005d180:
  }
  if (piStack_1c != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(piStack_1c);
  }
  if (piStack_c != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(piStack_c);
  }
LAB_0005d1b6:
  FUN_0005cbc0(param_2,param_3);
  param_2 = (int *)0x0;
  if (*(int *)(param_1 + 4) != 0) {
    if (*(int *)(param_1 + 4) != 0) goto LAB_0005d1d4;
    iVar8 = 0;
    while( true ) {
      if ((*(int **)(iVar8 + 0xc) == piVar7) || (*(int **)(iVar8 + 4) == piVar7)) {
        if (*(int **)(iVar8 + 0xc) != param_3) {
          FUN_0008f6a0(param_3);
        }
        *(byte *)(iVar8 + 0x20) = *(byte *)(iVar8 + 0x20) & 0xfe;
      }
      param_2 = (int *)((int)param_2 + 1);
      if (*(uint *)(param_1 + 4) <= param_2) break;
LAB_0005d1d4:
      iVar8 = *(int *)(*(int *)(param_1 + 8) + (int)param_2 * 4);
    }
  }
  return;
}
