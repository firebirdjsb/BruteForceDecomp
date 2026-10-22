/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C3DDBF9795B85A15EE3FD9295CB1975B8B4E22A68D02A6E0614D2C42C5B020D5
 * Entry: 0x0036fb10, Ghidra index: 13332, label: FUN_0036fb10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbox_d3d_device_x86.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037ec88;
void FUN_0036fb10(int *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  
  piVar1 = D3D8__D3D_g_pDevice;
  iVar5 = *D3D8__D3D_g_pDevice - *(int *)(D3D8__D3D_g_pDevice[0xd3] + 4);
  iVar2 = 0x420 - iVar5;
  uVar8 = (int)(iVar2 + (iVar2 >> 0x1f & 7U)) >> 3;
  if ((0 < (int)uVar8) && (-1 < (char)D3D8__D3D_g_pDevice[2])) {
    D3D8__D3D_g_pDevice[2] = D3D8__D3D_g_pDevice[2] | 0x80;
    piVar4 = (int *)*piVar1;
    if ((int *)(piVar1[1] + 0x200) <= piVar4 + uVar8 + 1) {
      uVar6 = uVar8 * 4 + 0x208;
      uVar3 = DAT_0037ec88 >> 1;
      if (DAT_0037ec88 >> 1 < uVar6) {
        uVar3 = uVar6;
      }
      uVar7 = DAT_0037ec88;
      if (DAT_0037ec88 < uVar6) {
        uVar7 = uVar6;
      }
      piVar4 = (int *)D3D8LTCG__D3D_MakeRequestedSpace_8(uVar3,uVar7);
    }
    *piVar4 = uVar8 * 0x40000 + 0x40000100;
    piVar9 = piVar4;
    for (uVar6 = uVar8 & 0x3fffffff; piVar9 = piVar9 + 1, uVar6 != 0; uVar6 = uVar6 - 1) {
      *piVar9 = 0;
    }
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined1 *)piVar9 = 0;
      piVar9 = (int *)((int)piVar9 + 1);
    }
    *piVar1 = (int)(piVar4 + uVar8 + 1);
    *param_1 = (int)(piVar4 + uVar8 + 1) - *(int *)(piVar1[0xd3] + 4);
    return;
  }
  *param_1 = iVar5;
  return;
}
