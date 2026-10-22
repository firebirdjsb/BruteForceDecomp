/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8B7793DDDFEBF9B62D4A9FA7283323A16C6CC718FC14664779AA0707B088B1FE
 * Entry: 0x0036f070, Ghidra index: 13320, label: D3DDevice_LoadVertexShaderProgram
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbox_d3d_device_x86.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037ec88;
void D3D8LTCG__D3DDevice_LoadVertexShaderProgram(undefined4 *param_1,int param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  
  puVar2 = D3D8__D3D_g_pDevice;
  uVar8 = (uint)*(ushort *)((int)param_1 + 2);
  if ((*(byte *)(D3D8__D3D_g_pDevice + 2) & 0x10) == 0) {
    puVar9 = D3D8__D3D_g_pDevice + param_2 * 4 + 0x316;
    puVar4 = param_1;
    for (iVar6 = uVar8 << 2; puVar4 = puVar4 + 1, iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar9 = *puVar4;
      puVar9 = puVar9 + 1;
    }
  }
  puVar4 = (undefined4 *)*puVar2;
  if ((undefined4 *)(puVar2[1] + 0x200) <= puVar4 + uVar8 * 4 + 0x13) {
    uVar1 = uVar8 * 0x10 + 0x250;
    uVar3 = DAT_0037ec88 >> 1;
    if (DAT_0037ec88 >> 1 < uVar1) {
      uVar3 = uVar1;
    }
    uVar7 = DAT_0037ec88;
    if (DAT_0037ec88 < uVar1) {
      uVar7 = uVar1;
    }
    puVar4 = (undefined4 *)D3D_MakeRequestedSpace_8(uVar3,uVar7);
  }
  *puVar4 = 0x41e9c;
  puVar4[1] = param_2;
  uVar5 = FUN_0036ef80(param_1 + 1,uVar8 << 2);
  *puVar2 = uVar5;
  return;
}
