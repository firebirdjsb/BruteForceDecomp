/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 14DE52ECF7B6FB7AE62976A3626C620285E96E99639AAE8A7AA2057462DD5432
 * Entry: 0x00209a80, Ghidra index: 7326, label: FUN_00209a80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00209a80(void)

{
  int in_EAX;
  int unaff_EDI;
  
  if (*(int *)(unaff_EDI + 0xc4) != in_EAX) {
    FUN_0008f6a0();
  }
  *(byte *)(unaff_EDI + 0xe4) = *(byte *)(unaff_EDI + 0xe4) & 0xf4;
  FUN_002096e0(1);
  return;
}
