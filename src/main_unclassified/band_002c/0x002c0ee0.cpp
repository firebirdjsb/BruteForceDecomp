/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F7EC977E5231303E4DCC813CDB01EA41001CD22D4E0CE7FE97B7B78410B9590D
 * Entry: 0x002c0ee0, Ghidra index: 10020, label: FUN_002c0ee0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002c0ee0(void)

{
  int unaff_EDI;
  
  if ((*(uint *)(unaff_EDI + 0x14) & 0xc00) == 0) {
    *(uint *)(unaff_EDI + 0x14) = *(uint *)(unaff_EDI + 0x14) & 0xfffdf7ff | 0x10400;
    if (*(int *)(*(int *)(unaff_EDI + 0x28) + 0x18) != 0) {
      FUN_002b5b10(unaff_EDI);
    }
    if (*(int *)(*(int *)(unaff_EDI + 0x44) + 0x18) != 0) {
      FUN_002b5b10(unaff_EDI);
    }
  }
  return;
}
