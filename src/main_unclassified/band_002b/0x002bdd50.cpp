/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AAB8C422FAEEF29615A0BE59D72DA3E258193AE9C66D5EE748B6E3361E064352
 * Entry: 0x002bdd50, Ghidra index: 9961, label: FUN_002bdd50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Existing zero-argument 0x002CCF80 Ghidra callee declaration.
 * Guest input registers and original Xbox ABI are UNVERIFIED. */
extern void FUN_002ccf80(void);
void FUN_002bdd50(void)

{
  uint uVar1;
  uint *unaff_EDI;
  
  if (((byte)*unaff_EDI & 0x30) != 0x10) {
    uVar1 = unaff_EDI[3];
    if (*(ushort *)(uVar1 + 0xe8) <= *(ushort *)(uVar1 + 0xea)) {
      FUN_002ccf80();
    }
    *(uint **)(*(int *)(uVar1 + 0xec) + (uint)*(ushort *)(uVar1 + 0xea) * 4) = unaff_EDI;
    *(short *)(uVar1 + 0xea) = *(short *)(uVar1 + 0xea) + 1;
    *unaff_EDI = *unaff_EDI & 0xffffffdf | 0x10;
  }
  return;
}
