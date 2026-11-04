/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 70A48F01FB0FA3819DFB4F9F8AA5D46BAAA6715CDCF2693E4898DA2D8159DBEA
 * Entry: 0x001e5760, Ghidra index: 6800, label: FUN_001e5760
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* XBE E8 at 0x001E579D -> 0x001E57D0; callee RET 8.
 * Original guest stack words evidenced; native ABI remains ABI_UNVERIFIED. */
extern undefined4 FUN_001e57d0(undefined4 guest_word_0, byte *guest_word_1);
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469b54;
undefined4 FUN_001e5760(int param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int in_EAX;
  int iVar4;
  undefined4 uVar5;
  byte *unaff_ESI;
  
  iVar3 = *(int *)(param_1 + 0x2b4 + in_EAX * 4);
  iVar4 = (**(code **)(*DAT_00469b54 + 0x48))();
  if (iVar4 != 0) {
    bVar1 = *(byte *)(iVar3 + 0x34);
    bVar2 = *unaff_ESI;
    if (((((bVar1 ^ bVar2) & 2) != 0) || (((bVar1 ^ bVar2) & 8) != 0)) ||
       (((bVar1 ^ bVar2) & 4) != 0)) {
      uVar5 = FUN_001e57d0(param_1,unaff_ESI);
      return uVar5;
    }
  }
  uVar5 = *(undefined4 *)unaff_ESI;
  *(undefined4 *)(iVar3 + 0x34) = uVar5;
  *(undefined4 *)(iVar3 + 0x38) = *(undefined4 *)(unaff_ESI + 4);
  *(undefined4 *)(iVar3 + 0x3c) = *(undefined4 *)(unaff_ESI + 8);
  return CONCAT31((int3)((uint)uVar5 >> 8),1);
}
