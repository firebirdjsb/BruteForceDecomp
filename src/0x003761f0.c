/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B4BE39C51303745F7602C27278104B792FA155FC965685ACAC5561E2D5D6D0DE
 * Entry: 0x003761f0, Ghidra index: 13450, label: FUN_003761f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037ec88;
void FUN_003761f0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar1 = D3D8__D3D_g_pDevice;
  puVar2 = (undefined4 *)*D3D8__D3D_g_pDevice;
  if ((undefined4 *)D3D8__D3D_g_pDevice[1] <= puVar2) {
    puVar2 = (undefined4 *)D3D8LTCG__D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
  }
  *puVar2 = 0x42000;
  puVar2[1] = 0xe;
  puVar2[2] = 0x44000;
  puVar2[3] = 0x10;
  puVar2[4] = 0x46000;
  puVar2[5] = 0x11;
  puVar2[6] = 0x40000;
  puVar2[7] = 0xd;
  puVar2[8] = 0x42180;
  puVar2[9] = 7;
  puVar2[10] = 0x442fc;
  puVar2[0xb] = 3;
  puVar4 = puVar1 + 0x53f;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  puVar4 = puVar1 + 0x537;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  puVar1[0x537] = 0;
  puVar1[0x538] = 3;
  puVar2[0xc] = 0x86184;
  puVar2[0xd] = 3;
  puVar2[0xe] = 0xb;
  puVar2[0xf] = 0x1c4184;
  puVar2[0x10] = 0x19;
  puVar2[0x11] = 0x19;
  puVar2[0x12] = 0x19;
  puVar2[0x13] = 0x19;
  puVar2[0x14] = 0x19;
  puVar2[0x15] = 0x19;
  puVar2[0x16] = 0x11;
  *puVar1 = puVar2 + 0x17;
  FUN_003760f0();
  return;
}
