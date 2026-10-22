/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CC958C688920D8F2F94C9F701D18F4C4DF9D04730F2F0611596ABD107DA68E3C
 * Entry: 0x0036ca20, Ghidra index: 13284, label: D3DDevice_DrawIndexedVertices
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037ec88;
void D3D8LTCG__D3DDevice_DrawIndexedVertices(int *param_1,uint param_2,int *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ushort uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined4 *puVar12;
  int iVar13;
  int *piVar14;
  uint uVar15;
  int iVar16;
  int *piVar17;
  int *piVar18;
  int local_8;
  
  puVar9 = D3D8__D3D_g_pDevice;
  CDevice_SetStateVB_8(D3D8__D3D_g_pDevice,D3D8__D3D_g_pDevice[7]);
  puVar10 = D3D8__D3D_g_pDevice;
  puVar9[2] = puVar9[2] | 0x800;
  puVar12 = (undefined4 *)*puVar10;
  if ((undefined4 *)(puVar10[1] + 0x200) <= puVar12 + 0x209) {
    uVar11 = DAT_0037ec88 >> 1;
    if (uVar11 < 0xa28) {
      uVar11 = 0xa28;
    }
    uVar15 = DAT_0037ec88;
    if (DAT_0037ec88 < 0xa28) {
      uVar15 = 0xa28;
    }
    puVar12 = (undefined4 *)D3D_MakeRequestedSpace_8(uVar11,uVar15);
  }
  *puVar12 = 0x417fc;
  piVar14 = puVar12 + 2;
  puVar12[1] = param_1;
  uVar11 = (uint)-(int)piVar14 >> 2 & 7;
  if (uVar11 * 2 + 0x3e <= param_2) {
    if (uVar11 != 0) {
      iVar13 = uVar11 - 1;
      *piVar14 = iVar13 * 0x40000 + 0x40001800;
      piVar17 = param_3;
      for (iVar16 = iVar13; piVar14 = piVar14 + 1, iVar16 != 0; iVar16 = iVar16 + -1) {
        *piVar14 = *piVar17;
        piVar17 = piVar17 + 1;
      }
      param_3 = param_3 + iVar13;
      piVar14 = puVar12 + uVar11 + 2;
      param_2 = param_2 + iVar13 * -2;
    }
    param_1 = piVar14;
    if (param_2 % 0x3fe < 0x3e) {
      local_8 = 0x1ff;
    }
    else {
      local_8 = ((param_2 % 0x3fe >> 1) + 1 & 0xfffffff0) - 1;
    }
    do {
      *param_1 = local_8 * 0x40000 + 0x40001800;
      uVar11 = local_8 - 0xfU >> 4;
      uVar1 = *(undefined8 *)(param_3 + 1);
      uVar2 = *(undefined8 *)(param_3 + 3);
      uVar3 = *(undefined8 *)(param_3 + 5);
      uVar4 = *(undefined8 *)(param_3 + 7);
      uVar5 = *(undefined8 *)(param_3 + 9);
      uVar6 = *(undefined8 *)(param_3 + 0xb);
      uVar7 = *(undefined8 *)(param_3 + 0xd);
      param_1[1] = *param_3;
      *(undefined8 *)(param_1 + 2) = uVar1;
      *(undefined8 *)(param_1 + 4) = uVar2;
      *(undefined8 *)(param_1 + 6) = uVar3;
      *(undefined8 *)(param_1 + 8) = uVar4;
      *(undefined8 *)(param_1 + 10) = uVar5;
      *(undefined8 *)(param_1 + 0xc) = uVar6;
      *(undefined8 *)(param_1 + 0xe) = uVar7;
      piVar17 = param_3 + 0xf;
      piVar14 = param_1;
      do {
        uVar1 = *(undefined8 *)(piVar17 + 2);
        uVar2 = *(undefined8 *)(piVar17 + 4);
        uVar3 = *(undefined8 *)(piVar17 + 6);
        uVar4 = *(undefined8 *)(piVar17 + 8);
        uVar5 = *(undefined8 *)(piVar17 + 10);
        uVar6 = *(undefined8 *)(piVar17 + 0xc);
        uVar7 = *(undefined8 *)(piVar17 + 0xe);
        *(undefined8 *)(piVar14 + 0x10) = *(undefined8 *)piVar17;
        *(undefined8 *)(piVar14 + 0x12) = uVar1;
        *(undefined8 *)(piVar14 + 0x14) = uVar2;
        *(undefined8 *)(piVar14 + 0x16) = uVar3;
        *(undefined8 *)(piVar14 + 0x18) = uVar4;
        *(undefined8 *)(piVar14 + 0x1a) = uVar5;
        *(undefined8 *)(piVar14 + 0x1c) = uVar6;
        *(undefined8 *)(piVar14 + 0x1e) = uVar7;
        piVar17 = piVar17 + 0x10;
        uVar11 = uVar11 - 1;
        piVar14 = piVar14 + 0x10;
      } while (uVar11 != 0);
      param_2 = param_2 + local_8 * -2;
      param_3 = param_3 + local_8;
      *puVar9 = param_1 + local_8 + 1;
      piVar14 = (int *)*D3D8__D3D_g_pDevice;
      if ((int *)(D3D8__D3D_g_pDevice[1] + 0x200) <= piVar14 + 0x204) {
        uVar11 = DAT_0037ec88 >> 1;
        if (uVar11 < 0xa14) {
          uVar11 = 0xa14;
        }
        uVar15 = DAT_0037ec88;
        if (DAT_0037ec88 < 0xa14) {
          uVar15 = 0xa14;
        }
        piVar14 = (int *)D3D_MakeRequestedSpace_8(uVar11,uVar15);
      }
      local_8 = 0x1ff;
      param_1 = piVar14;
    } while (0x3fd < param_2);
  }
  uVar15 = param_2 >> 1;
  *piVar14 = uVar15 * 0x40000 + 0x40001800;
  piVar18 = param_3;
  piVar17 = piVar14;
  for (uVar11 = uVar15; piVar17 = piVar17 + 1, uVar11 != 0; uVar11 = uVar11 - 1) {
    *piVar17 = *piVar18;
    piVar18 = piVar18 + 1;
  }
  piVar14 = piVar14 + uVar15 + 1;
  if ((param_2 & 1) != 0) {
    uVar8 = *(ushort *)(param_3 + uVar15);
    *piVar14 = 0x41808;
    piVar14[1] = (uint)uVar8;
    piVar14 = piVar14 + 2;
  }
  *piVar14 = 0x417fc;
  piVar14[1] = 0;
  *puVar9 = piVar14 + 2;
  if ((puVar9[2] & 0x1000) != 0) {
    D3D_SetFence(1);
  }
  puVar9[2] = puVar9[2] & 0xffffe7ff;
  return;
}
