/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F4199F2272F132F6916842F092B7361AD83F805BA612DC834DB9B69E67AF245E
 * Entry: 0x003736b0, Ghidra index: 13407, label: FUN_003736b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037dd90;
void FUN_003736b0(void)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = DAT_0037dd90;
  uVar1 = D3D8__D3D_g_pDevice;
  if ((DAT_0037dd90 & 0x100) != 0) {
    FUN_00372270();
  }
  if ((uVar2 & 0x800) != 0) {
    uVar2 = FUN_00378740(uVar1,uVar2);
  }
  if ((uVar2 & 0x4000) != 0) {
    FUN_003723e0(uVar1);
  }
  if ((uVar2 & 0xf) != 0) {
    FUN_00372550(uVar1,uVar2);
  }
  if ((uVar2 & 0x2000) != 0) {
    FUN_00372740();
  }
  if ((uVar2 & 0x400) != 0) {
    FUN_00372920(uVar1);
  }
  if ((uVar2 & 0x1000) != 0) {
    FUN_00373130(uVar1);
  }
  if ((uVar2 & 0x200) != 0) {
    FUN_003734a0(uVar1);
  }
  DAT_0037dd90 = uVar2 & 0xc0000070;
  return;
}
