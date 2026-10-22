/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2943F9391C43B3A3C77F3954229BCF2EEC7CF87688A9100939BAD70C377E9E29
 * Entry: 0x0036f7a0, Ghidra index: 13329, label: D3DDevice_RunPushBuffer_4
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037ec88;
void D3D8LTCG__D3DDevice_RunPushBuffer_4(int *param_1)

{
  int *piVar1;
  int in_EAX;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  int local_1c;
  uint local_14;
  int local_10;
  uint local_c;
  uint local_8;
  int *local_4;
  
  piVar1 = D3D8__D3D_g_pDevice;
  CDevice_SetStateVB_8(D3D8__D3D_g_pDevice,0);
  if (*param_1 < 0) {
    iVar8 = *D3D8__D3D_g_pDevice;
    uVar9 = param_1[3] - 4U >> 2;
    if (D3D8__D3D_g_pDevice[1] + 0x200U <= iVar8 + uVar9 * 4) {
      uVar7 = uVar9 * 4 + 0x204;
      uVar4 = DAT_0037ec88 >> 1;
      if (DAT_0037ec88 >> 1 < uVar7) {
        uVar4 = uVar7;
      }
      uVar6 = DAT_0037ec88;
      if (DAT_0037ec88 < uVar7) {
        uVar6 = uVar7;
      }
      iVar8 = D3D_MakeRequestedSpace_8(uVar4,uVar6);
    }
    iVar8 = FUN_0036c810(iVar8,param_1[1],uVar9);
    *piVar1 = iVar8 + uVar9 * 4;
  }
  else {
    uVar7 = param_1[3] - 4;
    uVar9 = param_1[1];
    local_1c = 0;
    if (in_EAX != 0) {
      *(int *)(in_EAX + 8) = piVar1[0xb];
      local_1c = *(int *)(in_EAX + 0xc) + *(int *)(in_EAX + 4);
    }
    if (((piVar1[2] & 4U) == 0) &&
       ((param_1[2] == 0 ||
        ((uint)(piVar1[0xb] - *(int *)piVar1[0xc]) <= (uint)(piVar1[0xb] - param_1[2]))))) {
      piVar2 = (int *)*piVar1;
      if ((int *)piVar1[1] <= piVar2) {
        piVar2 = (int *)D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
      }
      bVar10 = (uint)(piVar1[0xb] - *(int *)piVar1[0xc]) <= (uint)(piVar1[0xb] - piVar1[0x11]);
      if (bVar10) {
        *piVar2 = (uVar9 & 0xfffffff) + 1;
        piVar2 = piVar2 + 1;
      }
      else {
        *piVar2 = 0x41d8c;
        piVar2[1] = (int)piVar2 + 0x1bU & 0xfffffff8;
        piVar2[2] = 0x40100;
        piVar2[3] = uVar7 * 0x20 | 10;
        piVar2[4] = (uVar9 & 0xfffffff) + 2;
        piVar2 = piVar2 + 5;
      }
      if (((uint)piVar2 & 7) != 0) {
        *piVar2 = 0;
        piVar2 = piVar2 + 1;
      }
      local_10 = local_1c;
      local_c = uVar9;
      local_8 = uVar7;
      local_4 = piVar2;
      FUN_00377f00(piVar1 + 0x5f2,&local_10,bVar10);
      *piVar1 = (int)piVar2;
    }
    else {
      if ((piVar1[2] & 4U) == 0) {
        local_14 = 3;
        iVar8 = (uVar9 & 0xfffffff) + 2;
      }
      else {
        local_14 = 4;
        iVar8 = (uVar9 & 0xfffffff) + 1;
      }
      puVar3 = (undefined4 *)*piVar1;
      if ((undefined4 *)piVar1[1] <= puVar3) {
        puVar3 = (undefined4 *)D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
      }
      *puVar3 = 0x40100;
      puVar3[1] = (int)(puVar3 + 3) * 0x20 | local_14;
      puVar3[2] = iVar8;
      puVar3[3] = local_1c;
      puVar3[4] = uVar9;
      puVar3[5] = uVar7;
      puVar3[6] = (int)puVar3 + 0x23U & 0xfffffff8;
      puVar5 = puVar3 + 7;
      if (((uint)puVar5 & 7) != 0) {
        *puVar5 = 0;
        puVar5 = puVar3 + 8;
      }
      *piVar1 = (int)puVar5;
    }
    param_1[2] = piVar1[0xb];
    if ((*(byte *)(piVar1 + 2) & 4) == 0) {
      piVar1[0x11] = piVar1[0xb];
      piVar1[0xf] = piVar1[0xf] + uVar7;
      if (0x2000 < uVar7) {
        D3D_SetFence(0);
        return;
      }
    }
  }
  return;
}
