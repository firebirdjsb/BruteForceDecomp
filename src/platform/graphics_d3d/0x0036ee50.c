/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FA377CD0A26E78ABF8D673E784F7412794DEC9ABC6713FF51DE34FC8C2D33555
 * Entry: 0x0036ee50, Ghidra index: 13316, label: D3DDevice_SetStreamSource_4
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbox_d3d_device_x86.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037b958;
extern uint32_t DAT_0037dd90;
void D3D8LTCG__D3DDevice_SetStreamSource_4(int param_1)

{
  int iVar1;
  int in_EAX;
  uint uVar2;
  int *unaff_EBX;
  
  iVar1 = D3D8__D3D_g_pDevice;
  if (unaff_EBX != (int *)0x0) {
    *unaff_EBX = *unaff_EBX + 0x80000;
  }
  if ((&DAT_0037b958)[in_EAX * 3] != 0) {
    *(undefined4 *)((&DAT_0037b958)[in_EAX * 3] + 8) = *(undefined4 *)(iVar1 + 0x2c);
    uVar2 = *(uint *)(&DAT_0037b958)[in_EAX * 3] - 0x80000;
    *(uint *)(&DAT_0037b958)[in_EAX * 3] = uVar2;
    if ((uVar2 & 0x78ffff) == 0) {
      D3D_DestroyResource__LTCG();
    }
  }
  iVar1 = (&D3D_g_Stream)[in_EAX * 3];
  (&D3D_g_Stream)[in_EAX * 3] = param_1;
  (&DAT_0037b958)[in_EAX * 3] = unaff_EBX;
  if (param_1 != iVar1) {
    DAT_0037dd90 = DAT_0037dd90 | 0x70;
    return;
  }
  DAT_0037dd90 = DAT_0037dd90 | 0x40;
  return;
}
