/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 84EB259C6097B26FF6F1FFA9344B9CAAB37C8E35EDC6260A20E7FC3A52900F56
 * Entry: 0x0036efe0, Ghidra index: 13319, label: D3DDevice_LoadVertexShader_4
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbox_d3d_device_x86.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037ec88;
void D3D8LTCG__D3DDevice_LoadVertexShader_4(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  int in_EAX;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  puVar3 = D3D8__D3D_g_pDevice;
  if ((*(byte *)(D3D8__D3D_g_pDevice + 2) & 0x10) == 0) {
    FUN_0036eed0();
  }
  iVar2 = *(int *)(in_EAX + 0xb);
  puVar5 = (undefined4 *)*puVar3;
  if ((undefined4 *)(puVar3[1] + 0x200) <= puVar5 + iVar2 + 2) {
    uVar1 = iVar2 * 4 + 0x20c;
    uVar4 = DAT_0037ec88 >> 1;
    if (DAT_0037ec88 >> 1 < uVar1) {
      uVar4 = uVar1;
    }
    uVar7 = DAT_0037ec88;
    if (DAT_0037ec88 < uVar1) {
      uVar7 = uVar1;
    }
    puVar5 = (undefined4 *)D3D_MakeRequestedSpace_8(uVar4,uVar7);
  }
  *puVar5 = 0x41e9c;
  puVar5[1] = param_1;
  puVar8 = (undefined4 *)(in_EAX + 0x113);
  puVar9 = puVar5 + 2;
  for (iVar6 = iVar2; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  *puVar3 = puVar5 + iVar2 + 2;
  return;
}
