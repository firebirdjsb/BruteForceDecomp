/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2A5F7AE208E973DDAC07A4061D8EC64730BC83897C016F34BCA7DA1156A3E968
 * Entry: 0x0034a157, Ghidra index: 12927, label: FUN_0034a157
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0034a157(void)

{
  uint uVar1;
  int in_ECX;
  int iVar2;
  
  FUN_00349cac();
  if ((*(byte *)(in_ECX + 2) & 0x10) != 0) {
    FUN_0034fdd8();
    FUN_00348dc9();
    FUN_00348044();
    if (*(int *)(in_ECX + 0xac0) != 0) {
      uVar1 = (uint)*(ushort *)(in_ECX + 0xacc);
      iVar2 = uVar1 * 0xf4 + -0xf4 + *(int *)(in_ECX + 0xac0);
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        FUN_0034a037(iVar2);
        iVar2 = iVar2 + -0xf4;
      }
      if (*(int *)(in_ECX + 0xac0) != 0) {
        ExFreePool(*(int *)(in_ECX + 0xac0));
      }
    }
    iVar2 = *(int *)(in_ECX + 0xac4);
    if (iVar2 != 0) {
      for (uVar1 = (uint)*(byte *)(in_ECX + 0xe); uVar1 != 0; uVar1 = uVar1 - 1) {
        FUN_00349730(iVar2,0);
        iVar2 = iVar2 + 0x130;
      }
      if (*(int *)(in_ECX + 0xac4) != 0) {
        ExFreePool(*(int *)(in_ECX + 0xac4));
      }
    }
  }
  FUN_00352ebc(0x1000000);
  FUN_00355b72();
  return;
}
