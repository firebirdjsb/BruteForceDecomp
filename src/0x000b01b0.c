/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C1E0FA89AF88B9939D07A7E24C9E1309201DD25161218E84B89987A1FE9ED30B
 * Entry: 0x000b01b0, Ghidra index: 2094, label: FUN_000b01b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037ec88;
void FUN_000b01b0(float param_1,float param_2)

{
  float fVar1;
  int *piVar2;
  undefined4 *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 *puVar8;
  char cVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  float10 fVar13;
  float fVar14;
  int iStack_4;
  
  if ((*(int *)((int)param_1 + 0x44) != 0) &&
     (piVar2 = *(int **)((int)param_1 + 0x34), piVar2 != (int *)0x0)) {
    (**(code **)(*piVar2 + 0x38))(piVar2,0);
    cVar9 = FUN_000a4a60(6);
    if (cVar9 != '\0') {
      FUN_000a4d00();
      FUN_000a4d80();
    }
    FUN_00062230(8);
    if (*(undefined4 **)(iStack_4 + 0x40) == (undefined4 *)0x0) {
      puVar12 = (undefined4 *)0x0;
    }
    else {
      puVar12 = (undefined4 *)**(undefined4 **)(iStack_4 + 0x40);
    }
    puVar3 = *(undefined4 **)(iStack_4 + 0x40);
    fVar13 = (float10)FUN_000bb170();
    fVar1 = (float)fVar13;
    for (; puVar12 != puVar3; puVar12 = (undefined4 *)*puVar12) {
      fVar4 = (float)((int)*(short *)(iStack_4 + 8) + *(int *)(iStack_4 + 0xd4) + puVar12[2]) +
              param_1;
      iVar10 = puVar12[9];
      fVar5 = (float)((int)*(short *)(iStack_4 + 10) + *(int *)(iStack_4 + 0xd8) + puVar12[3]) +
              param_2;
      fVar14 = (float)puVar12[0xb] / *(float *)(iStack_4 + 0x98);
      if (1.0 <= fVar14) {
        fVar14 = 1.0;
      }
      if ((fVar1 == 0.0) || (fVar14 == 0.0)) {
        iVar10 = 0;
      }
      else if ((fVar1 < 1.0) || (fVar14 < 1.0)) {
        iVar10 = (int)((float)iVar10 * fVar14 * fVar1);
      }
      fVar14 = (float)*(int *)(iStack_4 + 0xdc) * (float)puVar12[0xc];
      D3D8LTCG__D3DDevice_SetVertexDataColor
                (3,((puVar12[6] & 0xff | iVar10 << 8) << 8 | puVar12[7] & 0xff) << 8 |
                   puVar12[8] & 0xff);
      puVar8 = D3D8__D3D_g_pDevice;
      puVar11 = (undefined4 *)*D3D8__D3D_g_pDevice;
      if ((undefined4 *)D3D8__D3D_g_pDevice[1] <= puVar11) {
        puVar11 = (undefined4 *)D3D8LTCG__D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
      }
      *puVar11 = 0x818c8;
      puVar11[1] = 0x3f800000;
      puVar11[2] = 0x3f800000;
      *puVar8 = puVar11 + 3;
      puVar8 = D3D8__D3D_g_pDevice;
      puVar11 = (undefined4 *)*D3D8__D3D_g_pDevice;
      if ((undefined4 *)D3D8__D3D_g_pDevice[1] <= puVar11) {
        puVar11 = (undefined4 *)D3D8LTCG__D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
      }
      *puVar11 = 0x81880;
      fVar6 = fVar14 + fVar4;
      puVar11[1] = fVar6;
      fVar7 = fVar5 - fVar14;
      puVar11[2] = fVar7;
      *puVar8 = puVar11 + 3;
      puVar8 = D3D8__D3D_g_pDevice;
      puVar11 = (undefined4 *)*D3D8__D3D_g_pDevice;
      if ((undefined4 *)D3D8__D3D_g_pDevice[1] <= puVar11) {
        puVar11 = (undefined4 *)D3D8LTCG__D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
      }
      *puVar11 = 0x818c8;
      puVar11[1] = 0;
      puVar11[2] = 0x3f800000;
      *puVar8 = puVar11 + 3;
      puVar8 = D3D8__D3D_g_pDevice;
      puVar11 = (undefined4 *)*D3D8__D3D_g_pDevice;
      if ((undefined4 *)D3D8__D3D_g_pDevice[1] <= puVar11) {
        puVar11 = (undefined4 *)D3D8LTCG__D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
      }
      fVar4 = fVar4 - fVar14;
      *puVar11 = 0x81880;
      puVar11[2] = fVar7;
      puVar11[1] = fVar4;
      *puVar8 = puVar11 + 3;
      puVar8 = D3D8__D3D_g_pDevice;
      puVar11 = (undefined4 *)*D3D8__D3D_g_pDevice;
      if ((undefined4 *)D3D8__D3D_g_pDevice[1] <= puVar11) {
        puVar11 = (undefined4 *)D3D8LTCG__D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
      }
      *puVar11 = 0x818c8;
      puVar11[1] = 0;
      puVar11[2] = 0;
      *puVar8 = puVar11 + 3;
      puVar8 = D3D8__D3D_g_pDevice;
      puVar11 = (undefined4 *)*D3D8__D3D_g_pDevice;
      if ((undefined4 *)D3D8__D3D_g_pDevice[1] <= puVar11) {
        puVar11 = (undefined4 *)D3D8LTCG__D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
      }
      fVar14 = fVar14 + fVar5;
      *puVar11 = 0x81880;
      puVar11[1] = fVar4;
      puVar11[2] = fVar14;
      *puVar8 = puVar11 + 3;
      puVar8 = D3D8__D3D_g_pDevice;
      puVar11 = (undefined4 *)*D3D8__D3D_g_pDevice;
      if ((undefined4 *)D3D8__D3D_g_pDevice[1] <= puVar11) {
        puVar11 = (undefined4 *)D3D8LTCG__D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
      }
      *puVar11 = 0x818c8;
      puVar11[1] = 0x3f800000;
      puVar11[2] = 0;
      *puVar8 = puVar11 + 3;
      puVar8 = D3D8__D3D_g_pDevice;
      puVar11 = (undefined4 *)*D3D8__D3D_g_pDevice;
      if ((undefined4 *)D3D8__D3D_g_pDevice[1] <= puVar11) {
        puVar11 = (undefined4 *)D3D8LTCG__D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
      }
      *puVar11 = 0x81880;
      puVar11[1] = fVar6;
      puVar11[2] = fVar14;
      *puVar8 = puVar11 + 3;
    }
    D3D8LTCG__D3DDevice_End();
  }
  return;
}
