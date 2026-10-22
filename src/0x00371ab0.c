/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 59BE625B1217D2359863EA5ECC77DD5259A8FB4EEDDE10D2AEB3C21A357E3220
 * Entry: 0x00371ab0, Ghidra index: 13383, label: D3D_SetFence
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037ec88;
uint D3D8LTCG__D3D_SetFence(byte param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  
  puVar3 = D3D8__D3D_g_pDevice;
  puVar4 = (undefined4 *)*D3D8__D3D_g_pDevice;
  if ((undefined4 *)D3D8__D3D_g_pDevice[1] <= puVar4) {
    puVar4 = (undefined4 *)D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
  }
  uVar1 = puVar3[0xb];
  puVar4[3] = 0;
  puVar4[5] = 0;
  *puVar4 = 0x41d70;
  puVar4[1] = uVar1;
  puVar4[2] = 0x41d90;
  puVar4[4] = 0x41d90;
  uVar2 = puVar3[0xf];
  *puVar3 = puVar4 + 6;
  uVar5 = uVar1 >> 1 & 0x3f;
  puVar3[uVar5 * 3 + 0x13] = uVar1;
  puVar3[uVar5 * 3 + 0x14] = puVar4;
  puVar3[uVar5 * 3 + 0x15] = uVar2;
  if ((param_1 & 1) != 0) {
    uVar5 = puVar3[0xd] + 1 & puVar3[0xe];
    puVar3[0xd] = uVar5;
    iVar6 = uVar5 * 0xc;
    *(uint *)(iVar6 + puVar3[0x12]) = uVar1;
    *(undefined4 **)(iVar6 + 4 + puVar3[0x12]) = puVar4;
    *(undefined4 *)(iVar6 + 8 + puVar3[0x12]) = uVar2;
  }
  puVar3[0xb] = puVar3[0xb] + 2;
  if ((param_1 & 2) == 0) {
    CDevice_KickOff_0__LTCG_edx1();
  }
  return uVar1;
}
