/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 196D3AE1D0FDA3251CA1BE5AD2A3749B2A584ECF6C415C84F3E06F9746E1D029
 * Entry: 0x001f4a90, Ghidra index: 7039, label: FUN_001f4a90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037ba24;
extern uint32_t DAT_0037bb28;
extern uint32_t DAT_003c9860;
extern uint32_t DAT_003e2344;
extern uint32_t DAT_0041f838;
/* WARNING: Removing unreachable block (ram,0x001f53fb) */
/* WARNING: Removing unreachable block (ram,0x001f5236) */
/* WARNING: Removing unreachable block (ram,0x001f517d) */
/* WARNING: Removing unreachable block (ram,0x001f532d) */
/* WARNING: Removing unreachable block (ram,0x001f54a9) */

void FUN_001f4a90(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  undefined4 *puVar5;
  int *piVar6;
  uint uVar7;
  undefined *puVar8;
  int iVar9;
  float *pfVar10;
  int iVar11;
  int iVar12;
  undefined4 *puVar13;
  uint *puVar14;
  int *piStack_114;
  int **ppiStack_110;
  int *piStack_10c;
  int *piStack_108;
  int *piStack_104;
  float *pfStack_100;
  int *piStack_fc;
  uint **ppuStack_f8;
  uint *local_e4;
  float local_e0;
  uint local_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  float local_c8;
  uint *local_c4;
  float local_c0;
  undefined4 local_bc;
  float fStack_b8;
  uint *local_b4;
  float fStack_b0;
  int *piStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  undefined4 uStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  int iStack_8c;
  undefined4 local_88;
  undefined4 local_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  undefined4 uStack_74;
  float fStack_70;
  uint *puStack_6c;
  float fStack_68;
  undefined4 uStack_64;
  undefined4 auStack_60 [13];
  int iStack_2c;
  int iStack_1c;
  int iStack_14;
  int iStack_c;
  int iStack_4;
  
  iVar3 = *(int *)(*(int *)(param_1 + 0x20) + 0x5c);
  if ((iVar3 == 0) ||
     (local_dc = *(int *)(*(int *)(param_1 + 0x20) + 0x60) - iVar3 >> 4, local_dc == 0))
  goto LAB_001f555e;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x20001;
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x8c);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x8c);
  piStack_fc = *(int **)(param_1 + 0x34);
  ppuStack_f8 = (uint **)0x404;
  pfVar10 = (float *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x20) + 0x10) + 0x18) +
                                       0x1c) + 0x2c) - *(int *)(*(int *)(param_1 + 0x20) + 0x88));
  piStack_104 = (int *)0x1f4b37;
  pfStack_100 = pfVar10;
  XAPILIB__XPhysicalProtect();
  uVar2 = *(int *)(param_1 + 0x28) + (int)pfVar10;
  if ((*(uint *)(param_1 + 0x24) & 0x70000) != 0x20000) {
    uVar2 = uVar2 & 0xfffffff;
  }
  *(uint *)(param_1 + 0x28) = uVar2;
  local_88 = DAT_003e2344;
  ppuStack_f8 = *(uint ***)(param_1 + 0x1c);
  uVar2 = 0;
  iVar11 = 0;
  DAT_0037bb28 = (uint *)0x0;
  local_84 = 0;
  piStack_fc = (int *)0x1f4b89;
  iVar3 = FUN_000e96b0();
  if (iVar3 != 0) {
    local_e4 = *(uint **)(*(int *)(iVar3 + 0xc) + 0x70);
    ppuStack_f8 = &local_e4;
    piStack_fc = (int *)0x1f4ba7;
    ppuStack_f8 = (uint **)FUN_000a7770();
    if (ppuStack_f8 != (uint **)0x0) {
      puVar5 = *(undefined4 **)(*(int *)(param_1 + 0x20) + 0x6c);
      piStack_fc = (int *)0x1f4bbe;
      (**(code **)((int)*ppuStack_f8 + 0x28))();
      ppuStack_f8 = (uint **)*puVar5;
      piStack_fc = (int *)0x1f4bd4;
      FUN_0036fda0();
      iVar11 = 1;
    }
  }
  iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 0x1c) + 0xb74) + 0x5c);
  local_e0 = *(float *)(iVar3 + 0x18);
  local_c8 = *(float *)(iVar3 + 0x10);
  local_e4 = *(uint **)(iVar3 + 0x14);
  local_bc = 0x3f800000;
  ppuStack_f8 = *(uint ***)(*(int *)(*(int *)(param_1 + 0x20) + 0x6c) + iVar11 * 4);
  piStack_fc = (int *)(param_1 + 0x24);
  pfStack_100 = &local_c8;
  piStack_104 = (int *)0x1f4c46;
  local_c4 = local_e4;
  local_c0 = local_e0;
  local_b4 = local_e4;
  fStack_b0 = local_e0;
  FUN_000a50b0();
  if (local_dc != 0) {
    piStack_ac = (int *)0x37ba11;
    iVar3 = (iVar11 + 1) * 4;
    do {
      local_e4 = (uint *)0xfac7dc89;
      iVar12 = uVar2 * 0x2c;
      piStack_fc = *(int **)(*(int *)(*(int *)(*(int *)(param_1 + 0x20) + 0x10) + 0x18) + 4 + iVar12
                            );
      ppuStack_f8 = &local_e4;
      pfStack_100 = (float *)0x1f4c9f;
      iVar11 = (**(code **)(*piStack_fc + 0x50))();
      pfStack_100 = *(float **)(iVar11 + 4);
      if (pfStack_100 != (float *)0x0) {
        piStack_104 = (int *)0x1f4cac;
        (**(code **)((int)*pfStack_100 + 0x28))();
      }
      pfStack_100 = *(float **)(*(int *)(*(int *)(iStack_4 + 0x20) + 0x6c) + iVar3 + 4);
      piStack_104 = (int *)0x1f4cd1;
      FUN_0036fda0();
      piStack_104 = *(int **)(*(int *)(*(int *)(*(int *)(iStack_4 + 0x20) + 0x10) + 0x18) + 4 +
                             iVar12);
      pfStack_100 = (float *)&stack0xffffff14;
      iVar9 = iVar3 + 8;
      piStack_108 = (int *)0x1f4cfb;
      iVar11 = (**(code **)(*piStack_104 + 0x50))();
      if (uVar2 != 0) {
        piStack_108 = *(int **)(iVar11 + 4);
        if (piStack_108 != (int *)0x0) {
          piStack_10c = (int *)0x1f4d0c;
          (**(code **)(*piStack_108 + 0x28))();
        }
        piStack_108 = *(int **)(*(int *)(*(int *)(iStack_c + 0x20) + 0x6c) + iVar9);
        piStack_10c = (int *)0x1f4d34;
        FUN_0036fda0();
        iVar9 = iVar3 + 0xc;
      }
      piStack_10c = *(int **)(*(int *)(*(int *)(*(int *)(iStack_c + 0x20) + 0x10) + 0x18) + 4 +
                             iVar12);
      piStack_108 = (int *)&stack0xffffff0c;
      ppiStack_110 = (int **)0x1f4d5e;
      iVar3 = (**(code **)(*piStack_10c + 0x50))();
      ppiStack_110 = *(int ***)(iVar3 + 4);
      if (ppiStack_110 != (int **)0x0) {
        piStack_114 = (int *)0x1f4d6b;
        (*(code *)(*ppiStack_110)[10])();
        ppiStack_110 = *(int ***)(*(int *)(*(int *)(iStack_14 + 0x20) + 0x6c) + iVar9);
        piStack_114 = (int *)0x1f4d8b;
        FUN_0036fda0();
        iVar9 = iVar9 + 4;
      }
      piStack_fc = (int *)0xed0b519d;
      piStack_114 = *(int **)(*(int *)(*(int *)(*(int *)(iStack_14 + 0x20) + 0x10) + 0x18) + 4 +
                             iVar12);
      ppiStack_110 = &piStack_fc;
      iVar3 = (**(code **)(*piStack_114 + 0x50))();
      piVar1 = *(int **)(iVar3 + 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x28))(piVar1);
        FUN_0036fda0(*(undefined4 *)(*(int *)(*(int *)(iStack_1c + 0x20) + 0x6c) + iVar9));
        iVar9 = iVar9 + 4;
      }
      pfStack_100 = (float *)0xfac7dc89;
      piStack_104 = (int *)0xf95aad3d;
      piVar1 = *(int **)(*(int *)(*(int *)(*(int *)(iStack_1c + 0x20) + 0x10) + 0x18) + 4 + iVar12);
      (**(code **)(*piVar1 + 0x6c))(piVar1,&pfStack_100,&piStack_104,&uStack_d8);
      piStack_114 = (int *)0xf95aad3d;
      ppiStack_110 = (int **)0xe34c5f66;
      piVar1 = *(int **)(*(int *)(*(int *)(*(int *)(iStack_2c + 0x20) + 0x10) + 0x18) + 4 + iVar12);
      (**(code **)(*piVar1 + 0x6c))(piVar1,&ppiStack_110,&piStack_114,&local_c8);
      iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + 0xa70);
      fStack_80 = fStack_98 * *(float *)(iVar3 + 0x84);
      puStack_6c = local_b4;
      ppuStack_f8 = (uint **)0x1;
      fStack_7c = fStack_94 * *(float *)(iVar3 + 0x88);
      piStack_fc = (int *)0xffffffb5;
      uStack_74 = 0x3d800000;
      uStack_64 = 0;
      fStack_78 = fStack_90 * *(float *)(iVar3 + 0x8c);
      fStack_70 = fStack_b8;
      fStack_68 = fStack_b0;
      pfStack_100 = (float *)0x1f4ee8;
      FUN_0036fe60();
      ppuStack_f8 = (uint **)0x1;
      piStack_fc = (int *)0xffffffb7;
      pfStack_100 = (float *)0x1f4f0c;
      FUN_0036fe60();
      iVar3 = *(int *)(param_1 + 0x1c);
      fStack_a8 = fStack_b8 * *(float *)(iVar3 + 0xba0);
      iVar11 = iVar9 + 8;
      fStack_a4 = (float)local_b4 * *(float *)(iVar3 + 0xba4);
      fStack_a0 = fStack_b0 * *(float *)(iVar3 + 0xba8);
      uStack_9c = 0;
      if (uVar2 == 0) {
        ppuStack_f8 = *(uint ***)(*(int *)(*(int *)(param_1 + 0x20) + 0x6c) + iVar11);
      }
      else {
        ppuStack_f8 = *(uint ***)(*(int *)(*(int *)(param_1 + 0x20) + 0x6c) + iVar11);
      }
      piStack_fc = (int *)(param_1 + 0x24);
      pfStack_100 = &fStack_a8;
      piStack_104 = (int *)0x1f4f8c;
      FUN_000a50b0();
      iStack_8c = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x20) + 0x10) + 0x18) + 0x1c +
                          iVar12) + 0x20;
      local_e4 = *(uint **)(*(int *)(*(int *)(param_1 + 0x20) + 0x6c) + 4 + iVar11);
      ppuStack_f8 = (uint **)0x1;
      piStack_fc = piStack_ac;
      puVar5 = &DAT_003c9860;
      puVar13 = &DAT_0037ba24;
      for (iVar3 = 0x40; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar13 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar13 = puVar13 + 1;
      }
      pfStack_100 = (float *)0x1f4fe0;
      FUN_0036fbe0();
      iVar3 = iVar9 + 0x10;
      uVar2 = uVar2 + 1;
    } while (uVar2 < local_dc);
  }
  iVar3 = (int)DAT_0037bb28;
  if (DAT_0037bb28 != (uint *)0x0) {
    iVar11 = *(int *)((int)DAT_0037bb28 + 0x10);
    iVar12 = *(int *)((int)DAT_0037bb28 + 4);
    uVar2 = *(uint *)((int)DAT_0037bb28 + 0x14);
    uVar7 = iVar11 + 4;
    DAT_0037bb28 = (uint *)0x0;
    *(uint *)(iVar3 + 0x10) = uVar7;
    if (uVar7 <= uVar2) {
      *(undefined4 *)(iVar12 + iVar11) = 0xffffffff;
    }
  }
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  iVar3 = 0;
  iVar11 = 0x68;
  puVar8 = &DAT_0041f838;
  do {
    *(undefined1 **)(iVar3 + 0x38 + param_1) = &LAB_00060001;
    *(undefined **)(iVar3 + 0x3c + param_1) = puVar8;
    *(undefined4 *)(iVar3 + 0x40 + param_1) = 0;
    *(undefined4 *)(iVar3 + 0x44 + param_1) = 0;
    *(undefined4 *)(iVar3 + 0x48 + param_1) = 0;
    *(undefined4 *)(iVar3 + 0x4c + param_1) = 0x10000;
    *(int *)(iVar11 + param_1) = iVar3 + 0x38 + param_1;
    iVar11 = iVar11 + 4;
    puVar8 = puVar8 + 0x10000;
    iVar3 = iVar3 + 0x18;
  } while (iVar11 < 0x70);
  ppuStack_f8 = (uint **)0x18;
  piStack_fc = (int *)0x0;
  pfStack_100 = (float *)0x1f50ba;
  puVar4 = (uint *)XAPILIB__LocalAlloc();
  if (puVar4 == (uint *)0x0) {
    puVar4 = (uint *)0x0;
  }
  else {
    puVar14 = puVar4;
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar14 = 0;
      puVar14 = puVar14 + 1;
    }
    *puVar4 = 0x1060001;
    puVar4[1] = (uint)(puVar4 + 6);
    puVar4[5] = 0;
  }
  DAT_0037bb28 = puVar4;
  local_e4 = puVar4;
  if (puVar4 == (uint *)0x0) {
    if ((-1 < (int)*(uint *)(param_1 + 0x24)) && (D3D8__D3D_g_pDevice != 0)) {
      piStack_fc = *(int **)(param_1 + 0x2c);
      if ((*(uint *)(param_1 + 0x24) & 0x780000) == 0) {
        if (piStack_fc == (int *)0x0) goto LAB_001f5133;
        ppuStack_f8 = (uint **)0x10;
      }
      else {
        piStack_fc = *(int **)(D3D8__D3D_g_pDevice + 0x2c);
        ppuStack_f8 = (uint **)0x2;
      }
      pfStack_100 = (float *)0x1f512d;
      D3D8LTCG__D3D_BlockOnTime();
      puVar4 = DAT_0037bb28;
    }
  }
  else {
    puVar4[3] = puVar4[4];
  }
