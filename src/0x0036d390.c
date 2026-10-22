/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8787DB3DEB27A1C3A7C1BBE26AEF51C994307C06B97DE12C718AFF826849D7C0
 * Entry: 0x0036d390, Ghidra index: 13290, label: FUN_0036d390
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbox_d3d_device_x86.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037b5e8;
extern uint32_t DAT_0037b640;
extern uint32_t DAT_0037b648;
extern uint32_t DAT_0037b650;
extern uint32_t DAT_0037b658;
extern uint32_t DAT_0037b660;
extern uint32_t DAT_0037b668;
extern uint32_t DAT_0037b670;
extern uint32_t DAT_0037b678;
extern uint32_t DAT_0037b680;
extern uint32_t DAT_0037b688;
extern uint32_t DAT_0037bbe0;
void FUN_0036d390(void)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int *in_EDX;
  
  iVar1 = D3D8__D3D_g_pDevice;
  *in_EDX = *(int *)(D3D8__D3D_g_pDevice + 0x36c);
  in_EDX[1] = *(int *)(iVar1 + 0x380);
  in_EDX[2] = DAT_0037bbe0;
  piVar3 = in_EDX + 5;
  uVar2 = 0;
  do {
    piVar3[-1] = (&D3D8__D3D_g_RenderState)[*(int *)((int)&DAT_0037b640 + uVar2)];
    *piVar3 = (&D3D8__D3D_g_RenderState)[*(int *)((int)&DAT_0037b648 + uVar2)];
    piVar3[1] = (&D3D8__D3D_g_RenderState)[*(int *)((int)&DAT_0037b650 + uVar2)];
    piVar3[2] = (&D3D8__D3D_g_RenderState)[*(int *)((int)&DAT_0037b658 + uVar2)];
    piVar3[3] = (&D3D8__D3D_g_RenderState)[*(int *)((int)&DAT_0037b660 + uVar2)];
    piVar3[4] = (&D3D8__D3D_g_RenderState)[*(int *)((int)&DAT_0037b668 + uVar2)];
    piVar3[5] = (&D3D8__D3D_g_RenderState)[*(int *)((int)&DAT_0037b670 + uVar2)];
    piVar3[6] = (&D3D8__D3D_g_RenderState)[*(int *)((int)&DAT_0037b678 + uVar2)];
    piVar3[7] = (&D3D8__D3D_g_RenderState)[*(int *)((int)&DAT_0037b680 + uVar2)];
    piVar3[8] = (&D3D8__D3D_g_RenderState)[*(int *)((int)&DAT_0037b688 + uVar2)];
    uVar2 = uVar2 + 0x50;
    piVar3 = piVar3 + 10;
  } while (uVar2 < 0xa0);
  piVar3 = in_EDX + 0x18;
  uVar2 = 0;
  do {
    *piVar3 = (&D3D8LTCG__D3D_g_DeferredTextureState)[*(int *)((int)&DAT_0037b5e8 + uVar2)];
    uVar2 = uVar2 + 8;
    piVar3 = piVar3 + 1;
  } while (uVar2 < 0x58);
  if (*in_EDX != 0) {
    piVar3 = in_EDX + 0x23;
    uVar2 = 0;
    do {
      *piVar3 = *(int *)((int)&D3D8__D3D_g_RenderState + uVar2);
      uVar2 = uVar2 + 4;
      piVar3 = piVar3 + 1;
    } while (uVar2 < 0xe4);
    in_EDX[3] = D3D8__D3DRS_PSTextureModes;
  }
  return;
}
