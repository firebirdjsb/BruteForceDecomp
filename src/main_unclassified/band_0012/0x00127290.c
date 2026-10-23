/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2C6A17065DAFF5BF5577BB3B0CF183C6F146EA74F8EEFBA2059770C95BB7FF0F
 * Entry: 0x00127290, Ghidra index: 3732, label: FUN_00127290
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040cbdc;
extern uint32_t DAT_0040cbe0;
extern uint32_t DAT_0040cbe4;
/* XBE 0x1278c6/8f0/8fe use [0x0040cbe8] as f32; 0x127995 loads it. */
extern float DAT_0040cbe8;
extern uint32_t DAT_0046d064;
extern uint32_t PTR_FUN_003bc650;
extern uint32_t PTR_LAB_0038e620;
void FUN_00127290(int *param_1)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  char cVar8;
  float *pfVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  int iVar12;
  int *piVar13;
  int *piVar14;
  int *piVar15;
  int iVar16;
  int extraout_EDX;
  int iVar17;
  int iVar18;
  uint uVar19;
  int unaff_retaddr;
  int iStack_58;
  int iStack_54;
  int *piStack_50;
  int iStack_48;
  int iStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  int iStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int *piStack_20;
  int *piStack_1c;
  undefined4 uStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  undefined4 uStack_8;
  
  if ((*(byte *)(param_1 + 0x1f6) & 1) == 0) {
    *(byte *)(param_1 + 0x1f6) = *(byte *)(param_1 + 0x1f6) & 0xfd | 1;
    (**(code **)(*param_1 + 0xb8))(0x3f800000);
    if ((param_1[0x7c] == 2) || (param_1[0x7c] == 3)) {
      fStack_38 = (float)param_1[0x1bd];
      fStack_3c = (float)param_1[0x1bc];
      fStack_40 = (float)param_1[0x1bb];
    }
    else {
      pfVar9 = (float *)(**(code **)(*param_1 + 0x54))();
      fStack_38 = pfVar9[2];
      fStack_3c = pfVar9[1];
      fStack_40 = *pfVar9;
    }
    fVar2 = fStack_40 * fStack_40;
    fVar4 = fStack_3c * fStack_3c;
    fVar3 = fStack_38 * fStack_38;
    FUN_0012bfa0();
    if (param_1[0xba] != 0) {
      FUN_0014dfd0();
      if ((*(int *)(param_1[0xba] + 0x1ac) == 0) ||
         (cVar8 = (**(code **)(*(int *)param_1[0x169] + 0x70))(*(int *)(param_1[0xba] + 0x1ac)),
         cVar8 == '\0')) {
        if (*(int **)(param_1[0xba] + 0x1ac) != (int *)0x0) {
          (**(code **)(**(int **)(param_1[0xba] + 0x1ac) + 0x38))();
        }
      }
      else {
        (**(code **)(**(int **)(param_1[0xba] + 0x1ac) + 0x34))(1);
      }
      (**(code **)(*(int *)(param_1[0xba] + 0x110) + 0x38))();
      (**(code **)(*(int *)(param_1[0xba] + 0x144) + 0x38))();
      (**(code **)(*(int *)param_1[0xba] + 0x38))();
      (**(code **)(*(int *)(param_1[0xba] + 0x44) + 0x38))();
    }
    if (param_1[0x87] != 0) {
      FUN_00234470();
    }
    FUN_00117480();
    if ((param_1[0x16e] != 0) && (*(int *)(param_1[0x16e] + 0x48) != 0)) {
      FUN_00234470();
    }
    FUN_0023d3a0();
    iVar17 = 0;
    do {
      FUN_0011fcd0();
      iVar17 = iVar17 + 1;
    } while (iVar17 < 4);
    iVar17 = param_1[0x1b];
    *(uint *)(iVar17 + 0x44) = *(uint *)(iVar17 + 0x44) | 0x20;
    if (*(int *)(iVar17 + 0x4c) == 0) {
      iVar16 = 0;
    }
    else {
      iVar16 = *(int *)(iVar17 + 0x50) - *(int *)(iVar17 + 0x4c) >> 2;
    }
    iVar18 = 0;
    if (0 < iVar16) {
      do {
        FUN_00127160(*(undefined4 *)(*(int *)(iVar17 + 0x4c) + iVar18 * 4));
        iVar18 = iVar18 + 1;
      } while (iVar18 < extraout_EDX);
    }
    iVar17 = FUN_002ea01d(0x2c);
    if (iVar17 == 0) {
      iVar17 = 0;
    }
    else {
      iVar17 = FUN_003026e0(&iStack_48);
    }
    param_1[0x141] = iVar17;
    piStack_50 = (int *)param_1[0x136];
    piStack_20 = (int *)0x0;
    piStack_1c = (int *)0x0;
    uStack_18 = 0;
    if (piStack_50 != (int *)param_1[0x137]) {
      do {
        piVar13 = (int *)*piStack_50;
        iStack_54 = piVar13[2];
        if ((*(uint *)(iStack_54 + 0x70) & 0x300) != 0) {
          if (*(int **)(iStack_54 + 0x84) != (int *)0x0) {
            (**(code **)(**(int **)(iStack_54 + 0x84) + 0x10))(1);
          }
          *(undefined4 *)(iStack_54 + 0x84) = 0;
          *(uint *)(iStack_54 + 0x70) = *(uint *)(iStack_54 + 0x70) & 0xfffffcff;
          FUN_002b32b0(iStack_54,1);
        }
        (**(code **)(*piVar13 + 8))();
        if ((*(uint *)(iStack_54 + 0x70) & 0x300) == 0) {
          if (*(int **)(iStack_54 + 0x84) != (int *)0x0) {
            (**(code **)(**(int **)(iStack_54 + 0x84) + 0x10))(1);
          }
          *(undefined4 *)(iStack_54 + 0x84) = 0;
          puVar10 = (undefined4 *)FUN_002ea01d(0x34);
          if (puVar10 == (undefined4 *)0x0) {
            puVar10 = (undefined4 *)0x0;
          }
          else {
            *puVar10 = &PTR_LAB_0038e620;
            puVar10[7] = 0;
            *(undefined2 *)(puVar10 + 10) = 0x10;
            *(undefined2 *)((int)puVar10 + 0x2a) = 0;
            *(undefined2 *)(puVar10 + 0xc) = 1;
            uVar11 = (*(code *)PTR_FUN_003bc650)(0x40);
            puVar10[0xb] = uVar11;
            puVar10[2] = 0;
            puVar10[6] = 0;
            puVar10[5] = 0;
            puVar10[4] = 0;
            puVar10[8] = 0xbf800000;
            puVar10[9] = iStack_54;
            puVar10[3] = 0;
          }
          *(undefined4 **)(iStack_54 + 0x84) = puVar10;
          FUN_002bfdd0(iStack_54);
          *(uint *)(iStack_54 + 0x70) = *(uint *)(iStack_54 + 0x70) & 0xfffffdff | 0x100;
        }
        iVar17 = *(int *)(piVar13[3] + 0x10);
        if (iVar17 == 0) {
          iVar17 = 0;
        }
        else {
          iVar17 = *(int *)(iVar17 + 100);
        }
        bVar7 = false;
        iStack_58 = piVar13[3];
        do {
          iVar16 = iVar17;
          if ((iVar16 == 0) || (iVar16 == -1)) break;
          piVar13 = *(int **)(unaff_retaddr + 0x4d8);
          iVar18 = 0;
          piVar15 = piStack_20;
          if (piVar13 == *(int **)(unaff_retaddr + 0x4dc)) {
joined_r0x00127633:
            for (; piVar15 != piStack_1c; piVar15 = piVar15 + 3) {
              if (*piVar15 == iVar16) {
                iVar18 = piVar15[1];
                if (piVar15 != piStack_1c) goto LAB_00127728;
                break;
              }
            }
            piVar15 = *(int **)(*(int *)(unaff_retaddr + 0xc) + 0x19c);
            for (piVar13 = *(int **)(*(int *)(unaff_retaddr + 0xc) + 0x198); piVar13 != piVar15;
                piVar13 = piVar13 + 2) {
              piVar14 = *(int **)(iVar16 + 0xc);
              if (piVar14 == (int *)0x0) {
                piVar14 = &DAT_0046d064;
              }
              if (*piVar13 == *piVar14) {
                if (piVar13 != piVar15) {
                  iVar18 = FUN_00114d00(iVar16,0x3f800000);
                }
                break;
              }
            }
            if ((iVar18 == 0) &&
               (iVar18 = FUN_00114b80(unaff_retaddr,iVar16,0x3f800000,0x3d4ccccd),
               (*(uint *)(iVar18 + 0x70) & 0x300) != 0)) {
              if (*(int **)(iVar18 + 0x84) != (int *)0x0) {
                (**(code **)(**(int **)(iVar18 + 0x84) + 0x10))(1);
              }
              *(undefined4 *)(iVar18 + 0x84) = 0;
              *(uint *)(iVar18 + 0x70) = *(uint *)(iVar18 + 0x70) & 0xfffffcff;
              FUN_002b32b0(iVar18,1);
            }
            iVar17 = *(int *)(unaff_retaddr + 0x4f8);
            iStack_48 = iVar16;
            iStack_44 = iVar18;
            iVar12 = FUN_00129e30(unaff_retaddr + 0x4f4,iVar17,*(undefined4 *)(iVar17 + 4));
            FUN_000389d0();
            *(int *)(iVar17 + 4) = iVar12;
            **(int **)(iVar12 + 4) = iVar12;
          }
          else {
            do {
              if (*(int *)(*piVar13 + 0xc) == iVar16) {
                iVar18 = *(int *)(*piVar13 + 8);
              }
              piVar13 = piVar13 + 1;
            } while (piVar13 != *(int **)(unaff_retaddr + 0x4dc));
            if (iVar18 == 0) goto joined_r0x00127633;
LAB_00127728:
            bVar7 = true;
          }
          if (iVar16 == *(int *)(unaff_retaddr + 0x6c)) {
            *(int *)(unaff_retaddr + 0x500) = iVar18;
          }
          FUN_00113120(unaff_retaddr,*(undefined4 *)(unaff_retaddr + 8),iVar16,
                       *(undefined4 *)(iStack_58 + 0x10));
          iStack_30 = iStack_54;
          iStack_34 = iStack_58;
          FUN_00129750(&iStack_34);
          iStack_34 = -1;
          iStack_30 = 0;
          if (*(int *)(iVar16 + 0x10) == 0) {
            iVar17 = 0;
          }
          else {
            iVar17 = *(int *)(*(int *)(iVar16 + 0x10) + 100);
          }
          iStack_58 = iVar16;
          iStack_54 = iVar18;
        } while (!bVar7);
        piStack_50 = piStack_50 + 1;
      } while (piStack_50 != *(int **)(unaff_retaddr + 0x4dc));
    }
    piVar13 = *(int **)(unaff_retaddr + 0x4d8);
    if (piVar13 != *(int **)(unaff_retaddr + 0x4dc)) {
      do {
        iVar17 = *(int *)(*(int *)(unaff_retaddr + 8) + 0xa44);
        piVar15 = *(int **)(iVar17 + 0x2c);
        puVar10 = (undefined4 *)*piVar13;
        if (piVar15 != *(int **)(iVar17 + 0x30)) {
LAB_00127800:
          if ((undefined4 *)*piVar15 != puVar10) goto code_r0x00127804;
          piVar1 = *(int **)(iVar17 + 0x30);
          piVar14 = piVar15 + 1;
          if (piVar14 != piVar1) {
            iVar16 = (int)piVar15 - (int)piVar14;
            do {
              *(int *)(iVar16 + (int)piVar14) = *piVar14;
              piVar14 = piVar14 + 1;
            } while (piVar14 != piVar1);
          }
          *(int *)(iVar17 + 0x30) = *(int *)(iVar17 + 0x30) + -4;
        }
LAB_00127830:
        iVar17 = puVar10[2];
        if ((int *)puVar10[1] != (int *)0x0) {
          (**(code **)(*(int *)puVar10[1] + 0x18))(1);
        }
        iStack_48 = puVar10[3];
        iVar16 = *(int *)(unaff_retaddr + 0x4f8);
        iStack_44 = iVar17;
        iVar17 = FUN_00129e30(unaff_retaddr + 0x4f4,iVar16,*(undefined4 *)(iVar16 + 4));
        FUN_000389d0();
        *(int *)(iVar16 + 4) = iVar17;
        **(int **)(iVar17 + 4) = iVar17;
        (**(code **)*puVar10)(1);
        piVar13 = piVar13 + 1;
      } while (piVar13 != *(int **)(unaff_retaddr + 0x4dc));
    }
    if (*(int *)(unaff_retaddr + 0x4d8) != 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(*(int *)(unaff_retaddr + 0x4d8));
    }
    *(undefined4 *)(unaff_retaddr + 0x4d8) = 0;
    fStack_14 = fStack_40 * DAT_0040cbe8;
    *(undefined4 *)(unaff_retaddr + 0x4dc) = 0;
    *(undefined4 *)(unaff_retaddr + 0x4e0) = 0;
    uStack_8 = 0;
    fStack_10 = fStack_3c * DAT_0040cbe8;
    fStack_c = fStack_38 * DAT_0040cbe8;
    if (*(undefined4 **)(unaff_retaddr + 0x4f8) == (undefined4 *)0x0) {
      piStack_50 = (int *)0x0;
    }
    else {
      piStack_50 = (int *)**(undefined4 **)(unaff_retaddr + 0x4f8);
    }
    if (piStack_50 != *(int **)(unaff_retaddr + 0x4f8)) {
      do {
        iVar17 = piStack_50[3];
        *(undefined4 *)(*(int *)(iVar17 + 0x90) + 0x44) = DAT_0040cbe0;
        uVar11 = DAT_0040cbdc;
        iVar16 = *(int *)(iVar17 + 0x90);
        *(undefined4 *)(iVar16 + 0x24) = DAT_0040cbdc;
        *(undefined4 *)(iVar16 + 0x28) = uVar11;
        *(undefined4 *)(iVar16 + 0x2c) = uVar11;
        fVar5 = DAT_0040cbe4;
        if (iVar17 == *(int *)(unaff_retaddr + 0x500)) {
LAB_001279c1:
          iVar16 = *(int *)(iVar17 + 0x90);
          *(float *)(iVar16 + 0x18) = DAT_0040cbe4;
          *(float *)(iVar16 + 0x14) = fVar5;
          *(float *)(iVar16 + 0x1c) = fVar5;
          FUN_002bb410(iVar16);
          iVar16 = *(int *)(iVar17 + 0x90);
          fVar5 = DAT_0040cbe8 / *(float *)(iVar16 + 0x20);
          *(float *)(iVar16 + 0x20) = DAT_0040cbe8;
          *(float *)(iVar16 + 0x14) = fVar5 * *(float *)(iVar16 + 0x14);
          *(float *)(iVar16 + 0x18) = fVar5 * *(float *)(iVar16 + 0x18);
          *(float *)(iVar16 + 0x1c) = fVar5 * *(float *)(iVar16 + 0x1c);
        }
        else {
          if (*(int *)(piStack_50[2] + 0x10) == 0) {
            iVar16 = 0;
          }
          else {
            iVar16 = *(int *)(*(int *)(piStack_50[2] + 0x10) + 100);
          }
          if (iVar16 == *(int *)(unaff_retaddr + 0x6c)) goto LAB_001279c1;
          iVar16 = *(int *)(iVar17 + 0x90);
          fVar5 = DAT_0040cbe4 * 0.5;
          *(float *)(iVar16 + 0x14) = fVar5;
          *(float *)(iVar16 + 0x18) = fVar5;
          *(float *)(iVar16 + 0x1c) = fVar5;
          FUN_002bb410(iVar16);
          iVar16 = *(int *)(iVar17 + 0x90);
          fVar5 = DAT_0040cbe8 * 0.5;
          fVar6 = fVar5 / *(float *)(iVar16 + 0x20);
          *(float *)(iVar16 + 0x14) = fVar6 * *(float *)(iVar16 + 0x14);
          *(float *)(iVar16 + 0x18) = fVar6 * *(float *)(iVar16 + 0x18);
          *(float *)(iVar16 + 0x1c) = fVar6 * *(float *)(iVar16 + 0x1c);
          *(float *)(iVar16 + 0x20) = fVar5;
        }
        FUN_002bb410(iVar16);
        FUN_002ba5e0(*(undefined4 *)(iVar17 + 0x90));
        if (0.0 < fVar3 + fVar4 + fVar2) {
          iVar16 = *(int *)(iVar17 + 0x90);
          uStack_28 = 0;
          iStack_30 = *(undefined4 *)(iVar16 + 0x130);
          uStack_2c = *(undefined4 *)(iVar16 + 0x134);
          iStack_34 = *(int *)(iVar16 + 300);
          FUN_002b3bc0(&iStack_34,&fStack_14);
        }
        iVar16 = *(int *)(iVar17 + 0x90);
        uVar19 = (uint)*(ushort *)(iVar16 + 0x162);
        do {
          uVar19 = uVar19 - 1;
          if ((int)uVar19 < 0) goto LAB_00127aa2;
          iVar18 = (**(code **)(**(int **)(*(int *)(iVar16 + 0x164) + uVar19 * 4) + 0x14))();
        } while (iVar18 != 1000);
        if ((int)uVar19 < 0) {
LAB_00127aa2:
          iVar16 = *(int *)(*(int *)(*(int *)(unaff_retaddr + 8) + 0xa44) + 0x1c);
          if ((iVar16 != 0) && (iVar17 = *(int *)(iVar17 + 0x90), iVar17 != 0)) {
            if (*(ushort *)(iVar17 + 0x160) <= *(ushort *)(iVar17 + 0x162)) {
              FUN_002ccf80();
            }
            *(int *)(*(int *)(iVar17 + 0x164) + (uint)*(ushort *)(iVar17 + 0x162) * 4) = iVar16;
            *(short *)(iVar17 + 0x162) = *(short *)(iVar17 + 0x162) + 1;
            iVar18 = *(int *)(iVar17 + 0x170);
            iVar12 = *(ushort *)(iVar18 + 0x22) - 1;
            if (-1 < iVar12) {
              puVar10 = (undefined4 *)(*(int *)(iVar18 + 0x24) + iVar12 * 4);
              do {
                if (*(int *)*puVar10 == iVar16) goto LAB_00127b66;
                iVar12 = iVar12 + -1;
                puVar10 = puVar10 + -1;
              } while (-1 < iVar12);
            }
            piVar13 = (int *)FUN_002ea01d(0x18);
            if (piVar13 == (int *)0x0) {
              piVar13 = (int *)0x0;
            }
            else {
              piVar13[2] = (int)(piVar13 + 4);
              *(undefined2 *)(piVar13 + 1) = 2;
              *(undefined2 *)((int)piVar13 + 6) = 0;
              *(undefined2 *)(piVar13 + 3) = 0;
            }
            *piVar13 = iVar16;
            if (*(ushort *)(iVar18 + 0x20) <= *(ushort *)(iVar18 + 0x22)) {
              FUN_002ccf80();
            }
            *(int **)(*(int *)(iVar18 + 0x24) + (uint)*(ushort *)(iVar18 + 0x22) * 4) = piVar13;
            *(short *)(iVar18 + 0x22) = *(short *)(iVar18 + 0x22) + 1;
LAB_00127b66:
            iVar12 = *(ushort *)(iVar18 + 0x22) - 1;
            if (-1 < iVar12) {
              puVar10 = (undefined4 *)(*(int *)(iVar18 + 0x24) + iVar12 * 4);
              do {
                if (*(int *)*puVar10 == iVar16) break;
                iVar12 = iVar12 + -1;
                puVar10 = puVar10 + -1;
              } while (-1 < iVar12);
            }
            iVar16 = *(int *)(*(int *)(iVar18 + 0x24) + iVar12 * 4);
            if (*(ushort *)(iVar16 + 4) <= *(ushort *)(iVar16 + 6)) {
              FUN_002ccf80();
            }
            *(int *)(*(int *)(iVar16 + 8) + (uint)*(ushort *)(iVar16 + 6) * 4) = iVar17;
            *(short *)(iVar16 + 6) = *(short *)(iVar16 + 6) + 1;
            FUN_002be0e0();
          }
        }
        piStack_50 = (int *)*piStack_50;
      } while (piStack_50 != (int *)*(int *)(unaff_retaddr + 0x4f8));
    }
    iVar17 = *(int *)(unaff_retaddr + 0x504);
    if (*(short *)(iVar17 + 0x26) != 0) {
      FUN_002bde70(*(undefined4 *)(*(int *)(iVar17 + 4) + 0x98),iVar17);
    }
    iVar17 = *(int *)(*(int *)(unaff_retaddr + 8) + 0xe0);
    iVar16 = FUN_000ff730(*(int *)(unaff_retaddr + 8) + 0xdc,iVar17,*(undefined4 *)(iVar17 + 4),
                          &stack0x00000000);
    FUN_000b2a50();
    piVar14 = piStack_1c;
    piVar15 = piStack_20;
    *(int *)(iVar17 + 4) = iVar16;
    **(int **)(iVar16 + 4) = iVar16;
    piVar13 = piStack_20;
    if (piStack_20 != (int *)0x0) {
      for (; piVar13 != piVar14; piVar13 = piVar13 + 3) {
        FUN_0010f870();
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(piVar15);
    }
  }
  return;
code_r0x00127804:
  piVar15 = piVar15 + 1;
  if (piVar15 == *(int **)(iVar17 + 0x30)) goto LAB_00127830;
  goto LAB_00127800;
}
