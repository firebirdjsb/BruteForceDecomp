/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 885A6C662A2BD0E83F5A22CB550D78301550A08E987F5909F8A9DCA51AF0C835
 * Entry: 0x003718c0, Ghidra index: 13381, label: D3D_UpdateProjectionViewportTransform
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbox_d3d_device_x86.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037dd90;
extern uint32_t DAT_0037dfd4;
void D3D8LTCG__D3D_UpdateProjectionViewportTransform(void)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50 [5];
  float local_3c;
  float local_28;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  fVar1 = (float)*(int *)(D3D8__D3D_g_pDevice + 0xa98);
  if (*(int *)(D3D8__D3D_g_pDevice + 0xa98) < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  local_5c = fVar1 * *(float *)(D3D8__D3D_g_pDevice + 0x518) * 0.5;
  fVar1 = (float)*(int *)(D3D8__D3D_g_pDevice + 0xa9c);
  if (*(int *)(D3D8__D3D_g_pDevice + 0xa9c) < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  local_3c = fVar1 * *(float *)(D3D8__D3D_g_pDevice + 0x51c) * -0.5;
  local_58 = -local_3c;
  local_60 = (*(float *)(D3D8__D3D_g_pDevice + 0xaa4) - *(float *)(D3D8__D3D_g_pDevice + 0xaa0)) *
             *(float *)(D3D8__D3D_g_pDevice + 0x50c);
  local_54 = *(float *)(D3D8__D3D_g_pDevice + 0x50c) * *(float *)(D3D8__D3D_g_pDevice + 0xaa0);
  if (DAT_0037dfd4 == 2) {
    local_14 = *(float *)(D3D8__D3D_g_pDevice + 0x508) * *(float *)(D3D8__D3D_g_pDevice + 0x50c);
    local_3c = local_3c * local_14;
    local_60 = local_14 * local_60;
    local_5c = local_14 * local_5c;
    local_58 = local_14 * local_58;
    local_54 = local_14 * local_54;
  }
  else {
    local_14 = 1.0;
  }
  pfVar3 = local_50;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pfVar3 = 0.0;
    pfVar3 = pfVar3 + 1;
  }
  local_28 = local_60;
  local_20 = local_5c;
  local_1c = local_58;
  local_18 = local_54;
  local_50[0] = local_5c;
  FUN_00375a20(D3D8__D3D_g_pDevice + 0x530,D3D8__D3D_g_pDevice + 0x850,local_50);
  DAT_0037dd90 = DAT_0037dd90 | 0x200;
  return;
}