LAB_001f5133:
  iVar3 = **(int **)(*(int *)(param_1 + 0x20) + 0x7c);
  puVar5 = (undefined4 *)(*(int *)(param_1 + 0x28) + iVar3);
  if (puVar4 == (uint *)0x0) {
LAB_001f516d:
    if ((puVar5 != (undefined4 *)0x0) && (*puVar5 = 0x40100, puVar4 == (uint *)0x0)) {
      iVar3 = *(int *)(D3D8__D3D_g_pDevice + 0x17c8);
      *(uint *)(iVar3 + 0x100410) = *(uint *)(iVar3 + 0x100410) | 0x10000;
      do {
      } while ((*(uint *)(iVar3 + 0x100410) & 0x10000) != 0);
    }
  }
  else {
    puVar5 = (undefined4 *)(puVar4[1] + puVar4[4]);
    uVar2 = puVar4[4] + 0xc;
    puVar4[4] = uVar2;
    if (uVar2 <= puVar4[5]) {
      *puVar5 = 4;
      puVar5[1] = iVar3;
      puVar5 = puVar5 + 2;
      goto LAB_001f516d;
    }
  }
  puVar5 = auStack_60;
  for (iVar3 = 0x18; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  ppuStack_f8 = (uint **)0x1;
  piStack_fc = (int *)0xffffffb8;
  pfStack_100 = (float *)0x1f51eb;
  FUN_0036fe60();
  iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 0x20) + 0x7c) + 8);
  puVar5 = (undefined4 *)(*(int *)(param_1 + 0x28) + iVar3);
  if (puVar4 == (uint *)0x0) {
LAB_001f5226:
    if ((puVar5 != (undefined4 *)0x0) && (*puVar5 = 0x40100, puVar4 == (uint *)0x0)) {
      iVar3 = *(int *)(D3D8__D3D_g_pDevice + 0x17c8);
      *(uint *)(iVar3 + 0x100410) = *(uint *)(iVar3 + 0x100410) | 0x10000;
      do {
      } while ((*(uint *)(iVar3 + 0x100410) & 0x10000) != 0);
    }
  }
  else {
    puVar5 = (undefined4 *)(puVar4[1] + puVar4[4]);
    uVar2 = puVar4[4] + 0xc;
    puVar4[4] = uVar2;
    if (uVar2 <= puVar4[5]) {
      *puVar5 = 4;
      puVar5[1] = iVar3;
      puVar5 = puVar5 + 2;
      goto LAB_001f5226;
    }
  }
  ppuStack_f8 = (uint **)0x6;
  piStack_fc = (int *)0xffffffc0;
  pfStack_100 = (float *)0x1f5290;
  FUN_0036fe60();
  uStack_d8 = 0;
  uStack_d4 = 0;
  uStack_d0 = 0;
  uStack_cc = 0;
  ppuStack_f8 = (uint **)0x1f52c0;
  FUN_000a4d80();
  uVar2 = local_dc;
  puVar14 = local_e4;
  puVar4 = DAT_0037bb28;
  iVar3 = 5;
  if (local_dc != 0) {
    local_dc = 0;
    local_e0 = (float)uVar2;
    do {
      iVar11 = *(int *)(*(int *)(*(int *)(param_1 + 0x20) + 0x7c) + iVar3 * 4);
      puVar5 = (undefined4 *)(*(int *)(param_1 + 0x28) + iVar11);
      if (puVar4 == (uint *)0x0) {
LAB_001f531d:
        if ((puVar5 != (undefined4 *)0x0) && (*puVar5 = 0x40100, puVar4 == (uint *)0x0)) {
          iVar11 = *(int *)(D3D8__D3D_g_pDevice + 0x17c8);
          *(uint *)(iVar11 + 0x100410) = *(uint *)(iVar11 + 0x100410) | 0x10000;
          do {
          } while ((*(uint *)(iVar11 + 0x100410) & 0x10000) != 0);
        }
      }
      else {
        puVar5 = (undefined4 *)(puVar4[1] + puVar4[4]);
        uVar2 = puVar4[4] + 0xc;
        puVar4[4] = uVar2;
        if (uVar2 <= puVar4[5]) {
          *puVar5 = 4;
          puVar5[1] = iVar11;
          puVar5 = puVar5 + 2;
          goto LAB_001f531d;
        }
      }
      iVar11 = *(int *)(*(int *)(*(int *)(param_1 + 0x20) + 0x10) + 0x18);
      iVar12 = *(int *)(iVar11 + 0x1c + local_dc);
      iVar3 = iVar3 + 1;
      if ((iVar12 != 0) &&
         (iVar11 = (*(int *)(iVar11 + local_dc + 0x20) - iVar12) / 0x30, 0 < iVar11)) {
        do {
          iVar12 = *(int *)(*(int *)(*(int *)(param_1 + 0x20) + 0x7c) + iVar3 * 4);
          puVar5 = (undefined4 *)(*(int *)(param_1 + 0x28) + iVar12);
          if (puVar4 == (uint *)0x0) {
LAB_001f53eb:
            if ((puVar5 != (undefined4 *)0x0) && (*puVar5 = 0x40100, puVar4 == (uint *)0x0)) {
              iVar12 = *(int *)(D3D8__D3D_g_pDevice + 0x17c8);
              *(uint *)(iVar12 + 0x100410) = *(uint *)(iVar12 + 0x100410) | 0x10000;
              do {
              } while ((*(uint *)(iVar12 + 0x100410) & 0x10000) != 0);
            }
          }
          else {
            puVar5 = (undefined4 *)(puVar4[1] + puVar4[4]);
            uVar2 = puVar4[4] + 0xc;
            puVar4[4] = uVar2;
            if (uVar2 <= puVar4[5]) {
              *puVar5 = 4;
              puVar5[1] = iVar12;
              puVar5 = puVar5 + 2;
              goto LAB_001f53eb;
            }
          }
          iVar3 = iVar3 + 1;
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
      }
      local_dc = local_dc + 0x2c;
      local_e0 = (float)((int)local_e0 - 1);
    } while (local_e0 != 0.0);
    local_e0 = 0.0;
  }
  iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 0x20) + 0x7c) + iVar3 * 4);
  puVar5 = (undefined4 *)(*(int *)(param_1 + 0x28) + iVar3);
  if (puVar4 == (uint *)0x0) {
LAB_001f5499:
    if (puVar5 == (undefined4 *)0x0) goto LAB_001f54e8;
    *puVar5 = 0x40100;
    if (puVar4 == (uint *)0x0) {
      iVar3 = *(int *)(D3D8__D3D_g_pDevice + 0x17c8);
      *(uint *)(iVar3 + 0x100410) = *(uint *)(iVar3 + 0x100410) | 0x10000;
      do {
      } while ((*(uint *)(iVar3 + 0x100410) & 0x10000) != 0);
      goto LAB_001f54e8;
    }
LAB_001f54ec:
    uVar2 = puVar4[4];
    uVar7 = uVar2 + 4;
    DAT_0037bb28 = (uint *)0x0;
    puVar4[4] = uVar7;
    if (uVar7 <= puVar4[5]) {
      *(undefined4 *)(puVar4[1] + uVar2) = 0xffffffff;
    }
  }
  else {
    puVar5 = (undefined4 *)(puVar4[1] + puVar4[4]);
    uVar2 = puVar4[4] + 0xc;
    puVar4[4] = uVar2;
    if (uVar2 <= puVar4[5]) {
      *puVar5 = 4;
      puVar5[1] = iVar3;
      puVar5 = puVar5 + 2;
      goto LAB_001f5499;
    }
LAB_001f54e8:
    if (puVar4 != (uint *)0x0) goto LAB_001f54ec;
  }
  *(uint *)(param_1 + 0x74) = local_e4[4] - local_e4[3];
  uVar2 = *local_e4;
  if ((uVar2 & 0xffff) == 1) {
    if (((uVar2 & 0x70000) == 0x50000) &&
       (ppuStack_f8 = (uint **)local_e4[5], ppuStack_f8 != (uint **)0x0)) {
      piStack_fc = (int *)0x1f554b;
      D3D8LTCG__D3DResource_Release();
    }
    uVar2 = *puVar14;
    if ((uVar2 & 0x780000) == 0) {
      ppuStack_f8 = (uint **)0x1f5559;
      D3D8LTCG__D3D_DestroyResource__LTCG();
      goto LAB_001f555e;
    }
  }
  *puVar14 = uVar2 - 1;
LAB_001f555e:
  *(undefined4 *)(param_1 + 0x14) = 0;
  piVar1 = *(int **)(*(int *)(param_1 + 0x1c) + 0x28);
  if ((piVar1 != (int *)0x0) && (piVar6 = (int *)*piVar1, piVar6 != piVar1)) {
    do {
      if ((*(int *)(*(int *)(piVar6[2] + 0xc) + 4) == 2) && ((*(byte *)(piVar6[2] + 0x71) & 4) != 0)
         ) {
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      }
      piVar6 = (int *)*piVar6;
    } while (piVar6 != (int *)*(int *)(*(int *)(param_1 + 0x1c) + 0x28));
  }
  return;
}
