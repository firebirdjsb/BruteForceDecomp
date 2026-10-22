/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A9DFCE51FC183887F1DE60C99908802CBE3622C142C3BCFEE73772694E27F055
 * Entry: 0x00370380, Ghidra index: 13344, label: D3DDevice_SetRenderState_ZEnable
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037dee0;
extern uint32_t DAT_0037dfd4;
extern uint32_t DAT_0037ec88;
void D3D8LTCG__D3DDevice_SetRenderState_ZEnable(int param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  bool bVar5;
  
  puVar1 = D3D8__D3D_g_pDevice;
  puVar2 = (undefined4 *)*D3D8__D3D_g_pDevice;
  if ((undefined4 *)D3D8__D3D_g_pDevice[1] <= puVar2) {
    puVar2 = (undefined4 *)D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
  }
  if ((param_1 == 0) || (puVar1[0x56e] == 0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  *puVar2 = 0x4030c;
  puVar2[1] = uVar4;
  uVar4 = DAT_0037dee0;
  puVar2[2] = 0x41d78;
  puVar2[3] = uVar4;
  *puVar1 = (uint)(puVar2 + 4);
  bVar5 = DAT_0037dfd4 == 2;
  DAT_0037dfd4 = param_1;
  if ((bVar5) || (param_1 == 2)) {
    D3D_UpdateProjectionViewportTransform();
    FUN_0036f320();
    if (puVar1[1] <= *puVar1) {
      D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
    }
    FUN_00371190(puVar1);
    uVar3 = FUN_00370f90();
    *puVar1 = uVar3;
  }
  return;
}
