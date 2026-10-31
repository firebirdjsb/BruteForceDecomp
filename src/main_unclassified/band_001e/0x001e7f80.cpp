/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 605F6D9A26C6AAC467D64E88AE8F598101C9531724C2E1B3481ED5578E7B3204
 * Entry: 0x001e7f80, Ghidra index: 6830, label: FUN_001e7f80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Exact existing callee draft signature only; original Xbox ABI_UNVERIFIED. */
extern void FUN_001e7c00(void);
void FUN_001e7f80(void)

{
  uint uVar1;
  int unaff_EBX;
  uint uVar2;
  
  uVar1 = *(uint *)(unaff_EBX + 4);
  uVar2 = 0;
  if (uVar1 != 0) {
    do {
      FUN_001e7c00();
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  return;
}
