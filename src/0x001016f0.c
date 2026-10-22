/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7FC17CF0CBCA4C15A26D6D96905CB7135DEDB7A01EA0CF7319693566FA1FF7B4
 * Entry: 0x001016f0, Ghidra index: 3246, label: FUN_001016f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001016f0(void)

{
  int *unaff_ESI;
  
  if (unaff_ESI != (int *)0x0) {
    (**(code **)(*unaff_ESI + 4))();
  }
  return;
}
