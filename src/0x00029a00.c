/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2489592451E4AB580BE7A516FF0A22383AA05F8AFE9AF7E28A353D8C28579513
 * Entry: 0x00029a00, Ghidra index: 280, label: FUN_00029a00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00029a00(undefined4 param_1)

{
  char cVar1;
  int unaff_EDI;
  
  FUN_000120f0();
  FUN_0011dfa0(param_1,0x3f19999a,0x40e00000,unaff_EDI + 0x930,0);
  cVar1 = FUN_0004bbd0();
  if (cVar1 != '\0') {
    *(uint *)(unaff_EDI + 0x3c4) = *(uint *)(unaff_EDI + 0x3c4) | 0x4000;
    FUN_00025730(unaff_EDI + 0x930,1,1);
    return 1;
  }
  return 0;
}
