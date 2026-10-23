/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 50863039436A2CC7E6CE0ACF37F8A5A0984411472486FF22C506DC047DD4E29C
 * Entry: 0x00372cf0, Ghidra index: 13401, label: FUN_00372cf0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbox_d3d_device_x86.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037df3c;
extern uint32_t DAT_0037df40;
extern uint32_t DAT_0037df44;
extern uint32_t DAT_0037df48;
extern uint32_t DAT_0037df4c;
extern uint32_t DAT_0037df50;
extern uint32_t DAT_0037df54;
extern uint32_t DAT_0037df58;
extern uint32_t DAT_0037df5c;
uint FUN_00372cf0(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (DAT_0037df3c != 0) {
    uVar2 = ((((((DAT_0037df40 << 2 | DAT_0037df44) << 2 | DAT_0037df48) << 2 | DAT_0037df4c) << 2 |
              DAT_0037df50) << 2 | DAT_0037df54) << 2 | DAT_0037df58) << 2 | DAT_0037df5c;
    uVar1 = *(uint *)(*(int *)(D3D8__D3D_g_pDevice + 0x37c) + 4);
    if ((uVar1 & 0x400) == 0) {
      uVar2 = uVar2 & 0xffffffaa;
    }
    if ((uVar1 & 0x800) == 0) {
      uVar2 = uVar2 & 0xffffff55;
    }
    if ((uVar1 & 0x1000) == 0) {
      uVar2 = uVar2 & 0xffffaaff;
    }
    if ((uVar1 & 0x2000) == 0) {
      uVar2 = uVar2 & 0xffff55ff;
    }
  }
  return uVar2;
}
