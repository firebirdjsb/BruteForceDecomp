/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DBAD93505EE4F3CB9BDFF75E9EECF959BEF26F00881CFB9E9E934F7AF2A9BB4F
 * Entry: 0x003760f0, Ghidra index: 13449, label: FUN_003760f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbox_d3d_device_x86.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_000c0180;
extern uint32_t DAT_0037ec88;
void FUN_003760f0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = D3D8__D3D_g_pDevice;
  puVar2 = (undefined4 *)*D3D8__D3D_g_pDevice;
  if ((undefined4 *)D3D8__D3D_g_pDevice[1] <= puVar2) {
    puVar2 = (undefined4 *)D3D8LTCG__D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
  }
  *puVar2 = &DAT_000c0180;
  puVar2[1] = 2;
  puVar2[2] = 3;
  puVar2[3] = 3;
  puVar2[4] = 0x180190;
  puVar2[5] = 4;
  puVar2[6] = 9;
  puVar2[7] = 10;
  puVar2[8] = 3;
  puVar2[9] = 3;
  puVar2[10] = 8;
  puVar2[0xb] = 0x401a8;
  puVar2[0xc] = 0xc;
  puVar2[0xd] = 0x41d6c;
  puVar2[0xe] = 0;
  puVar2 = puVar2 + 0xf;
  *puVar1 = puVar2;
  if ((undefined4 *)puVar1[1] <= puVar2) {
    puVar2 = (undefined4 *)D3D8LTCG__D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
  }
  *puVar2 = 0x409fc;
  puVar2[1] = 1;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[2] = &LAB_00100a50;
  puVar2[6] = 0x3f800000;
  puVar2[7] = 0x416bc;
  puVar2[8] = 1;
  puVar2[9] = 0x41e78;
  puVar2[10] = &LAB_00210000;
  puVar2[0xb] = 0x41d80;
  puVar2[0xc] = 1;
  puVar2[0xd] = 0x41e68;
  puVar2[0xe] = 0x7f800000;
  *puVar1 = puVar2 + 0xf;
  D3D8LTCG__D3DDevice_SetShaderConstantMode_0__LTCG_eax1();
  return;
}
