/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 49ADD160CFCFD2B705C4982299FC4096421E0FF15B40C13622AA9AA8D36DE5B9
 * Entry: 0x0036fa70, Ghidra index: 13331, label: D3DDevice_EndPushBuffer
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037dd90;
undefined4 D3D8LTCG__D3DDevice_EndPushBuffer(void)

{
  int *piVar1;
  uint uVar2;
  undefined1 local_4 [4];
  
  piVar1 = D3D8__D3D_g_pDevice;
  CDevice_SetStateVB_8(D3D8__D3D_g_pDevice,0);
  FUN_0036fb10(local_4);
  *(int *)(piVar1[0xd3] + 0xc) = (*piVar1 - *(int *)(piVar1[0xd3] + 4)) + 4 + piVar1[0xd4];
  *piVar1 = piVar1[0xd6];
  piVar1[1] = piVar1[0xd5];
  piVar1[2] = piVar1[2] & 0xffffff7b;
  uVar2 = *(uint *)piVar1[0xd3] - 0x80000;
  *(uint *)piVar1[0xd3] = uVar2;
  if ((uVar2 & 0x78ffff) == 0) {
    D3D_DestroyResource__LTCG();
  }
  if (piVar1[0xd4] != 0) {
    return 0x88760829;
  }
  DAT_0037dd90 = DAT_0037dd90 | 0x7f7f;
  return 0;
}
