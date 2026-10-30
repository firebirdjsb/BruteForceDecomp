/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2B98946878E200395A9D07FF33D9F549FC172128570847261D4959C7D9DD90AC
 * Entry: 0x000ee6e0, Ghidra index: 2965, label: FUN_000ee6e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037ec88;
void FUN_000ee6e0(int *param_1,float param_2,float param_3,undefined4 *param_4,undefined4 *param_5,
                 undefined4 *param_6,int *param_7)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  float fStack_2c;
  float fStack_28;
  int iStack_24;
  int iStack_20;
  float fStack_1c;
  int iStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float local_8 [2];
  
  (**(code **)(*param_1 + 8))(local_8);
  fStack_2c = fStack_c + (float)param_1;
  param_2 = local_8[0] + param_2;
  iStack_18 = 1;
  FUN_0006a610(&iStack_18);
  iStack_18 = 0;
  FUN_0006a610(&iStack_18);
  if (param_6 == (undefined4 *)0xf83fc948) {
    iStack_18 = 0x302;
    FUN_0006a610(&iStack_18);
  }
  else {
    if (param_6 != (undefined4 *)0xee65bc4b) goto LAB_000ee7c2;
    iStack_18 = 1;
    FUN_0006a610(&iStack_18);
  }
  iStack_18 = 0x303;
  FUN_0006a610(&iStack_18);
