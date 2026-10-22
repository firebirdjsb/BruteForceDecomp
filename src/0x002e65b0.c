/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7B923A73FE7DD0AE8CE2D54106F844A1E6C91F0AEC834A39899D203017830F8E
 * Entry: 0x002e65b0, Ghidra index: 10496, label: FUN_002e65b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002e65b0(uint param_1)

{
  char cVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int in_ECX;
  int iVar6;
  
  iVar5 = param_1;
  iVar6 = *(int *)(param_1 + 0xc);
  if (iVar6 == -6) {
    iVar6 = *(int *)(*(int *)(in_ECX + 0x24) + 8);
  }
  if (*(char *)(*(int *)(*(int *)(in_ECX + 0x1c) + iVar6 * 4) + 5) == '\0') {
    param_1 = 0;
  }
  else {
    bVar2 = FUN_002e76c0();
    param_1 = (uint)bVar2;
  }
  FUN_002e7610(*(undefined4 *)(iVar5 + 0x18));
  uVar4 = FUN_002e76c0();
  iVar6 = (uVar4 & 0xff) - param_1;
  *(int *)(in_ECX + 0x4874) = *(int *)(in_ECX + 0x4874) + iVar6;
  if ((*(char *)(in_ECX + 0x34) != '\0') && (iVar6 != 0)) {
    iVar5 = *(int *)(iVar5 + 0xc);
    if (iVar5 == -6) {
      iVar5 = *(int *)(*(int *)(in_ECX + 0x24) + 8);
    }
    cVar1 = *(char *)(*(int *)(*(int *)(in_ECX + 0x1c) + iVar5 * 4) + 8);
    bVar2 = -(cVar1 != '\0') & 4;
    cVar1 = (cVar1 != '\0') * '\x04' + '\x01';
    cVar3 = FUN_002e4840(bVar2);
    FUN_002e4850(bVar2,cVar3 + (char)iVar6);
    if ((*(int *)(in_ECX + 0x489c) == 0) || (*(int *)(in_ECX + 0x489c) == 2)) {
      cVar3 = FUN_002e4840(cVar1);
      FUN_002e4850(cVar1,cVar3 - (char)iVar6);
    }
  }
  return 1;
}
