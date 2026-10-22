/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6566A182D87F809CE7D42A439BB20A82839B316B6EB40AD617A18E8E6425BD28
 * Entry: 0x00371240, Ghidra index: 13379, label: D3D_CommonSetDebugRegisters
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbox_d3d_state_globals_x86.h"
#include "bf_xbox_d3d_device_x86.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037ec88;
extern uint32_t PTR_PTR_00400094;
void D3D8LTCG__D3D_CommonSetDebugRegisters(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar3 = D3D8__D3D_g_pDevice;
  uVar1 = D3D8__D3D_g_pDevice[0x7f2];
  D3D8__D3D_g_pDevice[0x7f2] = uVar1 & 0xfffffff7;
  if (D3D8__D3DRS_DoNotCullUncompressed != 0) {
    puVar3[0x7f2] = uVar1 & 0xfffffff7 | 8;
  }
  uVar1 = puVar3[0x7f3];
  puVar3[0x7f3] = uVar1 & 0xe7efffff;
  if (D3D8__D3DRS_RopZCmpAlwaysRead != 0) {
    puVar3[0x7f3] = uVar1 & 0xe7efffff | 0x100000;
  }
  if (D3D8__D3DRS_RopZRead != 0) {
    puVar3[0x7f3] = puVar3[0x7f3] | 0x8000000;
  }
  puVar4 = (undefined4 *)*puVar3;
  if ((undefined4 *)puVar3[1] <= puVar4) {
    puVar4 = (undefined4 *)D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
  }
  *puVar4 = 0x40110;
  puVar4[1] = 0;
  uVar2 = puVar3[0x7f2];
  puVar4[2] = 0x81d8c;
  puVar4[3] = &PTR_PTR_00400094;
  puVar4[4] = uVar2;
  puVar4[5] = 0x40100;
  puVar4[6] = 9;
  uVar2 = puVar3[0x7f3];
  puVar4[7] = 0x81d8c;
  puVar4[8] = &LAB_00400b80;
  puVar4[9] = uVar2;
  puVar4[10] = 0x40100;
  puVar4[0xb] = 9;
  *puVar3 = puVar4 + 0xc;
  return;
}
