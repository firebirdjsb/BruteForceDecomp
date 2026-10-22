/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 83AE79357972A2071E7D9D2A823CD676411494F5786C5C85ED17BA75EF9555DD
 * Entry: 0x0036c8a0, Ghidra index: 13283, label: D3DDevice_DrawIndexedVerticesUP
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbox_d3d_device_x86.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037ec88;
void D3D8LTCG__D3DDevice_DrawIndexedVerticesUP
               (undefined4 param_1,uint param_2,ushort *param_3,uint param_4,int param_5)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  int *piVar13;
  uint local_8;
  
  piVar4 = D3D8__D3D_g_pDevice;
  CDevice_SetStateUP_0__LTCG_esi1();
  puVar5 = (undefined4 *)*piVar4;
  if ((undefined4 *)piVar4[1] <= puVar5) {
    puVar5 = (undefined4 *)D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
  }
  *puVar5 = 0x417fc;
  puVar5[1] = param_1;
  *piVar4 = (int)(puVar5 + 2);
  iVar6 = piVar4[0x1df] + param_4;
  iVar3 = piVar4[0x201];
  piVar4[2] = piVar4[2] | 0x800;
  if (param_2 < 0x11) {
    local_8 = 0x10;
  }
  else {
    local_8 = (uint)(0x7ff / (ulonglong)(uint)piVar4[0x1de]);
  }
  while( true ) {
    param_4 = local_8;
    if (param_2 <= local_8) {
      param_4 = param_2;
    }
    param_2 = param_2 - param_4;
    iVar11 = piVar4[0x1de] * param_4;
    piVar8 = (int *)*D3D8__D3D_g_pDevice;
    if ((int *)(D3D8__D3D_g_pDevice[1] + 0x200U) <= piVar8 + iVar11 + 3) {
      uVar1 = iVar11 * 4 + 0x210;
      uVar7 = DAT_0037ec88 >> 1;
      if (DAT_0037ec88 >> 1 < uVar1) {
        uVar7 = uVar1;
      }
      uVar10 = DAT_0037ec88;
      if (DAT_0037ec88 < uVar1) {
        uVar10 = uVar1;
      }
      piVar8 = (int *)D3D_MakeRequestedSpace_8(uVar7,uVar10);
    }
    piVar13 = piVar8 + 1;
    *piVar8 = iVar11 * 0x40000 + 0x40001818;
    do {
      uVar2 = *param_3;
      param_3 = param_3 + 1;
      piVar12 = (int *)((uint)uVar2 * param_5 + iVar6);
      iVar11 = iVar3;
      piVar8 = piVar4 + 0x1e1;
      do {
        for (iVar9 = *piVar8; iVar9 != 0; iVar9 = iVar9 + -1) {
          *piVar13 = *piVar12;
          piVar12 = piVar12 + 1;
          piVar13 = piVar13 + 1;
        }
        piVar12 = (int *)((int)piVar12 + piVar8[1]);
        piVar8 = piVar8 + 2;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
      param_4 = param_4 - 1;
    } while (param_4 != 0);
    if (param_2 == 0) break;
    *piVar4 = (int)piVar13;
  }
  *piVar13 = 0x417fc;
  piVar13[1] = 0;
  *piVar4 = (int)(piVar13 + 2);
  if ((piVar4[2] & 0x1000U) != 0) {
    D3D_SetFence(1);
  }
  piVar4[2] = piVar4[2] & 0xffffe7ff;
  return;
}
