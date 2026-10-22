/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F04EC33D62FD883FCDBB902BA73493A2891C4F4ADBB11CB23AE28D3780C8C36B
 * Entry: 0x000af840, Ghidra index: 2093, label: FUN_000af840
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037ec88;
extern uint32_t DAT_0040d72e;
extern uint32_t DAT_0046b2e8;
void FUN_000af840(int param_1,undefined4 param_2,float param_3,float param_4)

{
  float fVar1;
  short sVar2;
  int iVar3;
  char cVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int *piVar16;
  int *piVar17;
  int iVar18;
  float10 fVar19;
  int local_58;
  int local_50;
  int local_4c;
  int local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  
  FUN_00062280();
  if ((*(int *)(param_1 + 0x4c) != 0) &&
     (local_4c = (*(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x4c)) / 0x2c, local_4c != 0)) {
    cVar4 = FUN_000a4a60(6);
    if (cVar4 != '\0') {
      FUN_000a4d00();
      FUN_000a4d80();
    }
    FUN_00062230(2);
    puVar7 = D3D8__D3D_g_pDevice;
    puVar5 = (undefined4 *)*D3D8__D3D_g_pDevice;
    if ((undefined4 *)D3D8__D3D_g_pDevice[1] <= puVar5) {
      puVar5 = (undefined4 *)D3D8LTCG__D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
    }
    *puVar5 = 0x818c8;
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar7 = puVar5 + 3;
    fVar19 = (float10)FUN_000bb170();
    fVar1 = (float)fVar19;
    if (0 < local_4c) {
      local_50 = 0;
      do {
        puVar5 = D3D8__D3D_g_pDevice;
        piVar16 = (int *)(*(int *)(param_1 + 0x4c) + local_50);
        piVar17 = local_2c;
        for (iVar10 = 0xb; iVar14 = local_2c[3], iVar10 != 0; iVar10 = iVar10 + -1) {
          *piVar17 = *piVar16;
          piVar16 = piVar16 + 1;
          piVar17 = piVar17 + 1;
        }
        if ((1.0 <= fVar1) || (fVar1 <= 0.0)) {
          uVar11 = local_10;
          if (fVar1 == 0.0) {
            uVar11 = 0;
          }
        }
        else {
          uVar11 = (int)((float)(int)local_10 * fVar1);
        }
        iVar10 = (local_2c[3] - local_2c[1]) * (local_c & 1);
        iVar18 = (local_2c[2] - local_2c[0]) * (local_c & 1);
        if (DAT_0040d72e == '\0') {
          iVar10 = -iVar10;
        }
        else {
          iVar18 = -iVar18;
        }
        uVar15 = local_1c & 0xff;
        uVar13 = local_18 & 0xff;
        uVar6 = local_14 & 0xff;
        puVar7 = (undefined4 *)*D3D8__D3D_g_pDevice;
        if ((undefined4 *)D3D8__D3D_g_pDevice[1] <= puVar7) {
          puVar7 = (undefined4 *)D3D8LTCG__D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
        }
        *puVar7 = 0x4194c;
        puVar7[1] = uVar15 | uVar6 << 0x10 | ((uVar11 & 0xff) << 0x10 | uVar13) << 8;
        *puVar5 = puVar7 + 2;
        puVar5 = D3D8__D3D_g_pDevice;
        iVar8 = (int)((float)((int)*(short *)(param_1 + 8) + *(int *)(param_1 + 0xd4) + local_2c[0])
                     + param_3);
        iVar9 = (int)((float)((int)*(short *)(param_1 + 10) + *(int *)(param_1 + 0xd8) + local_2c[1]
                             ) + param_4);
        if (local_c == 1) {
          puVar7 = (undefined4 *)*D3D8__D3D_g_pDevice;
          if ((undefined4 *)D3D8__D3D_g_pDevice[1] <= puVar7) {
            puVar7 = (undefined4 *)
                     D3D8LTCG__D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
          }
          *puVar7 = 0x81880;
          puVar7[1] = (float)iVar8;
          puVar7[2] = (float)iVar9;
          *puVar5 = puVar7 + 3;
          puVar7 = D3D8__D3D_g_pDevice;
          iVar12 = (int)*(short *)(param_1 + 8) + *(int *)(param_1 + 0xd4) + local_2c[2];
          sVar2 = *(short *)(param_1 + 10);
          iVar3 = *(int *)(param_1 + 0xd8);
          puVar5 = (undefined4 *)*D3D8__D3D_g_pDevice;
          if ((undefined4 *)D3D8__D3D_g_pDevice[1] <= puVar5) {
            puVar5 = (undefined4 *)
                     D3D8LTCG__D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
          }
          *puVar5 = 0x81880;
          puVar5[1] = (float)(int)((float)(iVar12 + iVar10) + param_3);
          puVar5[2] = (float)(int)((float)(sVar2 + iVar3 + iVar18 + iVar14) + param_4);
          *puVar7 = puVar5 + 3;
          puVar7 = D3D8__D3D_g_pDevice;
          puVar5 = (undefined4 *)*D3D8__D3D_g_pDevice;
          if ((undefined4 *)D3D8__D3D_g_pDevice[1] <= puVar5) {
            puVar5 = (undefined4 *)
                     D3D8LTCG__D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
          }
          *puVar5 = 0x81880;
          puVar5[1] = (float)iVar8;
          puVar5[2] = (float)iVar9;
          *puVar7 = puVar5 + 3;
          iVar8 = (((int)*(short *)(param_1 + 8) + *(int *)(param_1 + 0xd4)) - iVar10) + local_2c[2]
          ;
          iVar14 = (((int)*(short *)(param_1 + 10) + *(int *)(param_1 + 0xd8)) - iVar18) + iVar14;
LAB_000afc17:
          puVar7 = D3D8__D3D_g_pDevice;
          local_58 = (int)((float)iVar8 + param_3);
          puVar5 = (undefined4 *)*D3D8__D3D_g_pDevice;
          if ((undefined4 *)D3D8__D3D_g_pDevice[1] <= puVar5) {
            puVar5 = (undefined4 *)
                     D3D8LTCG__D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
          }
          *puVar5 = 0x81880;
          puVar5[1] = (float)local_58;
          puVar5[2] = (float)(int)((float)iVar14 + param_4);
          *puVar7 = puVar5 + 3;
        }
        else {
          iVar10 = iVar10 >> 1;
          iVar18 = iVar18 >> 1;
          if (local_c == 5) {
            puVar7 = (undefined4 *)*D3D8__D3D_g_pDevice;
            if ((undefined4 *)D3D8__D3D_g_pDevice[1] <= puVar7) {
              puVar7 = (undefined4 *)
                       D3D8LTCG__D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
            }
            *puVar7 = 0x81880;
            puVar7[1] = (float)iVar8;
            puVar7[2] = (float)iVar9;
            *puVar5 = puVar7 + 3;
            puVar7 = D3D8__D3D_g_pDevice;
            iVar12 = (int)*(short *)(param_1 + 8) + *(int *)(param_1 + 0xd4) + local_2c[2];
            sVar2 = *(short *)(param_1 + 10);
            iVar3 = *(int *)(param_1 + 0xd8);
            puVar5 = (undefined4 *)*D3D8__D3D_g_pDevice;
            if ((undefined4 *)D3D8__D3D_g_pDevice[1] <= puVar5) {
              puVar5 = (undefined4 *)
                       D3D8LTCG__D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
            }
            *puVar5 = 0x81880;
            puVar5[1] = (float)(int)((float)iVar12 + param_3);
            puVar5[2] = (float)(int)((float)(sVar2 + iVar3 + iVar14) + param_4);
            *puVar7 = puVar5 + 3;
            puVar7 = D3D8__D3D_g_pDevice;
            puVar5 = (undefined4 *)*D3D8__D3D_g_pDevice;
            if ((undefined4 *)D3D8__D3D_g_pDevice[1] <= puVar5) {
              puVar5 = (undefined4 *)
                       D3D8LTCG__D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
            }
            *puVar5 = 0x81880;
            puVar5[1] = (float)iVar8;
            puVar5[2] = (float)iVar9;
            *puVar7 = puVar5 + 3;
            iVar8 = ((((int)*(short *)(param_1 + 8) + *(int *)(param_1 + 0xd4)) - iVar18) - iVar10)
                    + local_2c[0];
            iVar14 = (((int)*(short *)(param_1 + 10) + *(int *)(param_1 + 0xd8)) - iVar18) +
                     local_2c[1] + iVar10;
            goto LAB_000afc17;
          }
          if (local_c == 3) {
            FUN_00062170(&DAT_0046b2e8,0,
                         (float)(int)((float)((((int)*(short *)(param_1 + 8) +
                                               *(int *)(param_1 + 0xd4)) - iVar10) + local_2c[2]) +
                                     param_3),
                         (float)(int)((float)((((int)*(short *)(param_1 + 10) +
                                               *(int *)(param_1 + 0xd8)) - iVar18) + iVar14) +
                                     param_4));
            iVar8 = local_2c[1];
            FUN_00062170(&DAT_0046b2e8,0,
                         (float)(int)((float)((((int)*(short *)(param_1 + 8) +
                                               *(int *)(param_1 + 0xd4)) - iVar10) + local_2c[0]) +
                                     param_3),
                         (float)(int)((float)((((int)*(short *)(param_1 + 10) +
                                               *(int *)(param_1 + 0xd8)) - iVar18) + local_2c[1]) +
                                     param_4));
            FUN_00062170(&DAT_0046b2e8,0,
                         (float)(int)((float)((((int)*(short *)(param_1 + 8) +
                                               *(int *)(param_1 + 0xd4)) - iVar10) + local_2c[0]) +
                                     param_3),
                         (float)(int)((float)((((int)*(short *)(param_1 + 10) +
                                               *(int *)(param_1 + 0xd8)) - iVar18) + iVar8) +
                                     param_4));
            FUN_00062170(&DAT_0046b2e8,0,
                         (float)(int)((float)((int)*(short *)(param_1 + 8) +
                                              *(int *)(param_1 + 0xd4) + local_2c[2] + iVar10) +
                                     param_3),
                         (float)(int)((float)((int)*(short *)(param_1 + 10) +
                                              *(int *)(param_1 + 0xd8) + iVar18 + iVar14) + param_4)
                        );
            FUN_00062170(&DAT_0046b2e8,0,
                         (float)(int)((float)((int)*(short *)(param_1 + 8) +
                                              *(int *)(param_1 + 0xd4) + local_2c[2] + iVar10) +
                                     param_3),
                         (float)(int)((float)((int)*(short *)(param_1 + 10) +
                                              *(int *)(param_1 + 0xd8) + iVar18 + iVar14) + param_4)
                        );
            iVar10 = (int)*(short *)(param_1 + 8) + *(int *)(param_1 + 0xd4) + local_2c[0] + iVar10;
            iVar8 = (int)*(short *)(param_1 + 10) + *(int *)(param_1 + 0xd8) + iVar18 + iVar8;
          }
          else {
            FUN_00062170(&DAT_0046b2e8,0,(float)iVar8,(float)iVar9);
            iVar10 = (int)*(short *)(param_1 + 8) + *(int *)(param_1 + 0xd4) + local_2c[2];
            iVar8 = (int)*(short *)(param_1 + 10) + *(int *)(param_1 + 0xd8) + iVar14;
          }
          local_58 = (int)((float)iVar10 + param_3);
          FUN_00062170(&DAT_0046b2e8,0,(float)local_58,(float)(int)((float)iVar8 + param_4));
        }
        local_50 = local_50 + 0x2c;
        local_4c = local_4c + -1;
      } while (local_4c != 0);
    }
    puVar7 = D3D8__D3D_g_pDevice;
    puVar5 = (undefined4 *)*D3D8__D3D_g_pDevice;
    if ((undefined4 *)D3D8__D3D_g_pDevice[1] <= puVar5) {
      puVar5 = (undefined4 *)D3D8LTCG__D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
    }
    *puVar5 = 0x417fc;
    puVar5[1] = 0;
    *puVar7 = puVar5 + 2;
    if ((puVar7[2] & 0x1000) != 0) {
      D3D8LTCG__D3D_SetFence(1);
    }
    puVar7[2] = puVar7[2] & 0xffffe7ff;
  }
  return;
}
