/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 52863196C6CFB904437691094CAA1A18B0BDAB9DF68AB79A298EE7DD77196AB5
 * Entry: 0x002c0f20, Ghidra index: 10021, label: FUN_002c0f20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002c0f20(void)

{
  int unaff_EDI;
  
  if ((*(uint *)(unaff_EDI + 0x14) & 0xc00) != 0) {
    *(uint *)(unaff_EDI + 0x14) = *(uint *)(unaff_EDI + 0x14) & 0xfffcf3ff;
    if (*(int *)(*(int *)(unaff_EDI + 0x28) + 0x18) != 0) {
      FUN_002b5c20(unaff_EDI);
    }
    if (*(int *)(*(int *)(unaff_EDI + 0x44) + 0x18) != 0) {
      FUN_002b5c20(unaff_EDI);
    }
  }
  return;
}
