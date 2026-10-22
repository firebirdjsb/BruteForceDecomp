/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2E5E1CED5CDDB9AA628D3F22823BA3E5C9442D3B7000924E3948475AADA4A633
 * Entry: 0x0036e030, Ghidra index: 13301, label: FUN_0036e030
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbox_d3d_device_x86.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037af64;
extern uint32_t DAT_0037bb40;
void FUN_0036e030(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 local_170 [368];
  
  iVar4 = D3D8__D3D_g_pDevice;
  FUN_0036d750();
  D3D8LTCG__D3D_CommonSetRenderTarget(param_1,0,&DAT_0037af64);
  D3D8LTCG__D3DDevice_SetTexture_4__LTCG_eax_Stage(param_2);
  FUN_0036d390();
  FUN_0036d200(local_170);
  uVar3 = DAT_0037bb40;
  uVar1 = *(undefined4 *)(iVar4 + 0x528);
  uVar2 = *(undefined4 *)(iVar4 + 0x52c);
  *(undefined4 *)(iVar4 + 0x52c) = param_3;
  *(undefined4 *)(iVar4 + 0x528) = param_3;
  DAT_0037bb40 = 5;
  FUN_0036d870();
  *(undefined4 *)(iVar4 + 0x528) = uVar1;
  *(undefined4 *)(iVar4 + 0x52c) = uVar2;
  DAT_0037bb40 = uVar3;
  FUN_0036d4d0(local_170);
  FUN_0036d810();
  return;
}
