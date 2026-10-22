/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7D07EB9ED2DA3D67FDA02EBAB857B95C5AA1AFF6E5ED0BE6D6BC58DD796D1BC2
 * Entry: 0x0036e800, Ghidra index: 13311, label: D3DDevice_SetScissors
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037ec88;
void D3D8LTCG__D3DDevice_SetScissors(uint param_1,uint param_2,int *param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int *extraout_ECX;
  int extraout_ECX_00;
  undefined4 *puVar7;
  undefined1 *puVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  undefined8 uVar12;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  uVar9 = param_1;
  puVar4 = D3D8__D3D_g_pDevice;
  fVar2 = (float)D3D8__D3D_g_pDevice[0x146];
  fVar3 = (float)D3D8__D3D_g_pDevice[0x147];
  if (param_1 == 0) {
    local_10 = D3D8__D3D_g_pDevice[0x2a4];
    local_c = D3D8__D3D_g_pDevice[0x2a5];
    local_8 = D3D8__D3D_g_pDevice[0x2a6] + local_10;
    local_4 = D3D8__D3D_g_pDevice[0x2a7] + local_c;
    param_3 = &local_10;
    param_1 = 1;
    param_2 = uVar9;
  }
  puVar5 = (undefined4 *)*D3D8__D3D_g_pDevice;
  if ((undefined4 *)D3D8__D3D_g_pDevice[1] <= puVar5) {
    puVar5 = (undefined4 *)D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
  }
  *puVar5 = 0x402b4;
  puVar5[1] = param_2;
  puVar7 = puVar5 + 2;
  if (param_1 != 0) {
    iVar10 = 0x402e0;
    puVar8 = (undefined1 *)((int)puVar7 + (-4 - (int)puVar5) + (int)param_3);
    uVar9 = param_1;
    do {
      iVar1 = *(int *)(puVar8 + -4);
      iVar6 = FUN_00373a30((float)*(int *)(puVar8 + 4) * fVar2 + 0.5);
      uVar12 = FUN_00373a30((float)iVar1 * fVar2 + 0.5);
      piVar11 = (int *)((ulonglong)uVar12 >> 0x20);
      *extraout_ECX = iVar10 + -0x20;
      extraout_ECX[1] = (uint)uVar12 | (iVar6 + -1) * 0x10000;
      iVar1 = *piVar11;
      iVar6 = FUN_00373a30((float)piVar11[2] * fVar3 + 0.5);
      uVar12 = FUN_00373a30((float)iVar1 * fVar3 + 0.5);
      *(int *)(extraout_ECX_00 + 8) = iVar10;
      *(uint *)(extraout_ECX_00 + 0xc) = (uint)uVar12 | (iVar6 + -1) * 0x10000;
      puVar7 = (undefined4 *)(extraout_ECX_00 + 0x10);
      puVar8 = (undefined1 *)((int)((ulonglong)uVar12 >> 0x20) + 0x10);
      iVar10 = iVar10 + 4;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  *puVar4 = puVar7;
  piVar11 = puVar4 + 0x5c8;
  for (iVar10 = (param_1 & 0xfffffff) << 2; iVar10 != 0; iVar10 = iVar10 + -1) {
    *piVar11 = *param_3;
    param_3 = param_3 + 1;
    piVar11 = piVar11 + 1;
  }
  for (iVar10 = 0; iVar10 != 0; iVar10 = iVar10 + -1) {
    *(char *)piVar11 = (char)*param_3;
    param_3 = (int *)((int)param_3 + 1);
    piVar11 = (int *)((int)piVar11 + 1);
  }
  puVar4[0x5e8] = param_1;
  puVar4[0x5e9] = param_2;
  return;
}
