/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 830535C836F30A7C3474A8A477B61CB67984CB0EB3392EB3A1A39AD28BB32E60
 * Entry: 0x0005be70, Ghidra index: 936, label: FUN_0005be70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0005be70(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int unaff_ESI;
  int unaff_EDI;
  
  uVar1 = *(uint *)(unaff_ESI + 4);
  uVar2 = 0;
  if (uVar1 != 0) {
    if (uVar1 != 0) goto LAB_0005be81;
    iVar3 = 0;
    while (*(int *)(iVar3 + 4) != unaff_EDI) {
      uVar2 = uVar2 + 1;
      if (uVar1 <= uVar2) {
        return 0;
      }
LAB_0005be81:
      iVar3 = *(int *)(*(int *)(unaff_ESI + 8) + uVar2 * 4);
    }
    if (uVar2 != 0xffffffff) {
      if (uVar1 <= uVar2) {
        return uRam00000014;
      }
      return *(undefined4 *)(*(int *)(*(int *)(unaff_ESI + 8) + uVar2 * 4) + 0x14);
    }
  }
  return 0;
}
