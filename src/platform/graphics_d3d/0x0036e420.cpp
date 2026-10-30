/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 615F81704C8B9B7CDFC742B123BC4DF5C9F0313B55E3FC14C88523BD0B4D3266
 * Entry: 0x0036e420, Ghidra index: 13306, label: D3DDevice_SetTexture_4__LTCG_eax_Stage
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
void D3D8LTCG__D3DDevice_SetTexture_4__LTCG_eax_Stage(int *param_1)

{
  byte bVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  int in_EAX;
  int *piVar8;
  uint uVar9;
  int *piVar10;
  
  puVar6 = D3D8__D3D_g_pDevice;
  puVar2 = (uint *)D3D8__D3D_g_pDevice[in_EAX + 0x2ce];
  if (puVar2 != (uint *)0x0) {
    uVar3 = *puVar2;
    puVar2[2] = D3D8__D3D_g_pDevice[0xb];
    *puVar2 = uVar3 - 0x80000;
    if ((uVar3 - 0x80000 & 0x78ffff) == 0) {
      D3D_DestroyResource__LTCG();
    }
  }
  puVar6[in_EAX + 0x2ce] = (uint)param_1;
  if (param_1 == (int *)0x0) {
    piVar8 = (int *)*puVar6;
    if ((int *)puVar6[1] <= piVar8) {
      piVar8 = (int *)D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
    }
    *piVar8 = in_EAX * 0x40 + 0x41b0c;
    piVar8[1] = 0;
    *puVar6 = (uint)(piVar8 + 2);
    puVar6[in_EAX + 3] = 0x80000000;
    DAT_0037dd90 = DAT_0037dd90 | 0x4800;
    return;
  }
  *param_1 = *param_1 + 0x80000;
  piVar8 = (int *)*puVar6;
  if ((int *)puVar6[1] <= piVar8) {
    piVar8 = (int *)D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
  }
  iVar4 = param_1[3];
  iVar5 = param_1[1];
  *piVar8 = (in_EAX + 0x206c) * 0x40;
  piVar8[1] = iVar5;
  piVar8[2] = iVar4;
  uVar3 = param_1[4];
  piVar10 = piVar8 + 3;
  if (uVar3 != 0) {
    bVar1 = *(byte *)((int)param_1 + 0x13);
    *piVar10 = in_EAX * 0x40 + 0x41b10;
    piVar8[4] = (bVar1 + 1) * 0x400000;
    piVar8[5] = in_EAX * 0x40 + 0x41b1c;
    piVar8[6] = ((uVar3 & 0xfff) + 1) * 0x10000 | (uVar3 >> 0xc & 0xfff) + 1;
    piVar10 = piVar8 + 7;
  }
  uVar3 = param_1[3];
  uVar9 = uVar3 & 0x20f4;
  uVar7 = DAT_0037dd90;
  if (puVar6[in_EAX + 3] != uVar9) {
    if ((char)(uVar9 >> 8) != '\0') {
      uVar9 = uVar3 & 0xf4;
      if ((0x29ff < (uVar3 & 0xff00)) && ((uVar3 & 0xff00) < 0x3101)) {
        uVar9 = uVar9 | 0x40000000;
      }
    }
    puVar6[in_EAX + 3] = uVar9;
    uVar7 = DAT_0037dd90 | 0x4000;
    if (puVar2 == (uint *)0x0) {
      uVar3 = puVar6[in_EAX + 0xd7];
      *piVar10 = in_EAX * 0x40 + 0x41b0c;
      piVar10[1] = uVar3;
      piVar10 = piVar10 + 2;
      uVar7 = DAT_0037dd90 | 0x4800;
    }
  }
  DAT_0037dd90 = uVar7;
  *puVar6 = (uint)piVar10;
  return;
}
