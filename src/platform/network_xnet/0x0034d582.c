/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1F02CC33FEBA5ABE55D7212DF3EEF31CE1B998C39CB1420D39855E40F04FF09D
 * Entry: 0x0034d582, Ghidra index: 13004, label: FUN_0034d582
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0034d582(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  
  FUN_0034d518();
  FUN_00352ebc(0x4000);
  if ((*(byte *)(in_ECX + 1) & 4) != 0) {
    if (*(int **)(in_ECX + 0x260) != (int *)0x0) {
      (**(code **)(**(int **)(in_ECX + 0x260) + 0xc))();
    }
    iVar1 = *(int *)(in_ECX + 0x238);
    while (iVar1 != 0) {
      iVar1 = FUN_0034c30c();
      uVar2 = FUN_0034c841(*(ushort *)(iVar1 + 4) + 0xe + (*(uint *)(iVar1 + 8) >> 0x13 & 1) * 8,1);
      MmLockUnlockBufferPages(uVar2);
      FUN_0034c826(iVar1);
      iVar1 = *(int *)(in_ECX + 0x238);
    }
    if (*(int *)(in_ECX + 0x228) != 0) {
      MmFreeContiguousMemory(*(int *)(in_ECX + 0x228));
    }
  }
  FUN_0034cb29();
  return;
}
