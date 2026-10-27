/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3DEA9D09E0D916691968326915DB6B88CEBCEF02762C8A5E83FFF20E54999B8D
 * Entry: 0x0036f320, Ghidra index: 13324, label: FUN_0036f320
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbox_d3d_device_x86.h"
#include "bf_xbox_d3d_state_globals_x86.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037df0c;
extern uint32_t DAT_0037dfd4;
extern uint32_t DAT_0037ec88;
void FUN_0036f320(void)

{
  uint uVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 *unaff_ESI;
  int iVar9;
  
  if ((*(byte *)(unaff_ESI[0xdf] + 4) & 2) == 0) {
    return;
  }
  if (DAT_0037df0c == 0) {
    uVar8 = 0x37b4f0;
  }
  else {
    if ((*(byte *)(unaff_ESI + 2) & 2) != 0) {
      iVar9 = 0x2c;
      uVar8 = 0x37b440;
      goto LAB_0036f361;
    }
    uVar8 = 0x37b380;
  }
  iVar9 = 0x30;
LAB_0036f361:
  puVar6 = (undefined4 *)*D3D8__D3D_g_pDevice;
  if ((undefined4 *)(D3D8__D3D_g_pDevice[1] + 0x200) <= puVar6 + iVar9 + 0x1e) {
    uVar1 = iVar9 * 4 + 0x27c;
    uVar5 = DAT_0037ec88 >> 1;
    if (DAT_0037ec88 >> 1 < uVar1) {
      uVar5 = uVar1;
    }
    uVar7 = DAT_0037ec88;
    if (DAT_0037ec88 < uVar1) {
      uVar7 = uVar1;
    }
    puVar6 = (undefined4 *)D3D8LTCG__D3D_MakeRequestedSpace_8(uVar5,uVar7);
  }
  *puVar6 = 0x41ea4;
  puVar6[1] = 0;
  puVar6[2] = 0x00200b80;
  if (DAT_0037dfd4 == 2) {
    fVar4 = (float)unaff_ESI[0x143] * (float)unaff_ESI[0x142];
  }
  else {
    fVar4 = 1.0;
  }
  puVar6[3] = unaff_ESI[0x146];
  puVar6[4] = unaff_ESI[0x147];
  uVar3 = unaff_ESI[0x143];
  puVar6[6] = fVar4;
  fVar4 = 0.0;
  puVar6[5] = uVar3;
  if (((char)((uint)unaff_ESI[2] >> 8) < '\0') && (D3D8__D3DRS_MultiSampleAntiAlias != 0)) {
    fVar4 = 0.5;
  }
  puVar6[7] = (float)unaff_ESI[0x2aa] - fVar4;
  fVar2 = (float)unaff_ESI[0x2ab];
  puVar6[9] = 0;
  puVar6[10] = 0;
  puVar6[8] = fVar2 - fVar4;
  puVar6[0xb] = 0x41e9c;
  puVar6[0xc] = 0;
  uVar8 = FUN_0036ef80(uVar8,iVar9);
  *unaff_ESI = uVar8;
  return;
}