LAB_000ee7c2:
  iStack_24 = 0;
  iStack_20 = 0x3f800000;
  fStack_1c = 0.0;
  fStack_28 = 1.0;
  if ((param_7 == (int *)0x0) || (piVar1 = (int *)*param_7, piVar1 == (int *)0x0)) {
    FUN_00062280();
  }
  else {
    (**(code **)(*piVar1 + 0x38))(piVar1,0);
    fStack_2c = (float)param_5[3];
    fStack_28 = (float)param_5[4];
    iStack_24 = param_5[1];
    param_2 = (float)param_5[2];
    iStack_20 = 3;
    FUN_0006a610(&iStack_20);
    iStack_20 = 3;
    FUN_0006a610(&iStack_20);
    cVar4 = (**(code **)(*(int *)*param_5 + 0x24))((int *)*param_5);
    if (cVar4 != '\0') {
      fStack_1c = (float)(**(code **)(*(int *)*param_7 + 0x14))((int *)*param_7);
      fVar2 = (float)(int)fStack_1c;
      iStack_20 = (**(code **)(*(int *)*param_6 + 0x14))((int *)*param_6);
      fVar3 = (float)iStack_20;
      iStack_24 = (**(code **)(*(int *)*param_5 + 0x18))((int *)*param_5);
      iStack_18 = (**(code **)(*(int *)*param_4 + 0x18))((int *)*param_4);
      fStack_28 = (float)iStack_18 * (float)iStack_24 * fVar3 * fVar2 * fStack_28;
    }
  }
  FUN_00062230(8);
  D3D8LTCG__D3DDevice_SetVertexDataColor
            (3,CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)((int)param_5 + 3),*(undefined1 *)param_5),
                                 *(undefined1 *)((int)param_5 + 1)),
                        *(undefined1 *)((int)param_5 + 2)));
  puVar7 = D3D8__D3D_g_pDevice;
  puVar5 = (undefined4 *)*D3D8__D3D_g_pDevice;
  if ((undefined4 *)D3D8__D3D_g_pDevice[1] <= puVar5) {
    puVar5 = (undefined4 *)D3D8LTCG__D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
  }
  *puVar5 = 0x818c8;
  puVar5[1] = iStack_20;
  puVar5[2] = fStack_28;
  *puVar7 = puVar5 + 3;
  puVar5 = D3D8__D3D_g_pDevice;
  iVar6 = (int)param_2;
  if ((float)iVar6 < param_2 == ((float)iVar6 == param_2)) {
    iVar6 = iVar6 + -1;
  }
  fStack_10 = (float)iVar6;
  fVar2 = fStack_2c + param_3;
  iStack_18 = (int)fVar2;
  if ((float)iStack_18 < fVar2 == ((float)iStack_18 == fVar2)) {
    iStack_18 = iStack_18 + -1;
  }
  puVar7 = (undefined4 *)*D3D8__D3D_g_pDevice;
  fStack_14 = (float)iStack_18;
  if ((undefined4 *)D3D8__D3D_g_pDevice[1] <= puVar7) {
    puVar7 = (undefined4 *)D3D8LTCG__D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
  }
  *puVar7 = 0x81880;
  puVar7[1] = fStack_14;
  puVar7[2] = fStack_10;
  *puVar5 = puVar7 + 3;
  puVar7 = D3D8__D3D_g_pDevice;
  puVar5 = (undefined4 *)*D3D8__D3D_g_pDevice;
  if ((undefined4 *)D3D8__D3D_g_pDevice[1] <= puVar5) {
    puVar5 = (undefined4 *)D3D8LTCG__D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
  }
  *puVar5 = 0x818c8;
  puVar5[1] = iStack_24;
  puVar5[2] = fStack_28;
  *puVar7 = puVar5 + 3;
  puVar5 = D3D8__D3D_g_pDevice;
  iVar6 = (int)param_2;
  if ((float)iVar6 < param_2 == ((float)iVar6 == param_2)) {
    iVar6 = iVar6 + -1;
  }
  fStack_14 = (float)iVar6;
  iStack_18 = (int)fStack_2c;
  if ((float)iStack_18 < fStack_2c == ((float)iStack_18 == fStack_2c)) {
    iStack_18 = iStack_18 + -1;
  }
  puVar7 = (undefined4 *)*D3D8__D3D_g_pDevice;
  fStack_10 = (float)iStack_18;
  if ((undefined4 *)D3D8__D3D_g_pDevice[1] <= puVar7) {
    puVar7 = (undefined4 *)D3D8LTCG__D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
  }
  *puVar7 = 0x81880;
  puVar7[1] = fStack_10;
  puVar7[2] = fStack_14;
  *puVar5 = puVar7 + 3;
  puVar7 = D3D8__D3D_g_pDevice;
  puVar5 = (undefined4 *)*D3D8__D3D_g_pDevice;
  if ((undefined4 *)D3D8__D3D_g_pDevice[1] <= puVar5) {
    puVar5 = (undefined4 *)D3D8LTCG__D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
  }
  *puVar5 = 0x818c8;
  puVar5[1] = iStack_24;
  puVar5[2] = fStack_1c;
  *puVar7 = puVar5 + 3;
  puVar5 = D3D8__D3D_g_pDevice;
  fVar2 = param_2 + (float)param_4;
  iVar6 = (int)fVar2;
  if ((float)iVar6 < fVar2 == ((float)iVar6 == fVar2)) {
    iVar6 = iVar6 + -1;
  }
  fStack_14 = (float)iVar6;
  iStack_18 = (int)fStack_2c;
  if ((float)iStack_18 < fStack_2c == ((float)iStack_18 == fStack_2c)) {
    iStack_18 = iStack_18 + -1;
  }
  puVar7 = (undefined4 *)*D3D8__D3D_g_pDevice;
  fStack_10 = (float)iStack_18;
  if ((undefined4 *)D3D8__D3D_g_pDevice[1] <= puVar7) {
    puVar7 = (undefined4 *)D3D8LTCG__D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
  }
  *puVar7 = 0x81880;
  puVar7[1] = fStack_10;
  puVar7[2] = fStack_14;
  *puVar5 = puVar7 + 3;
  puVar7 = D3D8__D3D_g_pDevice;
  puVar5 = (undefined4 *)*D3D8__D3D_g_pDevice;
  if ((undefined4 *)D3D8__D3D_g_pDevice[1] <= puVar5) {
    puVar5 = (undefined4 *)D3D8LTCG__D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
  }
  *puVar5 = 0x818c8;
  puVar5[1] = iStack_20;
  puVar5[2] = fStack_1c;
  *puVar7 = puVar5 + 3;
  puVar5 = D3D8__D3D_g_pDevice;
  param_2 = param_2 + (float)param_4;
  iVar6 = (int)param_2;
  if ((float)iVar6 < param_2 == ((float)iVar6 == param_2)) {
    iVar6 = iVar6 + -1;
  }
  fStack_1c = (float)iVar6;
  fStack_14 = fStack_2c + param_3;
  iStack_18 = (int)fStack_14;
  if ((float)iStack_18 < fStack_14 == ((float)iStack_18 == fStack_14)) {
    iStack_18 = iStack_18 + -1;
  }
  puVar7 = (undefined4 *)*D3D8__D3D_g_pDevice;
  fStack_10 = (float)iStack_18;
  if ((undefined4 *)D3D8__D3D_g_pDevice[1] <= puVar7) {
    puVar7 = (undefined4 *)D3D8LTCG__D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
  }
  *puVar7 = 0x81880;
  puVar7[1] = fStack_10;
  puVar7[2] = fStack_1c;
  *puVar5 = puVar7 + 3;
  D3D8LTCG__D3DDevice_End();
  return;
}
