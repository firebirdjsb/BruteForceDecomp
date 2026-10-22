/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0B5AAF10156272D654E04DD5E33DBBA318E63B76A5E991EB0B7919F3B9957225
 * Entry: 0x0036ff70, Ghidra index: 13337, label: D3DDevice_SetPixelShader_0__LTCG_eax_handle
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00080288;
extern uint32_t DAT_0037dd90;
extern uint32_t DAT_0037dfe8;
extern uint32_t DAT_0037ec88;
void D3D8LTCG__D3DDevice_SetPixelShader_0__LTCG_eax_handle(void)

{
  uint uVar1;
  undefined4 uVar2;
  uint *puVar3;
  uint in_EAX;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  puVar3 = D3D8__D3D_g_pDevice;
  uVar1 = D3D8__D3D_g_pDevice[0xdb];
  D3D8__D3D_g_pDevice[0xdb] = in_EAX;
  if (in_EAX == 0) {
    uVar1 = DAT_0037dd90 | 0x4800;
    if (puVar3[0xdc] != 0) {
      uVar1 = DAT_0037dd90 | 0x6800;
    }
    DAT_0037dd90 = uVar1;
    D3DDevice_SetRenderState_TextureFactor(DAT_0037dfe8);
    if (puVar3[1] <= *puVar3) {
      D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
    }
    puVar4 = (undefined4 *)FUN_00370e10();
    *puVar4 = 0x41e78;
    puVar4[1] = &LAB_00210000;
    *puVar3 = (uint)(puVar4 + 2);
    return;
  }
  uVar6 = *(uint *)(*(int *)(in_EAX + 8) + 0x24) | *(uint *)(*(int *)(in_EAX + 8) + 0x20);
  if ((uVar6 == 0) && (puVar3[0xdc] != 0)) {
    DAT_0037dd90 = DAT_0037dd90 | 0x2000;
  }
  puVar3[0xdc] = uVar6;
  puVar3[0xdd] = *(uint *)(*(int *)(in_EAX + 8) + 0xec) & 0x100;
  puVar4 = *(undefined4 **)(in_EAX + 8);
  puVar3[0xde] = puVar4[0x36];
  puVar5 = (undefined4 *)*puVar3;
  DAT_0037dd90 = DAT_0037dd90 | 0x4000;
  if ((undefined4 *)puVar3[1] <= puVar5) {
    puVar5 = (undefined4 *)D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
  }
  if ((puVar3[2] & 0x10) == 0) {
    puVar9 = puVar4;
    puVar8 = &D3D8__D3D_g_RenderState;
    for (iVar7 = 0x39; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar8 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar8 = puVar8 + 1;
    }
    D3D8__D3DRS_PSTextureModes = puVar4[0x36];
  }
  if (uVar1 == 0) {
    puVar5 = (undefined4 *)FUN_00370e10();
  }
  *puVar5 = &LAB_00200260;
  puVar8 = puVar4;
  puVar9 = puVar5;
  for (iVar7 = 8; puVar9 = puVar9 + 1, iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
  }
  puVar5[9] = 0x800a60;
  puVar9 = puVar4 + 10;
  puVar8 = puVar5 + 10;
  for (iVar7 = 0x20; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar8 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar8 = puVar8 + 1;
  }
  uVar2 = puVar4[0x2a];
  puVar5[0x2a] = 0x417f8;
  puVar5[0x2b] = uVar2;
  puVar5[0x2c] = 0x81e20;
  puVar5[0x2d] = puVar4[0x2b];
  puVar5[0x2e] = puVar4[0x2c];
  puVar5[0x2f] = 0x241e40;
  puVar9 = puVar4 + 0x2d;
  puVar8 = puVar5 + 0x30;
  for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar8 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar8 = puVar8 + 1;
  }
  puVar5[0x39] = 0x81e74;
  puVar5[0x3a] = puVar4[0x37];
  puVar5[0x3b] = puVar4[0x38];
  if (puVar3[0xdc] != 0) {
    puVar5[0x3c] = &DAT_00080288;
    puVar5[0x3d] = puVar4[8];
    puVar5[0x3e] = puVar4[9];
    *puVar3 = (uint)(puVar5 + 0x3f);
    return;
  }
  *puVar3 = (uint)(puVar5 + 0x3c);
  return;
}
