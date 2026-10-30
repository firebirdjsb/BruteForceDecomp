/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D3D0AA0AE1B7011EABB0B10FA34C8A3B1B99C13AD27EA06D947A79E9E4446BF8
 * Entry: 0x002c01f0, Ghidra index: 10009, label: FUN_002c01f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002c01f0(void)

{
  int iVar1;
  int unaff_EDI;
  
  iVar1 = *(int *)(unaff_EDI + 8);
  while (iVar1 != 0) {
    iVar1 = *(int *)(iVar1 + 0x74);
    FUN_002c0fc0();
  }
  return;
}
