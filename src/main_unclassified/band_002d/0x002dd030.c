/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 357EFF4C9DF646DE66368D7E93E609B5A3A5EDA57A93E77C8491A4AE4DDCF48A
 * Entry: 0x002dd030, Ghidra index: 10313, label: FUN_002dd030
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002dd030(void)

{
  int iVar1;
  int iVar2;
  int unaff_ESI;
  
  iVar2 = *(ushort *)(unaff_ESI + 0x32) - 1;
  while (-1 < iVar2) {
    iVar2 = iVar2 + -1;
    iVar1 = *(int *)(*(int *)(unaff_ESI + 0x34) + 4 + iVar2 * 4);
    *(undefined4 *)(iVar1 + 0x84) = 0;
    *(undefined4 *)(iVar1 + 0x80) = 0;
    *(undefined4 *)(iVar1 + 0x7c) = 0;
    *(undefined4 *)(iVar1 + 0x94) = 0;
    *(undefined4 *)(iVar1 + 0x90) = 0;
    *(undefined4 *)(iVar1 + 0x8c) = 0;
  }
  return;
}
