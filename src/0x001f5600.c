/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F7E0F7028630CB9E168D8FC5EFBCC31B1671F8FC95B24E61A07E11991D31EC54
 * Entry: 0x001f5600, Ghidra index: 7040, label: FUN_001f5600
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037bb28;
extern uint32_t DAT_003f7c58;
extern uint32_t DAT_003f7c5c;
extern uint32_t DAT_003f7c60;
extern uint32_t DAT_003f7d30;
extern uint32_t DAT_003f7d34;
extern uint32_t DAT_003f7f1c;
extern uint32_t DAT_0040d7d0;
extern uint32_t DAT_00469acc;
extern uint32_t DAT_00469acd;
extern uint32_t DAT_00469ace;
extern uint32_t DAT_00469acf;
extern uint32_t DAT_00469b20;
extern uint32_t DAT_0046d004;
extern uint32_t _DAT_003c0284;
extern uint32_t *_DAT_003f7d24;
extern uint32_t *_DAT_003f7d28;
extern uint32_t _DAT_003f7d2c;
/* WARNING: Removing unreachable block (ram,0x001f5af8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_001f5600(int param_1,int param_2)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  float *pfVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  char cVar10;
  float *pfVar11;
  int *piVar12;
  int iVar13;
  float *pfVar14;
  float10 fVar15;
  undefined1 in_XMM0 [16];
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  undefined4 uVar19;
  float fStack_87c;
  int *piStack_878;
  float *pfStack_874;
  int *piStack_870;
  float fStack_86c;
  float fStack_868;
  float fStack_864;
  float *pfStack_860;
  int *piStack_85c;
  float fStack_858;
  float fStack_854;
  int *piStack_850;
  float fStack_84c;
  int *piStack_848;
  float fStack_844;
  float fStack_840;
  float fStack_83c;
  float fStack_838;
  float fStack_834;
  undefined4 local_828;
  undefined4 local_824;
  undefined4 local_820;
  undefined4 local_81c;
  undefined4 local_818;
  undefined1 local_814;
  undefined4 local_810;
  undefined4 local_80c;
  undefined4 local_808;
  undefined4 local_804;
  undefined4 local_800;
  float local_7fc;
  undefined4 uStack_7f8;
  float fStack_7f4;
  float fStack_7f0;
  int iStack_7ec;
  float fStack_7e8;
  float fStack_7e4;
  undefined1 auStack_7e0 [8];
  undefined *local_7d8;
  int *local_7d4;
  int local_7d0;
  undefined4 *local_7cc;
  undefined4 *local_7c8;
  undefined4 local_7c4;
  undefined4 local_7c0;
  undefined4 local_7bc;
  undefined4 local_7b8;
  undefined4 local_7b4;
  undefined4 local_7b0;
  undefined4 local_7ac;
  byte local_7a8;
  undefined4 uStack_7a4;
  undefined4 uStack_7a0;
  undefined4 uStack_79c;
  float fStack_798;
  float fStack_794;
  float *pfStack_790;
  float fStack_78c;
  undefined4 uStack_788;
  undefined1 uStack_784;
  undefined4 uStack_780;
  int iStack_77c;
  float fStack_778;
  int iStack_774;
  float fStack_770;
  float fStack_76c;
  float fStack_768;
  float fStack_764;
  float fStack_760;
  float fStack_75c;
  undefined4 uStack_758;
  float fStack_754;
  float fStack_750;
  float fStack_74c;
  float fStack_748;
  float fStack_744;
  undefined4 uStack_740;
  float fStack_73c;
  float fStack_738;
  float fStack_734;
  undefined4 uStack_730;
  float fStack_72c;
  float fStack_728;
  float fStack_724;
  float fStack_720;
  undefined4 uStack_71c;
  float fStack_718;
  int iStack_714;
  float fStack_710;
  float fStack_70c;
  float fStack_708;
  undefined4 uStack_704;
  float fStack_700;
  int iStack_6fc;
  float *pfStack_6f8;
  float fStack_6f4;
  undefined4 uStack_6f0;
  float fStack_6ec;
  float fStack_6e8;
  float fStack_6e4;
  float fStack_6e0;
  float fStack_6dc;
  float fStack_6d8;
  undefined1 auStack_6d0 [4];
  float afStack_6cc [191];
  float afStack_3d0 [243];
  
  if (*(int *)(*(int *)(param_1 + 0x20) + 0x10) == 0) {
    return;
  }
  local_7c8 = &local_810;
  local_814 = 1;
  local_7fc = (float)CONCAT31(local_7fc._1_3_,1);
  local_7a8 = local_7a8 & 0xfe;
  local_7cc = &local_828;
  local_828 = 0;
  local_824 = 0xef44f398;
  local_820 = 0;
  local_81c = 0;
  local_818 = 0;
  local_810 = 0;
  local_80c = 0x65;
  local_808 = 0;
  local_804 = 0;
  local_800 = 0;
  local_7d8 = &DAT_0046d004;
  local_7d4 = (int *)0x0;
  local_7d0 = 0;
  local_7c4 = 0;
  local_7c0 = 0;
  local_7bc = 0;
  local_7b8 = 0;
  local_7b4 = 0;
  local_7b0 = 0;
  local_7ac = 0;
  uStack_7a4 = (**(code **)(*(int *)(*(int *)(param_2 + 0x8c) + 0x48) + 0xc))();
  uStack_7a0 = 0;
  uStack_79c = 0;
  fStack_798 = (float)(**(int **)(param_1 + 0x20) * 8 + 1);
  DAT_00469b20 = 0;
  fStack_794 = 1.0 / (float)(**(int **)(param_1 + 0x20) * 8 + 1);
  pfStack_790 = *(float **)(*(int *)(param_1 + 0x20) + 8);
  piStack_85c = (int *)(**(int **)(param_1 + 0x20) * 8 + 1);
  uStack_788 = 0;
  uStack_784 = 0;
  fStack_78c = 1.0 / ((float)(int)piStack_85c + (float)(int)piStack_85c);
  iStack_774 = *(int *)(param_2 + 0x8c);
  iVar7 = *(int *)(*(int *)(param_1 + 0x20) + 0x10);
  iVar13 = *(int *)(iVar7 + 0x18);
  uStack_7f8 = (float)CONCAT13(*(int *)(iStack_774 + 0xd8) == 0,(undefined3)uStack_7f8);
  if (iVar13 == 0) {
    piStack_848 = (int *)0x0;
  }
  else {
    piStack_848 = (int *)((*(int *)(iVar7 + 0x1c) - iVar13) / 0x2c);
  }
  iVar7 = *(int *)(param_1 + 0x68 + *(int *)(param_1 + 0x70) * 4);
  uVar3 = *(int *)(iVar7 + 0x14) - *(int *)(iVar7 + 0x10);
  if (*(uint *)(param_1 + 0x74) <= (((int)uVar3 < 1) - 1 & uVar3)) goto LAB_001f583e;
  uVar3 = *(int *)(param_1 + 0x70) + 1U & 0x80000001;
  if ((int)uVar3 < 0) {
    uVar3 = (uVar3 - 1 | 0xfffffffe) + 1;
  }
  *(uint *)(param_1 + 0x70) = uVar3;
  puVar1 = *(uint **)(param_1 + 0x68 + *(int *)(param_1 + 0x70) * 4);
  if (D3D8__D3D_g_pDevice != 0) {
    uVar3 = puVar1[2];
    if ((*puVar1 & 0x780000) == 0) {
      if (uVar3 == 0) goto LAB_001f5835;
      uVar19 = 0x10;
    }
    else {
      uVar3 = *(uint *)(D3D8__D3D_g_pDevice + 0x2c);
      uVar19 = 2;
    }
    D3D8LTCG__D3D_BlockOnTime(uVar3,uVar19);
  }
LAB_001f5835:
  puVar1[4] = 0;
  puVar1[3] = 0;
LAB_001f583e:
  DAT_0037bb28 = *(int *)(param_1 + 0x68 + *(int *)(param_1 + 0x70) * 4);
  piStack_878 = (int *)0xffffffff;
  if (DAT_0037bb28 == 0) {
    if (-1 < *(int *)(param_1 + 0x24)) {
      FUN_00372150();
    }
  }
  else {
    *(undefined4 *)(DAT_0037bb28 + 0xc) = *(undefined4 *)(DAT_0037bb28 + 0x10);
  }
  FUN_0036ff10();
  pfVar4 = (float *)(**(code **)(*(int *)(*(int *)(param_2 + 0x8c) + 0x48) + 0xc))();
  fStack_76c = *pfVar4;
  fStack_768 = pfVar4[1];
  fStack_764 = pfVar4[2];
  fStack_760 = 0.0;
  FUN_0036fe60(0xffffffb8,1);
  FUN_0036ff10();
  piStack_870 = (int *)0x5;
  if (piStack_848 != (int *)0x0) {
    fStack_7f4 = 0.0;
    pfStack_874 = (float *)0x0;
    fStack_7e4 = (float)piStack_848;
    do {
      FUN_0036ff10();
      piStack_85c = (int *)(*(int *)(*(int *)(param_1 + 0x20) + 0x5c) + (int)pfStack_874);
      iVar7 = *(int *)(*(int *)(*(int *)(param_1 + 0x20) + 0x10) + 0x18) + 0x18 + (int)fStack_7f4;
      iVar13 = *(int *)(iVar7 + 4);
      piVar12 = (int *)((int)piStack_870 + 1);
      if (iVar13 == 0) {
        fStack_844 = 0.0;
      }
      else {
        fStack_844 = (float)((*(int *)(iVar7 + 8) - iVar13) / 0x30);
      }
      piStack_848 = (int *)0x0;
      if (fStack_844 != 0.0) {
        do {
          piVar5 = piStack_848;
          piStack_870 = piVar12;
          uVar3 = FUN_0006e6b0(DAT_003f7f1c,&LAB_001f3710,
                               (uint)*(ushort *)(piStack_85c[1] + (int)piStack_848 * 2) * 0x40 +
                               *(int *)(param_1 + 0x18));
          iVar7 = DAT_0037bb28;
          if (((uVar3 & 1) == 0) && (piVar5 != (int *)0x0)) {
            if (piStack_878 == (int *)0xffffffff) {
              piStack_878 = piVar12;
            }
          }
          else {
            if (piStack_878 != (int *)0xffffffff) {
              iVar13 = *(int *)(*(int *)(param_1 + 0x20) + 0x7c);
              iVar8 = *(int *)(iVar13 + (int)piStack_870 * 4);
              iVar13 = *(int *)(iVar13 + (int)piStack_878 * 4);
              piVar12 = (int *)(*(int *)(param_1 + 0x28) + iVar13);
              if (DAT_0037bb28 == 0) {
LAB_001f5a52:
                if (piVar12 != (int *)0x0) {
                  if (iVar13 == iVar8) {
                    *piVar12 = 0x40100;
                  }
                  else {
                    *piVar12 = (*(uint *)(param_1 + 0x28) & 0xfffffff) + 1 + iVar8;
                  }
                  if (iVar7 == 0) {
                    iVar13 = *(int *)(D3D8__D3D_g_pDevice + 0x17c8);
                    *(uint *)(iVar13 + 0x100410) = *(uint *)(iVar13 + 0x100410) | 0x10000;
                    do {
                    } while ((*(uint *)(iVar13 + 0x100410) & 0x10000) != 0);
                  }
                }
              }
              else {
                puVar6 = (undefined4 *)(*(int *)(DAT_0037bb28 + 4) + *(int *)(DAT_0037bb28 + 0x10));
                uVar3 = *(int *)(DAT_0037bb28 + 0x10) + 0xc;
                puVar1 = (uint *)(DAT_0037bb28 + 0x14);
                *(uint *)(DAT_0037bb28 + 0x10) = uVar3;
                if (uVar3 <= *puVar1) {
                  *puVar6 = 4;
                  puVar6[1] = iVar13;
                  piVar12 = puVar6 + 2;
                  goto LAB_001f5a52;
                }
              }
              piStack_878 = (int *)0xffffffff;
              piVar12 = piStack_870;
            }
            iVar13 = *(int *)(*(int *)(*(int *)(param_1 + 0x20) + 0x7c) + (int)piVar12 * 4);
            puVar6 = (undefined4 *)(*(int *)(param_1 + 0x28) + iVar13);
            if (iVar7 != 0) {
              puVar6 = (undefined4 *)(*(int *)(iVar7 + 4) + *(int *)(iVar7 + 0x10));
              uVar3 = *(int *)(iVar7 + 0x10) + 0xc;
              *(uint *)(iVar7 + 0x10) = uVar3;
              if (*(uint *)(iVar7 + 0x14) < uVar3) goto LAB_001f5b38;
              *puVar6 = 4;
              puVar6[1] = iVar13;
              puVar6 = puVar6 + 2;
            }
            if ((puVar6 != (undefined4 *)0x0) && (*puVar6 = 0x40100, iVar7 == 0)) {
              iVar7 = *(int *)(D3D8__D3D_g_pDevice + 0x17c8);
              *(uint *)(iVar7 + 0x100410) = *(uint *)(iVar7 + 0x100410) | 0x10000;
              do {
              } while ((*(uint *)(iVar7 + 0x100410) & 0x10000) != 0);
            }
          }
LAB_001f5b38:
          piVar12 = (int *)((int)piVar12 + 1);
          piStack_848 = (int *)((int)piStack_848 + 1);
        } while (piStack_848 < (uint)fStack_844);
      }
      iVar7 = DAT_0037bb28;
      if (piStack_878 != (int *)0xffffffff) {
        iVar13 = *(int *)(*(int *)(param_1 + 0x20) + 0x7c);
        iVar8 = *(int *)(iVar13 + (int)piVar12 * 4);
        iVar13 = *(int *)(iVar13 + (int)piStack_878 * 4);
        piVar5 = (int *)(*(int *)(param_1 + 0x28) + iVar13);
        if (DAT_0037bb28 == 0) {
LAB_001f5b9f:
          if (piVar5 != (int *)0x0) {
            if (iVar13 == iVar8) {
              *piVar5 = 0x40100;
            }
            else {
              *piVar5 = (*(uint *)(param_1 + 0x28) & 0xfffffff) + 1 + iVar8;
            }
            if (iVar7 == 0) {
              iVar7 = *(int *)(D3D8__D3D_g_pDevice + 0x17c8);
              *(uint *)(iVar7 + 0x100410) = *(uint *)(iVar7 + 0x100410) | 0x10000;
              do {
              } while ((*(uint *)(iVar7 + 0x100410) & 0x10000) != 0);
            }
          }
        }
        else {
          puVar6 = (undefined4 *)(*(int *)(DAT_0037bb28 + 4) + *(int *)(DAT_0037bb28 + 0x10));
          uVar3 = *(int *)(DAT_0037bb28 + 0x10) + 0xc;
          puVar1 = (uint *)(DAT_0037bb28 + 0x14);
          *(uint *)(DAT_0037bb28 + 0x10) = uVar3;
          if (uVar3 <= *puVar1) {
            *puVar6 = 4;
            puVar6[1] = iVar13;
            piVar5 = puVar6 + 2;
            goto LAB_001f5b9f;
          }
        }
        piStack_878 = (int *)0xffffffff;
      }
      pfStack_874 = pfStack_874 + 4;
      fStack_7f4 = (float)((int)fStack_7f4 + 0x2c);
      fStack_7e4 = (float)((int)fStack_7e4 - 1);
      piStack_870 = piVar12;
    } while (fStack_7e4 != 0.0);
  }
  FUN_0036ff10();
  iVar7 = DAT_0037bb28;
  if (DAT_0037bb28 != 0) {
    iVar13 = *(int *)(DAT_0037bb28 + 0x10);
    iVar8 = *(int *)(DAT_0037bb28 + 4);
    uVar3 = *(uint *)(DAT_0037bb28 + 0x14);
    uVar9 = iVar13 + 4;
    DAT_0037bb28 = 0;
    *(uint *)(iVar7 + 0x10) = uVar9;
    if (uVar9 <= uVar3) {
      *(undefined4 *)(iVar8 + iVar13) = 0xffffffff;
    }
  }
  piStack_85c = (int *)0x1;
  FUN_0006a610(&piStack_85c);
  FUN_002386d0();
  D3D8LTCG__D3DDevice_RunPushBuffer_4(param_1 + 0x24);
  if (*(int *)(*(int *)(param_1 + 0x1c) + 0xc6c) < 3) {
    FUN_001f68f0(param_1);
  }
  FUN_00239670();
  piStack_85c = (int *)0x0;
  FUN_0006a610(&piStack_85c);
  DAT_003f7c58 = 0xffffffff;
  DAT_003f7c5c = 0xffffffff;
  DAT_003f7c60 = 0xffffffff;
  DAT_00469acc = 0;
  DAT_00469acd = 0;
  DAT_00469ace = 0;
  DAT_00469acf = 0;
  if (*(int *)(*(int *)(param_1 + 0x1c) + 0xc6c) < 3) {
    if (*(int *)(param_1 + 0x14) != 0) {
      FUN_001f7920(param_2,1);
      if (*(float *)(*(int *)(param_2 + 0x80) + 0xc58) < 0.18) {
        FUN_000d2240(*(undefined4 *)(*(int *)(param_2 + 0x80) + 0xa48),param_2);
      }
    }
    if (uStack_7f8._3_1_ != '\0') {
      iVar7 = *(int *)(*(int *)(param_1 + 0x20) + 0x10);
      iVar13 = *(int *)(iVar7 + 0x18);
      DAT_00469b20 = 1;
      if ((iVar13 != 0) &&
         (fStack_778 = (float)((*(int *)(iVar7 + 0x1c) - iVar13) / 0x2c), fStack_778 != 0.0)) {
        fStack_70c = *(float *)(*(int *)(param_1 + 0x20) + 0x5c);
        fVar17 = *(float *)(*(int *)(*(int *)(param_1 + 0x20) + 0x10) + 0x18);
        piStack_878 = (int *)0x0;
        puVar6 = *(undefined4 **)((int)fVar17 + 4);
        fStack_6f4 = fVar17;
        if ((puVar6 == (undefined4 *)0x0) ||
           (iVar7 = (**(code **)*puVar6)(puVar6,&DAT_0040d7d0,&piStack_878), iVar7 < 0)) {
          piVar12 = *(int **)((int)fVar17 + 4);
        }
        else {
          piVar12 = (int *)(**(code **)(*piStack_878 + 0x10))();
        }
        piStack_848 = piVar12;
        if (piVar12 != (int *)0x0) {
          fStack_778 = (float)((**(int **)((int)fVar17 + 0x1c) == 0x1d62e437) + 5);
          (**(code **)(*piVar12 + 0x1c))(piVar12,param_2);
          if (*(int *)((int)fVar17 + 0x1c) == 0) {
            fStack_864 = 0.0;
          }
          else {
            fStack_864 = (float)((*(int *)((int)fVar17 + 0x20) - *(int *)((int)fVar17 + 0x1c)) /
                                0x30);
          }
          fStack_7e4 = 0.0;
          if (fStack_864 != 0.0) {
            iStack_7ec = 0;
            do {
              iVar7 = iStack_77c;
              iVar13 = (uint)*(ushort *)(*(int *)(iStack_714 + 4) + (int)fStack_7e4 * 2) * 0x40 +
                       *(int *)(param_1 + 0x18);
              uVar3 = FUN_0006e6b0(DAT_003f7f1c,&LAB_001f3710,iVar13);
              if ((uVar3 & 1) != 0) {
                iVar8 = *(int *)(iStack_6fc + 0x1c) + iStack_7ec;
                *local_7d4 = iVar8 + 0x20;
                local_7d4[4] = *(int *)(iVar8 + 0x10);
                *(undefined4 *)(local_7d0 + 0xc) = *(undefined4 *)(iVar8 + 0x2c);
                *(undefined4 *)(local_7d0 + 0x10) = *(undefined4 *)(iVar8 + 4);
                pfStack_790 = afStack_3d0;
                FUN_001f3900(iVar13,&piStack_870,&fStack_87c);
                pfStack_860 = (float *)(**(code **)(*(int *)(iVar7 + 0x48) + 0xc))();
                fStack_7f0 = fStack_868 - pfStack_860[2];
                fStack_7f4 = fStack_86c - pfStack_860[1];
                uStack_7f8 = (float)piStack_870 - *pfStack_860;
                in_XMM0 = rsqrtss(in_XMM0,uStack_7f8 * uStack_7f8 +
                                          fStack_7f4 * fStack_7f4 + fStack_7f0 * fStack_7f0);
                local_7fc = in_XMM0._0_4_;
                uStack_7f8 = local_7fc * uStack_7f8;
                piVar12 = (int *)0x0;
                piStack_878 = (int *)0x0;
                piStack_85c = (int *)0x0;
                pfStack_874 = (float *)(*(int *)(iVar13 + 0x2c) + 4);
                fStack_7f4 = fStack_7f4 * local_7fc;
                fStack_7f0 = fStack_7f0 * local_7fc;
                pfVar4 = afStack_6cc;
                while (((*(int *)(iVar13 + 0x2c) != 0 &&
                        (piStack_85c <
                         (int *)(*(int *)(iVar13 + 0x30) - *(int *)(iVar13 + 0x2c) >> 3))) &&
                       ((int)piVar12 < 0x40))) {
                  piVar5 = (int *)*pfStack_874;
                  pfVar11 = pfVar4;
                  if (((piVar5 != (int *)0x0) &&
                      (bVar2 = *(byte *)(piVar5 + 0x25), (bVar2 & 0x40) != 0)) &&
                     (((bVar2 & 8) == 0 && ((bVar2 & 0x10) != 0)))) {
                    pfVar4[1] = (float)piVar5;
                    iVar7 = (**(code **)(*piVar5 + 0x40))();
                    fStack_840 = fStack_868 - *(float *)(iVar7 + 0x2c);
                    fStack_844 = fStack_86c - *(float *)(iVar7 + 0x28);
                    fVar17 = (float)piStack_870 - *(float *)(iVar7 + 0x24);
                    fStack_778 = SQRT(fVar17 * fVar17 +
                                      fStack_844 * fStack_844 + fStack_840 * fStack_840);
                    auVar18 = rcpss(ZEXT416((uint)fStack_778),ZEXT416((uint)fStack_778));
                    fVar16 = auVar18._0_4_;
                    piStack_848 = (int *)(fVar17 * fVar16);
                    fStack_844 = fStack_844 * fVar16;
                    fStack_840 = fStack_840 * fVar16;
                    uStack_730 = 0;
                    fStack_854 = ((float)piStack_848 * uStack_7f8 +
                                 fStack_844 * fStack_7f4 + fStack_840 * fStack_7f0) * 0.5 + 1.5;
                    fVar17 = 1.0 - *(float *)(piVar5[3] + 0x4c) * (float)piVar5[0x1e];
                    fStack_6e4 = 0.0;
                    if (0.0 <= fVar17) {
                      fStack_6e4 = fVar17;
                    }
                    fStack_728 = (float)piVar5[0x3e];
                    fStack_720 = (float)piVar5[0x3d];
                    fStack_718 = fStack_720;
                    if (fStack_720 <= fStack_728) {
                      fStack_718 = fStack_728;
                    }
                    fStack_708 = (float)piVar5[0x3c];
                    fStack_6ec = fStack_708;
                    if (fStack_708 <= fStack_718) {
                      fStack_6ec = fStack_718;
                    }
                    uStack_6f0 = 0;
                    *pfVar4 = fStack_6ec * fStack_6e4 * fStack_854;
                    fStack_858 = fStack_778 - fStack_87c;
                    fStack_75c = 0.0;
                    if (0.0 <= fStack_858) {
                      fStack_75c = fStack_858;
                    }
                    in_XMM0 = ZEXT416((uint)fStack_75c);
                    if ((*(byte *)(piVar5 + 0x25) & 0x20) == 0) {
                      fVar17 = _DAT_003c0284 * (float)piVar5[0x23];
                    }
                    else {
                      fVar17 = (float)piVar5[0x23];
                    }
                    piVar12 = (int *)((int)piStack_878 + 1);
                    pfVar11 = pfVar4 + 3;
                    fVar17 = 1.0 - fStack_75c / fVar17;
                    pfVar4[-1] = fVar17 * fVar17 * *pfVar4;
                    piStack_878 = piVar12;
                    fStack_724 = fStack_778;
                    fStack_710 = fStack_718;
                  }
                  piStack_85c = (int *)((int)piStack_85c + 1);
                  pfStack_874 = pfStack_874 + 2;
                  pfVar4 = pfVar11;
                }
                fStack_858 = *(float *)(param_1 + 0x1c);
                fStack_7e8 = *(float *)((int)fStack_858 + 0xa38);
                iVar7 = 0;
                if (0 < (int)fStack_7e8) {
                  pfVar4 = afStack_6cc + (int)piVar12 * 3;
                  do {
                    if (0x3f < (int)piVar12) break;
                    piVar12 = *(int **)((int)fStack_858 + 0x638 + iVar7 * 4);
                    if ((*(byte *)(piVar12 + 0x25) & 0x20) == 0) {
                      fVar17 = _DAT_003c0284 * (float)piVar12[0x23];
                    }
                    else {
                      fVar17 = (float)piVar12[0x23];
                    }
                    piStack_85c = (int *)(fVar17 + fStack_87c);
                    iVar13 = (**(code **)(*piVar12 + 0x40))();
                    fStack_834 = fStack_868 - *(float *)(iVar13 + 0x2c);
                    fStack_854 = fStack_86c - *(float *)(iVar13 + 0x28);
                    fStack_83c = (float)piStack_870 - *(float *)(iVar13 + 0x24);
                    pfVar11 = (float *)(fStack_83c * fStack_83c +
                                       fStack_854 * fStack_854 + fStack_834 * fStack_834);
                    pfVar14 = pfVar4;
                    pfStack_874 = pfVar11;
                    fStack_838 = fStack_854;
                    if ((float)pfVar11 < (float)piStack_85c * (float)piStack_85c) {
                      pfVar4[1] = (float)piVar12;
                      auVar18 = rsqrtss(in_XMM0,pfVar11);
                      fStack_754 = auVar18._0_4_;
                      piStack_85c = (int *)(fStack_754 * (float)pfVar11);
                      auVar18 = rcpss(ZEXT416(piStack_85c),ZEXT416(piStack_85c));
                      fVar17 = auVar18._0_4_;
                      fStack_83c = fStack_83c * fVar17;
                      fStack_838 = fStack_854 * fVar17;
                      fStack_834 = fStack_834 * fVar17;
                      fStack_764 = 0.0;
                      pfStack_874 = (float *)((fStack_83c * uStack_7f8 +
                                              fStack_838 * fStack_7f4 + fStack_834 * fStack_7f0) *
                                              0.5 + 1.5);
                      fVar17 = 1.0 - *(float *)(piVar12[3] + 0x4c) * (float)piVar12[0x1e];
                      fStack_734 = 0.0;
                      if (0.0 <= fVar17) {
                        fStack_734 = fVar17;
                      }
                      fStack_74c = (float)piVar12[0x3e];
                      fStack_6e8 = (float)piVar12[0x3d];
                      fStack_744 = fStack_6e8;
                      if (fStack_6e8 <= fStack_74c) {
                        fStack_744 = fStack_74c;
                      }
                      fStack_73c = (float)piVar12[0x3c];
                      fStack_700 = fStack_73c;
                      if (fStack_73c <= fStack_744) {
                        fStack_700 = fStack_744;
                      }
                      uStack_704 = 0;
                      *pfVar4 = fStack_700 * fStack_734 * (float)pfStack_874;
                      fStack_854 = (float)piStack_85c - fStack_87c;
                      fStack_72c = 0.0;
                      if (0.0 <= fStack_854) {
                        fStack_72c = fStack_854;
                      }
                      in_XMM0 = ZEXT416((uint)fStack_72c);
                      if ((*(byte *)(piVar12 + 0x25) & 0x20) == 0) {
                        fVar17 = _DAT_003c0284 * (float)piVar12[0x23];
                      }
                      else {
                        fVar17 = (float)piVar12[0x23];
                      }
                      piStack_878 = (int *)((int)piStack_878 + 1);
                      pfVar14 = pfVar4 + 3;
                      fVar17 = 1.0 - fStack_72c / fVar17;
                      pfVar4[-1] = fVar17 * fVar17 * *pfVar4;
                      fStack_70c = fStack_744;
                      pfStack_6f8 = pfVar11;
                    }
                    iVar7 = iVar7 + 1;
                    piVar12 = piStack_878;
                    pfVar4 = pfVar14;
                  } while (iVar7 < (int)fStack_7e8);
                }
                if (0 < (int)piVar12) {
                  fStack_7e8 = fStack_868 - pfStack_860[2];
                  fStack_770 = fStack_86c - pfStack_860[1];
                  fStack_6f4 = SQRT(((float)piStack_870 - *pfStack_860) *
                                    ((float)piStack_870 - *pfStack_860) +
                                    fStack_770 * fStack_770 + fStack_7e8 * fStack_7e8);
                  uStack_71c = 0;
                  pfStack_860 = (float *)(fStack_6f4 - fStack_87c);
                  fStack_760 = 0.0;
                  if (0.0 <= (float)pfStack_860) {
                    fStack_760 = (float)pfStack_860;
                  }
                  iVar7 = *(int *)(param_2 + 0x8c);
                  fStack_76c = fStack_7e8;
                  fVar15 = (float10)(**(code **)(*(int *)(iVar7 + 0x48) + 0x1c))();
                  if (fVar15 != (float10)*(float *)(iVar7 + 0x128)) {
                    *(float *)(iVar7 + 0x128) = (float)fVar15;
                    fVar15 = (float10)FUN_00233290((float)(fVar15 * (float10)0.017453292));
                    *(float *)(iVar7 + 300) = (float)fVar15;
                  }
                  uStack_758 = 0;
                  fVar17 = 1.0 - (*(float *)(iVar7 + 300) * fStack_760 -
                                 _DAT_003f7d24 * _DAT_003f7d28) /
                                 (_DAT_003f7d2c * _DAT_003f7d24 - _DAT_003f7d24 * _DAT_003f7d28);
                  fStack_750 = 0.0;
                  if (0.0 <= fVar17) {
                    fStack_750 = fVar17;
                  }
                  uStack_740 = 0x3f800000;
                  fStack_738 = 1.0;
                  if (fStack_750 <= 1.0) {
                    fStack_738 = fStack_750;
                  }
                  in_XMM0 = ZEXT416((uint)fStack_738);
                  pfStack_860 = (float *)((float)(DAT_003f7d34 - DAT_003f7d30) * fStack_738);
                  piVar12 = (int *)((int)(float)pfStack_860 + DAT_003f7d30);
                  if ((int)piVar12 % 3 != 0) {
                    piVar12 = (int *)((int)piVar12 + (3 - (int)piVar12 % 3));
                  }
                  fStack_748 = fStack_750;
                  if ((int)piVar12 < (int)piStack_878) {
                    FUN_001f7a30(auStack_6d0,auStack_6d0 + (int)piStack_878 * 0xc,
                                 ((int)(auStack_6d0 + (int)piStack_878 * 0xc) - (int)auStack_6d0) /
                                 0xc,&LAB_001f55c0);
                    piStack_878 = piVar12;
                  }
                  if ((int)piStack_878 % 3 == 0) {
                    cVar10 = '\0';
                  }
                  else {
                    cVar10 = '\x03' - (char)((int)piStack_878 % 3);
                  }
                  bVar2 = (char)piStack_878 + cVar10;
                  fStack_78c = (float)CONCAT31(fStack_78c._1_3_,bVar2);
                  pfVar4 = afStack_3d0 + (uint)bVar2 * 4;
                  pfVar11 = afStack_3d0;
                  for (iVar7 = (uint)bVar2 << 3; iVar7 != 0; iVar7 = iVar7 + -1) {
                    *pfVar11 = 0.0;
                    pfVar11 = pfVar11 + 1;
                  }
                  for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
                    *(undefined1 *)pfVar11 = 0;
                    pfVar11 = (float *)((int)pfVar11 + 1);
                  }
                  pfVar11 = afStack_3d0;
                  if (0 < (int)piStack_878) {
                    pfStack_874 = afStack_6cc + 1;
                    piStack_85c = piStack_878;
                    do {
                      piVar12 = (int *)*pfStack_874;
                      iVar7 = (**(code **)(*piVar12 + 0x40))();
                      *pfVar11 = *(float *)(iVar7 + 0x24);
                      pfVar11[1] = *(float *)(iVar7 + 0x28);
                      pfVar11[2] = *(float *)(iVar7 + 0x2c);
                      if ((*(byte *)(piVar12 + 0x25) & 0x20) == 0) {
                        fStack_84c = _DAT_003c0284 * (float)piVar12[0x23];
                      }
                      else {
                        fStack_84c = (float)piVar12[0x23];
                      }
                      fVar17 = 1.0;
                      if (0.0 < fStack_84c) {
                        fVar17 = 1.0 / fStack_84c;
                      }
                      pfVar11[3] = fVar17;
                      pfVar11 = pfVar11 + 4;
                      FUN_0009e9c0(piVar12,&fStack_6e0);
                      *pfVar4 = fStack_6e0;
                      pfVar4[1] = fStack_6dc;
                      pfVar4[2] = fStack_6d8;
                      pfVar4[3] = fStack_84c;
                      pfStack_874 = pfStack_874 + 3;
                      pfVar4 = pfVar4 + 4;
                      piStack_85c = (int *)((int)piStack_85c + -1);
                    } while (piStack_85c != (int *)0x0);
                    if (0 < (int)piStack_878) {
                      (**(code **)(*piStack_850 + 0x20))
                                (piStack_850,auStack_7e0,uStack_780,0,local_7d4[4],0,
                                 *(undefined4 *)(local_7d0 + 0x10),0,param_2);
                    }
                  }
                }
              }
              fStack_7e4 = (float)((int)fStack_7e4 + 1);
              iStack_7ec = iStack_7ec + 0x30;
              piVar12 = piStack_850;
            } while ((uint)fStack_7e4 < (uint)fStack_864);
          }
          (**(code **)(*piVar12 + 0x24))(piVar12,param_2);
        }
        if (piStack_878 != (int *)0x0) {
          (**(code **)(*piStack_878 + 8))(piStack_878);
        }
      }
    }
  }
  return;
}
