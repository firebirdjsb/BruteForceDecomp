/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8ACF6BE3408E1E7603D680AA4FFD5A929AC5234CB2772F9E628D38439A49B74C
 * Entry: 0x0036f1f0, Ghidra index: 13323, label: D3DDevice_SetShaderConstantMode_0__LTCG_eax1
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbox_d3d_device_x86.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_001009d0;
extern uint32_t DAT_0037dd90;
extern uint32_t DAT_0037ec88;
void D3D8LTCG__D3DDevice_SetShaderConstantMode_0__LTCG_eax1(void)

{
  undefined4 *puVar1;
  uint in_EAX;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  puVar1 = D3D8__D3D_g_pDevice;
  if ((in_EAX & 0x10) == 0) {
    uVar3 = D3D8__D3D_g_pDevice[2] & 0xfffffdff;
  }
  else {
    uVar3 = D3D8__D3D_g_pDevice[2] | 0x200;
  }
  D3D8__D3D_g_pDevice[2] = uVar3;
  puVar1[0x536] = in_EAX & 0xffffffef;
  if ((in_EAX & 0xffffffef) == 0) {
    puVar2 = (undefined4 *)*puVar1;
    DAT_0037dd90 = DAT_0037dd90 | 0x1600;
    if ((undefined4 *)puVar1[1] <= puVar2) {
      puVar2 = (undefined4 *)D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
    }
    *puVar2 = 0x41ea4;
    puVar2[1] = 0x3c;
    puVar2[2] = 0x300b80;
    /* Original x86 code loads this guest address into ESI and copies 12 DWORDs. */
    puVar5 = (undefined4 *)(uintptr_t)UINT32_C(0x0037b350);
    puVar6 = puVar2 + 3;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    FUN_00372200();
    FUN_00372200();
    FUN_00372200();
    FUN_00372200();
    puVar2[0x53] = &DAT_001009d0;
    puVar2[0x54] = 0;
    puVar2[0x55] = 0;
    puVar2[0x57] = 0;
    puVar2[0x56] = 0x3f800000;
    puVar2[0x58] = 0x00100a50;
    puVar2[0x59] = 0;
    puVar2[0x5a] = 0;
    puVar2[0x5b] = 0;
    puVar2[0x5c] = 0x3f800000;
    *puVar1 = puVar2 + 0x5d;
  }
  return;
}
