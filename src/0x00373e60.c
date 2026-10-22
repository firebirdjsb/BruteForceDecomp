/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 90949DB047E9D2255FD88B8BC1AA3F5B4DB9D643991EB1214A61B2EDCAC66182
 * Entry: 0x00373e60, Ghidra index: 13419, label: Get2DSurfaceDesc_0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037b790;
void D3D8LTCG__Get2DSurfaceDesc_0(void)

{
  uint uVar1;
  int unaff_EBX;
  uint *unaff_ESI;
  int unaff_EDI;
  uint local_14;
  uint local_10;
  uint local_c;
  undefined1 local_8 [4];
  undefined1 local_4 [4];
  
  *unaff_ESI = (uint)*(byte *)(unaff_EDI + 0xd);
  uVar1 = D3DResource_GetType_0();
  unaff_ESI[1] = uVar1;
  unaff_ESI[2] = 0;
  if (unaff_EBX == 0) {
    if ((char)(&DAT_0037b790)[*(byte *)(unaff_EDI + 0xd)] < '\0') {
      unaff_ESI[2] = 1;
    }
    else if (((&DAT_0037b790)[*(byte *)(unaff_EDI + 0xd)] & 0x40) != 0) {
      unaff_ESI[2] = 2;
    }
  }
  if (*(int *)(unaff_EDI + 4) == *(int *)(*(int *)(D3D8__D3D_g_pDevice + 0x15c0) + 4)) {
    unaff_ESI[4] = *(uint *)(D3D8__D3D_g_pDevice + 0x151c);
  }
  else {
    unaff_ESI[4] = 0x11;
  }
  FUN_00373d00(&local_14,&local_10,local_4,local_8,&local_c);
  unaff_ESI[5] = local_14;
  unaff_ESI[6] = local_10;
  unaff_ESI[3] = local_c;
  return;
}
