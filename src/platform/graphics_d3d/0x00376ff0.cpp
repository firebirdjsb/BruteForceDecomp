/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 687834F07909C4B8E44EB8C791ED0AC45370D66858FA49B64BC7F529D40985FA
 * Entry: 0x00376ff0, Ghidra index: 13454, label: CDevice_FreeFrameBuffers_4
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbox_d3d_device_x86.h"
void D3D8LTCG__CDevice_FreeFrameBuffers_4(int param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 *puVar7;
  
  iVar2 = AvGetSavedDataAddress();
  if (iVar2 == 0) {
    AvSendTVEncoderOption(*(undefined4 *)(param_1 + 0x17c8),9,1,0);
  }
  iVar2 = *(int *)(param_1 + 0x15b4);
  uVar5 = 0;
  if (iVar2 != 0) {
    if (*(int *)(iVar2 + 0x14) != 0) {
      iVar2 = *(int *)(iVar2 + 0x14);
    }
    *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(param_1 + 0x2c);
    FUN_0036c6a0();
    *(undefined4 *)(param_1 + 0x15b4) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x15b8);
  if (iVar2 != 0) {
    if (*(int *)(iVar2 + 0x14) != 0) {
      iVar2 = *(int *)(iVar2 + 0x14);
    }
    *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(param_1 + 0x2c);
    FUN_0036c6a0();
    *(undefined4 *)(param_1 + 0x15b8) = 0;
  }
  if (*(int *)(param_1 + 0x15bc) != 0) {
    piVar6 = (int *)(param_1 + 0x15c0);
    do {
      puVar1 = (uint *)*piVar6;
      if (puVar1 != (uint *)0x0) {
        uVar3 = *puVar1;
        if ((uVar3 & 0xffff) == 1) {
          if (((uVar3 & 0x70000) == 0x50000) && (puVar1[5] != 0)) {
            D3DResource_Release(puVar1[5]);
          }
          uVar3 = *puVar1;
          if ((uVar3 & 0x780000) != 0) goto LAB_003770b6;
          D3D_DestroyResource__LTCG();
        }
        else {
LAB_003770b6:
          *puVar1 = uVar3 - 1;
        }
        *piVar6 = 0;
      }
      uVar5 = uVar5 + 1;
      piVar6 = piVar6 + 1;
    } while (uVar5 < *(uint *)(param_1 + 0x15bc));
  }
  puVar1 = *(uint **)(param_1 + 0x15cc);
  if (puVar1 == (uint *)0x0) goto LAB_0037711c;
  uVar5 = *puVar1;
  if ((uVar5 & 0xffff) == 1) {
    if (((uVar5 & 0x70000) == 0x50000) && (puVar1[5] != 0)) {
      D3DResource_Release(puVar1[5]);
    }
    uVar5 = *puVar1;
    if ((uVar5 & 0x780000) != 0) goto LAB_0037710f;
    D3D_DestroyResource__LTCG();
  }
  else {
LAB_0037710f:
    *puVar1 = uVar5 - 1;
  }
  *(undefined4 *)(param_1 + 0x15cc) = 0;
LAB_0037711c:
  iVar2 = D3D8__D3D_g_pDevice;
  if (*(int *)(param_1 + 0x1638) != 0) {
    FUN_00374c34(D3D8__D3D_g_pDevice + 0x17c8,*(undefined4 *)(D3D8__D3D_g_pDevice + 0x168c));
    puVar7 = (undefined4 *)(iVar2 + 0x1678);
    for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    MmFreeContiguousMemory(*(undefined4 *)(param_1 + 0x1638));
    *(undefined4 *)(param_1 + 0x1638) = 0;
  }
  iVar2 = D3D8__D3D_g_pDevice;
  if (*(int *)(param_1 + 0x1630) != 0) {
    FUN_00374c34(D3D8__D3D_g_pDevice + 0x17c8,*(undefined4 *)(D3D8__D3D_g_pDevice + 0x1674));
    puVar7 = (undefined4 *)(iVar2 + 0x1660);
    for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    MmFreeContiguousMemory(*(undefined4 *)(param_1 + 0x1630));
    *(undefined4 *)(param_1 + 0x1630) = 0;
  }
  if (*(int *)(param_1 + 0x1634) != 0) {
    MmFreeContiguousMemory(*(int *)(param_1 + 0x1634));
    *(undefined4 *)(param_1 + 0x1634) = 0;
  }
  return;
}
