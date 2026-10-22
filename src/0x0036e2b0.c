/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3A474EDC26A10ED3620315B42355B983160BF78D5771F70C38167A332B87AF63
 * Entry: 0x0036e2b0, Ghidra index: 13305, label: D3DDevice_SetViewport
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbox_d3d_device_x86.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037dd90;
extern uint32_t DAT_0037ec88;
void D3D8LTCG__D3DDevice_SetViewport(uint *param_1)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  puVar2 = D3D8__D3D_g_pDevice;
  uVar4 = D3D8__D3D_g_pDevice[0x56d];
  if (uVar4 == D3D8__D3D_g_pDevice[0x570]) {
    uVar4 = D3D8__D3D_g_pDevice[0x571];
  }
  uVar6 = *param_1;
  uVar5 = param_1[1];
  uVar7 = -(uint)(uVar6 != 0) & uVar6;
  uVar3 = -(uint)(uVar5 != 0) & uVar5;
  uVar1 = *(uint *)(uVar4 + 0x10);
  if (uVar1 == 0) {
    uVar8 = 1 << ((byte)(*(uint *)(uVar4 + 0xc) >> 0x14) & 0xf);
  }
  else {
    uVar8 = (uVar1 & 0xfff) + 1;
  }
  uVar6 = uVar6 + param_1[2];
  if (uVar8 <= uVar6) {
    if (uVar1 == 0) {
      uVar6 = 1 << ((byte)(*(uint *)(uVar4 + 0xc) >> 0x14) & 0xf);
    }
    else {
      uVar6 = (uVar1 & 0xfff) + 1;
    }
  }
  if (uVar1 == 0) {
    uVar8 = 1 << (*(byte *)(uVar4 + 0xf) & 0xf);
  }
  else {
    uVar8 = (uVar1 >> 0xc & 0xfff) + 1;
  }
  uVar5 = param_1[3] + uVar5;
  if (uVar8 <= uVar5) {
    if (uVar1 == 0) {
      uVar5 = 1 << (*(byte *)(uVar4 + 0xf) & 0xf);
    }
    else {
      uVar5 = (uVar1 >> 0xc & 0xfff) + 1;
    }
  }
  D3D8__D3D_g_pDevice[0x2a7] = uVar5 - uVar3;
  puVar2[0x2a4] = uVar7;
  puVar2[0x2a5] = uVar3;
  puVar2[0x2a6] = uVar6 - uVar7;
  puVar2[0x2a8] = param_1[4];
  puVar2[0x2a9] = param_1[5];
  D3D_UpdateProjectionViewportTransform();
  D3DDevice_SetScissors(0,0,0);
  if (puVar2[1] <= *puVar2) {
    D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
  }
  uVar4 = FUN_00370f90();
  *puVar2 = uVar4;
  DAT_0037dd90 = DAT_0037dd90 | 0x100;
  return;
}
