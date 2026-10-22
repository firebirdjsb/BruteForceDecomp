/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F8E3D7560E9F949AF920A38E9C1428FDC778A5FF633A398565FA8C29290345F8
 * Entry: 0x000916c0, Ghidra index: 1787, label: FUN_000916c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_000916c0(void)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint unaff_EDI;
  
  iVar1 = 0;
  uVar3 = unaff_EDI >> 8 & 0xf;
  if (uVar3 != 0) {
    bVar2 = 0x10;
    do {
      switch(unaff_EDI >> (bVar2 & 0x1f) & 3) {
      case 0:
        iVar1 = iVar1 + 8;
        break;
      case 1:
        iVar1 = iVar1 + 0xc;
        break;
      case 2:
        iVar1 = iVar1 + 0x10;
        break;
      case 3:
        iVar1 = iVar1 + 4;
      }
      bVar2 = bVar2 + 2;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return iVar1;
}
