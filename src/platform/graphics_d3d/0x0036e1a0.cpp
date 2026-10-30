/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 56DC5F2BE1C941CB9FDC398193C06A97FB416BEF1BC26EB65BCE365C5CB0BCC8
 * Entry: 0x0036e1a0, Ghidra index: 13304, label: D3DDevice_SetTransform_0__LTCG_eax1_edx2
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbox_d3d_device_x86.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037dd90;
void D3D8LTCG__D3DDevice_SetTransform_0__LTCG_eax1_edx2(void)

{
  int iVar1;
  int in_EAX;
  uint uVar2;
  int iVar3;
  undefined4 *in_EDX;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  iVar1 = D3D8__D3D_g_pDevice;
  puVar4 = in_EDX;
  puVar5 = (undefined4 *)(in_EAX * 0x40 + 0x810 + D3D8__D3D_g_pDevice);
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  DAT_0037dd90 = DAT_0037dd90 | *(uint *)(in_EAX * 4 + 0x37b5c0);
  if (in_EAX == 1) {
    if (((float)in_EDX[10] == (float)in_EDX[0xb]) || ((float)in_EDX[10] == 0.0)) {
      *(undefined4 *)(iVar1 + 0x500) = 0;
      *(undefined4 *)(iVar1 + 0x504) = 0x3f800000;
    }
    else {
      *(float *)(iVar1 + 0x500) =
           (float)in_EDX[0xf] - ((float)in_EDX[0xe] / (float)in_EDX[10]) * (float)in_EDX[0xb];
      *(float *)(iVar1 + 0x504) =
           (((float)in_EDX[0xf] - (float)in_EDX[0xe]) / ((float)in_EDX[10] - (float)in_EDX[0xb])) *
           (float)in_EDX[0xb] + (float)in_EDX[0xf];
    }
    uVar2 = *(uint *)(iVar1 + 8) & 0xfffffffd;
    *(uint *)(iVar1 + 8) = uVar2;
    *(float *)(iVar1 + 0x508) = 1.0 / *(float *)(iVar1 + 0x504);
    if (((((float)in_EDX[3] == 0.0) && ((float)in_EDX[7] == 0.0)) && ((float)in_EDX[0xb] == 0.0)) &&
       (in_EDX[0xf] == 0x3f800000)) {
      *(uint *)(iVar1 + 8) = uVar2 | 2;
    }
    D3D_UpdateProjectionViewportTransform();
    FUN_0036f320();
  }
  return;
}
