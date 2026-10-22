/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B1DFF9006C76F3080063230729ED3B6967B0E02A59C8237DB7300AB58655FE94
 * Entry: 0x0036e5d0, Ghidra index: 13307, label: D3DDevice_SetPalette_4
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037ec88;
void D3D8LTCG__D3DDevice_SetPalette_4(uint *param_1)

{
  uint uVar1;
  uint *puVar2;
  int in_EAX;
  int *piVar3;
  uint uVar4;
  
  puVar2 = D3D8__D3D_g_pDevice;
  if (D3D8__D3D_g_pDevice[in_EAX + 0x2d2] != 0) {
    *(uint *)(D3D8__D3D_g_pDevice[in_EAX + 0x2d2] + 8) = D3D8__D3D_g_pDevice[0xb];
    uVar4 = *(uint *)puVar2[in_EAX + 0x2d2] - 0x80000;
    *(uint *)puVar2[in_EAX + 0x2d2] = uVar4;
    if ((uVar4 & 0x78ffff) == 0) {
      D3D_DestroyResource__LTCG();
    }
  }
  puVar2[in_EAX + 0x2d2] = (uint)param_1;
  if (param_1 != (uint *)0x0) {
    uVar4 = *param_1;
    *param_1 = uVar4 + 0x80000;
    piVar3 = (int *)*puVar2;
    if ((int *)puVar2[1] <= piVar3) {
      piVar3 = (int *)D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
    }
    uVar1 = param_1[1];
    *piVar3 = in_EAX * 0x40 + 0x41b20;
    piVar3[1] = uVar1 | uVar4 + 0x80000 >> 0x1c;
    *puVar2 = (uint)(piVar3 + 2);
  }
  return;
}
