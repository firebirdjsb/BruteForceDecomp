/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 85BBBD52A87DA9DFE4995F8694C14FDF58F73ABF9DEB58D254190FA6D460EA97
 * Entry: 0x001f6e60, Ghidra index: 7043, label: FUN_001f6e60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001f6e60(undefined4 param_1)

{
  int iVar1;
  int unaff_EDI;
  
  iVar1 = *(int *)(*(int *)(*(int *)(unaff_EDI + 0x80) + 0xb74) + 0x5c);
  if (*(int *)(iVar1 + 0xc) != 2) {
    if (*(int *)(iVar1 + 0xc) != -1) {
      FUN_000a61d0(iVar1,unaff_EDI);
    }
    *(undefined4 *)(iVar1 + 0xc) = 2;
    FUN_000a54f0(iVar1,unaff_EDI);
  }
  *(undefined4 *)(iVar1 + 0x184) = 0x3f800000;
  FUN_001f6eb0(param_1,unaff_EDI);
  return;
}
