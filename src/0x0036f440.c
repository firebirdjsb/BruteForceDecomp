/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9FEA5DAC15551AA0225E9FF34E65F5BAD0E20F83864E9C58710691F33CE7FEE6
 * Entry: 0x0036f440, Ghidra index: 13325, label: D3DDevice_SetVertexShader
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037b838;
extern uint32_t DAT_0037dd90;
extern uint32_t DAT_0037ec88;
void D3D8LTCG__D3DDevice_SetVertexShader(uint param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined *puVar7;
  
  puVar3 = D3D8__D3D_g_pDevice;
  iVar1 = *(int *)(D3D8__D3D_g_pDevice[0xdf] + 4);
  iVar2 = *(int *)(D3D8__D3D_g_pDevice[0xdf] + 0x10);
  if ((param_1 & 1) == 0) {
    puVar7 = &DAT_0037b838;
    FUN_0036ed10();
  }
  else {
    puVar7 = (undefined *)(param_1 - 1);
  }
  uVar4 = DAT_0037dd90 | 0x70;
  if (iVar2 != *(int *)(puVar7 + 0x10)) {
    uVar4 = DAT_0037dd90 | 0x470;
  }
  DAT_0037dd90 = uVar4;
  if (iVar1 != *(int *)(puVar7 + 4)) {
    DAT_0037dd90 = DAT_0037dd90 | 0x1600;
  }
  puVar3[0xdf] = puVar7;
  puVar3[0xe0] = param_1;
  if ((puVar7[4] & 0x10) != 0) {
    D3DDevice_LoadVertexShader_4(0);
    D3DDevice_SelectVertexShader_0__LTCG_eax1_ebx2();
    return;
  }
  puVar5 = (undefined4 *)*puVar3;
  puVar3[0xe1] = 0;
  if ((undefined4 *)puVar3[1] <= puVar5) {
    puVar5 = (undefined4 *)D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
  }
  if ((*(uint *)(puVar7 + 4) & 0x400) == 0) {
    *puVar5 = 0x4194c;
    puVar5[1] = 0xffffffff;
    puVar5 = puVar5 + 2;
  }
  if ((*(uint *)(puVar7 + 4) & 0x800) == 0) {
    *puVar5 = 0x41950;
    puVar5[1] = 0;
    puVar5 = puVar5 + 2;
  }
  if ((*(uint *)(puVar7 + 4) & 0x1000) == 0) {
    *puVar5 = 0x4195c;
    puVar5[1] = 0xffffffff;
    puVar5 = puVar5 + 2;
  }
  if ((*(uint *)(puVar7 + 4) & 0x2000) == 0) {
    *puVar5 = 0x41960;
    puVar5[1] = 0;
    puVar5 = puVar5 + 2;
  }
  if ((puVar7[4] & 2) != 0) {
    *puVar5 = 0x41ea0;
    puVar5[1] = 0;
    puVar5[2] = 0x81e94;
    puVar5[3] = 6;
    puVar5[4] = 0;
    uVar6 = FUN_00370f90();
    *puVar3 = uVar6;
    FUN_0036f320();
    return;
  }
  *puVar5 = 0x41e94;
  puVar5[1] = 4;
  uVar6 = FUN_00370f90();
  *puVar3 = uVar6;
  return;
}
