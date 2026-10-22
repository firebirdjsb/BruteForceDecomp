/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B12EA4A03FD412996C49F55DD3E0E83C411AB1EB7CA5B458E58DF5903A84BF34
 * Entry: 0x000eec80, Ghidra index: 2966, label: FUN_000eec80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037ec88;
void FUN_000eec80(float *param_1,uint *param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  float fStack_c;
  float local_8 [2];
  
  (**(code **)((int)*param_1 + 8))(local_8);
  fVar6 = fStack_c + param_1[2];
  fVar7 = local_8[0] + *param_1;
  fVar1 = param_1[3];
  fVar2 = param_1[2];
  fVar3 = param_1[1];
  fVar4 = *param_1;
  uVar5 = *param_2;
  FUN_00062280();
  FUN_00062230(8);
  D3D8LTCG__D3DDevice_SetVertexDataColor
            (3,((((int)((float)(uVar5 >> 0x18) * param_4) & 0xffU) * 0x100 + (uVar5 & 0xff)) * 0x100
               + (uVar5 >> 8 & 0xff)) * 0x100 + (uVar5 >> 0x10 & 0xff));
  puVar8 = D3D8__D3D_g_pDevice;
  iVar9 = (int)fVar7;
  if ((float)iVar9 < fVar7 == ((float)iVar9 == fVar7)) {
    iVar9 = iVar9 + -1;
  }
  fVar1 = (fVar1 - fVar2) + fVar6;
  iVar10 = (int)fVar1;
  if ((float)iVar10 < fVar1 == ((float)iVar10 == fVar1)) {
    iVar10 = iVar10 + -1;
  }
  puVar11 = (undefined4 *)*D3D8__D3D_g_pDevice;
  if ((undefined4 *)D3D8__D3D_g_pDevice[1] <= puVar11) {
    puVar11 = (undefined4 *)D3D8LTCG__D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
  }
  fVar2 = (fVar3 - fVar4) + fVar7;
  *puVar11 = 0x81880;
  puVar11[1] = (float)iVar10;
  puVar11[2] = (float)iVar9;
  *puVar8 = puVar11 + 3;
  puVar8 = D3D8__D3D_g_pDevice;
  iVar9 = (int)fVar2;
  if ((float)iVar9 < fVar2 == ((float)iVar9 == fVar2)) {
    iVar9 = iVar9 + -1;
  }
  iVar10 = (int)fVar1;
  if ((float)iVar10 < fVar1 == ((float)iVar10 == fVar1)) {
    iVar10 = iVar10 + -1;
  }
  puVar11 = (undefined4 *)*D3D8__D3D_g_pDevice;
  if ((undefined4 *)D3D8__D3D_g_pDevice[1] <= puVar11) {
    puVar11 = (undefined4 *)D3D8LTCG__D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
  }
  puVar11[1] = (float)iVar10;
  puVar11[2] = (float)iVar9;
  *puVar11 = 0x81880;
  *puVar8 = puVar11 + 3;
  D3D8LTCG__D3DDevice_SetVertexDataColor
            (3,((((int)((float)(uVar5 >> 0x18) * param_3) & 0xffU) * 0x100 + (uVar5 & 0xff)) * 0x100
               + (uVar5 >> 8 & 0xff)) * 0x100 + (uVar5 >> 0x10 & 0xff));
  puVar8 = D3D8__D3D_g_pDevice;
  iVar9 = (int)fVar2;
  if ((float)iVar9 < fVar2 == ((float)iVar9 == fVar2)) {
    iVar9 = iVar9 + -1;
  }
  iVar10 = (int)fVar6;
  if ((float)iVar10 < fVar6 == ((float)iVar10 == fVar6)) {
    iVar10 = iVar10 + -1;
  }
  puVar11 = (undefined4 *)*D3D8__D3D_g_pDevice;
  if ((undefined4 *)D3D8__D3D_g_pDevice[1] <= puVar11) {
    puVar11 = (undefined4 *)D3D8LTCG__D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
  }
  *puVar11 = 0x81880;
  puVar11[1] = (float)iVar10;
  puVar11[2] = (float)iVar9;
  *puVar8 = puVar11 + 3;
  puVar8 = D3D8__D3D_g_pDevice;
  iVar9 = (int)fVar7;
  if ((float)iVar9 < fVar7 == ((float)iVar9 == fVar7)) {
    iVar9 = iVar9 + -1;
  }
  iVar10 = (int)fVar6;
  if ((float)iVar10 < fVar6 == ((float)iVar10 == fVar6)) {
    iVar10 = iVar10 + -1;
  }
  puVar11 = (undefined4 *)*D3D8__D3D_g_pDevice;
  if ((undefined4 *)D3D8__D3D_g_pDevice[1] <= puVar11) {
    puVar11 = (undefined4 *)D3D8LTCG__D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
  }
  *puVar11 = 0x81880;
  puVar11[1] = (float)iVar10;
  puVar11[2] = (float)iVar9;
  *puVar8 = puVar11 + 3;
  D3D8LTCG__D3DDevice_End();
  return;
}
