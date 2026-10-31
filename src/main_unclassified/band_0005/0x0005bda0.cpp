/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9DD823447D5D1A8B4B9AFD89213355C9402A8FCD14847669D53AE156ABF20AC0
 * Entry: 0x0005bda0, Ghidra index: 934, label: FUN_0005bda0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_0008f6a0(std::uint32_t guest_esi, std::uint32_t guest_word_0);

void FUN_0005bda0(void)

{
  uint uVar1;
  int in_EAX;
  uint uVar2;
  int in_ECX;
  int iVar3;
  int unaff_EBX;
  
  uVar1 = *(uint *)(in_ECX + 4);
  uVar2 = 0;
  if (uVar1 != 0) {
    if (uVar1 != 0) goto LAB_0005bdb7;
    iVar3 = 0;
    while (*(int *)(iVar3 + 4) != in_EAX) {
      uVar2 = uVar2 + 1;
      if (uVar1 <= uVar2) {
        return;
      }
LAB_0005bdb7:
      iVar3 = *(int *)(*(int *)(in_ECX + 8) + uVar2 * 4);
    }
    if (((uVar2 != 0xffffffff) && (uVar2 < uVar1)) &&
       (iVar3 = *(int *)(*(int *)(in_ECX + 8) + uVar2 * 4), iVar3 != 0)) {
      if (unaff_EBX == 0) {
        if (*(int *)(iVar3 + 0xc) != *(int *)(iVar3 + 4)) {
          FUN_0008f6a0(static_cast<std::uint32_t>(iVar3) + 8U, static_cast<std::uint32_t>(*(int *)(iVar3 + 4)));
        }
      }
      else if (*(int *)(iVar3 + 0xc) != unaff_EBX) {
        FUN_0008f6a0(static_cast<std::uint32_t>(iVar3) + 8U, static_cast<std::uint32_t>(unaff_EBX));
        *(byte *)(iVar3 + 0x20) = *(byte *)(iVar3 + 0x20) & 0xfe;
        return;
      }
      *(byte *)(iVar3 + 0x20) = *(byte *)(iVar3 + 0x20) & 0xfe;
    }
  }
  return;
}
