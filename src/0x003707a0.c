/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F05B8B2C2D138788184029EF0C8320CE09314EBFCBED24E4EE7761197BA06894
 * Entry: 0x003707a0, Ghidra index: 13353, label: D3DDevice_SetRenderState_RopZCmpAlwaysRead
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void D3D8LTCG__D3DDevice_SetRenderState_RopZCmpAlwaysRead(undefined4 param_1)

{
  D3D8__D3DRS_RopZCmpAlwaysRead = param_1;
  D3D_CommonSetDebugRegisters();
  return;
}
