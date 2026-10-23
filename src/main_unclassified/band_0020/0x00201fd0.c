/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 478DBEFB6E5A1399456FDCDA23B34156AC2E3869C66DDFB947F9FBA0000A61AE
 * Entry: 0x00201fd0, Ghidra index: 7269, label: FUN_00201fd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00201fd0(void)

{
  int iVar1;
  int *unaff_EBX;
  uint unaff_ESI;
  int unaff_EDI;
  
  if (*(int *)(unaff_EDI + 0x98) != 0) {
    if ((unaff_ESI < (uint)((*(int *)(unaff_EDI + 0x9c) - *(int *)(unaff_EDI + 0x98)) / 0x24)) &&
       (*(int *)(*(int *)(unaff_EDI + 0x98) + unaff_ESI * 0x24 + 4) != 0)) {
      iVar1 = FUN_00236e00();
      if ((iVar1 != 0) && (unaff_EBX != (int *)0x0)) {
        *unaff_EBX = iVar1;
        return 1;
      }
    }
  }
  return 0;
}
