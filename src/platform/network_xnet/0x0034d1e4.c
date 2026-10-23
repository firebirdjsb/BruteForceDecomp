/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FF8E899FF433273A7EC0AAB41C4D4F9A0A1179E54ACFA194658304CDE192F561
 * Entry: 0x0034d1e4, Ghidra index: 12998, label: FUN_0034d1e4
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0034d1e4(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  int iVar3;
  
  while (iVar1 = *(int *)(in_ECX + 0x238), iVar1 != 0) {
    iVar3 = *(int *)(in_ECX + 0x230);
    if ((*(byte *)(iVar1 + 0xb) & 0x20) != 0) {
      if (iVar3 == *(int *)(in_ECX + 0x22c)) {
        iVar3 = *(int *)(in_ECX + 0x228);
      }
      else {
        iVar3 = iVar3 + 8;
      }
    }
    if ((*(byte *)(iVar3 + 7) & 0x80) != 0) break;
    FUN_0034c30c();
    if (iVar3 == *(int *)(in_ECX + 0x22c)) {
      iVar3 = *(int *)(in_ECX + 0x228);
    }
    else {
      iVar3 = iVar3 + 8;
    }
    *(int *)(in_ECX + 0x230) = iVar3;
    *(int *)(in_ECX + 0x220) = *(int *)(in_ECX + 0x220) + (-1 - (*(uint *)(iVar1 + 8) >> 0x1d & 1));
    uVar2 = FUN_0034c841(*(ushort *)(iVar1 + 4) + 0xe + (*(uint *)(iVar1 + 8) >> 0x13 & 1) * 8,1);
    MmLockUnlockBufferPages(uVar2);
    *(byte *)(iVar1 + 0xb) = *(byte *)(iVar1 + 0xb) & 0xdf;
    (**(code **)(iVar1 + 0x10))(iVar1);
  }
  if ((*(int *)(in_ECX + 0x218) != 0) && (*(int *)(in_ECX + 0x220) < *(int *)(in_ECX + 0x224))) {
    *(int *)(in_ECX + 0x218) = 0;
    FUN_00355ffd();
    return;
  }
  return;
}
