/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 59C0B5E22FF9F68FF9FFE9D21078F3E1CFCAA1250317298AC23B475FFCD511BD
 * Entry: 0x00243e90, Ghidra index: 8065, label: FUN_00243e90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00243e90(void)

{
  int iVar1;
  int *unaff_EBX;
  int unaff_EDI;
  
  iVar1 = FUN_002ea01d(0x30);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x18) = 0xf;
    *(undefined4 *)(iVar1 + 0x14) = 0;
    *(undefined1 *)(iVar1 + 4) = 0;
    FUN_0001f4f0(unaff_EDI,0,0xffffffff);
    *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(unaff_EDI + 0x1c);
    FUN_001bddb0(iVar1 + 0x20);
    *unaff_EBX = iVar1;
    return;
  }
  *unaff_EBX = 0;
  return;
}
