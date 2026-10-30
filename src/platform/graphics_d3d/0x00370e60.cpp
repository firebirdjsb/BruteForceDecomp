/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CC8A28E4D442417905E4CF7F14AEE0648BC1892AF82285903271AAF70901B7D7
 * Entry: 0x00370e60, Ghidra index: 13375, label: D3DDevice_GetViewportOffsetAndScale_0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbox_d3d_state_globals_x86.h"
#include "bf_xbox_d3d_device_x86.h"
void D3D8LTCG__D3DDevice_GetViewportOffsetAndScale_0(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float *in_ECX;
  float *in_EDX;
  
  fVar6 = (float)*(int *)(D3D8__D3D_g_pDevice + 0xa90);
  if (*(int *)(D3D8__D3D_g_pDevice + 0xa90) < 0) {
    fVar6 = fVar6 + 4.2949673e+09;
  }
  fVar6 = fVar6 * *(float *)(D3D8__D3D_g_pDevice + 0x518) + *(float *)(D3D8__D3D_g_pDevice + 0xaa8);
  fVar7 = (float)*(int *)(D3D8__D3D_g_pDevice + 0xa94);
  if (*(int *)(D3D8__D3D_g_pDevice + 0xa94) < 0) {
    fVar7 = fVar7 + 4.2949673e+09;
  }
  fVar7 = fVar7 * *(float *)(D3D8__D3D_g_pDevice + 0x51c) + *(float *)(D3D8__D3D_g_pDevice + 0xaac);
  if (((*(uint *)(D3D8__D3D_g_pDevice + 8) & 0x8000) != 0) &&
     (D3D8__D3DRS_MultiSampleAntiAlias != 0)) {
    fVar6 = fVar6 - 0.5;
    fVar7 = fVar7 - 0.5;
  }
  fVar8 = (float)*(int *)(D3D8__D3D_g_pDevice + 0xa98);
  if (*(int *)(D3D8__D3D_g_pDevice + 0xa98) < 0) {
    fVar8 = fVar8 + 4.2949673e+09;
  }
  fVar8 = fVar8 * *(float *)(D3D8__D3D_g_pDevice + 0x518) * 0.5;
  fVar1 = (float)*(int *)(D3D8__D3D_g_pDevice + 0xa9c);
  if (*(int *)(D3D8__D3D_g_pDevice + 0xa9c) < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  fVar9 = fVar1 * *(float *)(D3D8__D3D_g_pDevice + 0x51c) * -0.5;
  fVar1 = *(float *)(D3D8__D3D_g_pDevice + 0xaa4);
  fVar2 = *(float *)(D3D8__D3D_g_pDevice + 0xaa0);
  fVar3 = *(float *)(D3D8__D3D_g_pDevice + 0x50c);
  fVar4 = *(float *)(D3D8__D3D_g_pDevice + 0xaa0);
  fVar5 = *(float *)(D3D8__D3D_g_pDevice + 0x50c);
  in_EDX[3] = 0.0;
  in_EDX[2] = fVar4 * fVar5;
  *in_EDX = fVar8 + fVar6;
  in_EDX[1] = -fVar9 + fVar7;
  *in_ECX = fVar8;
  in_ECX[3] = 0.0;
  in_ECX[1] = fVar9;
  in_ECX[2] = (fVar1 - fVar2) * fVar3;
  return;
}
