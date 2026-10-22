/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 84892FD91701A334D23318907B5952C91002DDE988022EE5BC07894CCCC2F0CE
 * Entry: 0x0036ccf0, Ghidra index: 13285, label: D3DDevice_SetVertexData4f_16
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037ec88;
void D3D8LTCG__D3DDevice_SetVertexData4f_16(int param_1,int param_2,int param_3,int param_4)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  int unaff_EDI;
  
  puVar1 = D3D8__D3D_g_pDevice;
  piVar2 = (int *)*D3D8__D3D_g_pDevice;
  if ((int *)D3D8__D3D_g_pDevice[1] <= piVar2) {
    piVar2 = (int *)D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
  }
  if (unaff_EDI == -1) {
    iVar3 = 0x1518;
  }
  else {
    iVar3 = (unaff_EDI + 0x1a0) * 0x10;
  }
  *piVar2 = iVar3 + 0x100000;
  piVar2[1] = param_1;
  piVar2[2] = param_2;
  piVar2[3] = param_3;
  piVar2[4] = param_4;
  *puVar1 = (uint)(piVar2 + 5);
  return;
}
