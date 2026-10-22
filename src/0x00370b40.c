/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F7031B90D85ED4BC929FF757E3D19FBC74EDDD279832D7169E8F1FB0003FAA9D
 * Entry: 0x00370b40, Ghidra index: 13369, label: D3DDevice_SetTextureState_TexCoordIndex_4
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037bba0;
extern uint32_t DAT_0037dd90;
extern uint32_t DAT_0037ec88;
extern uint32_t DAT_003b7e09;
void D3D8LTCG__D3DDevice_SetTextureState_TexCoordIndex_4(uint param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint unaff_ESI;
  int iVar5;
  
  puVar1 = D3D8__D3D_g_pDevice;
  (&DAT_0037bba0)[unaff_ESI * 0x20] = param_1;
  piVar2 = (int *)*puVar1;
  iVar5 = 0;
  if ((int *)puVar1[1] <= piVar2) {
    piVar2 = (int *)D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
  }
  iVar3 = 0;
  uVar4 = param_1 & 0xffff0000;
  if (uVar4 != 0) {
    *piVar2 = unaff_ESI * 4 + 0x41964;
    piVar2[1] = -0x1000000;
    piVar2 = piVar2 + 2;
    param_1 = unaff_ESI;
    if (uVar4 < 0x30001) {
      if (uVar4 == 0x30000) {
        iVar5 = 0x8512;
        iVar3 = 1;
      }
      else if (uVar4 == 0x10000) {
        iVar5 = 0x8511;
        iVar3 = 1;
      }
      else {
        iVar5 = 0x2400;
      }
    }
    else {
      iVar5 = 0x2401;
    }
  }
  (&DAT_003b7e09)[unaff_ESI] = (char)param_1 + '\t';
  *piVar2 = (unaff_ESI + 0xc03c) * 0x10;
  piVar2[1] = iVar5;
  piVar2[2] = iVar5;
  piVar2[3] = iVar5;
  *puVar1 = piVar2 + 4;
  if ((puVar1[0x145] == 0) && (iVar3 != 0)) {
    DAT_0037dd90 = DAT_0037dd90 | 0x200;
  }
  puVar1[0x145] =
       ~(1 << ((byte)unaff_ESI & 0x1f)) & puVar1[0x145] | iVar3 << ((byte)unaff_ESI & 0x1f);
  DAT_0037dd90 = DAT_0037dd90 | 0x47f;
  return;
}
