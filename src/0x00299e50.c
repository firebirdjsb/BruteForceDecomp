/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8209235AD4F08955D0C24ADCD461E822AD81DCEC807BC8A6FD39220E0B7815ED
 * Entry: 0x00299e50, Ghidra index: 9397, label: FUN_00299e50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00299e50(void)

{
  int iVar1;
  int in_EDX;
  int unaff_EDI;
  
  iVar1 = *(int *)(*(int *)(unaff_EDI + 8) + 8);
  if (iVar1 == in_EDX + 2) {
    *(int *)(*(int *)(unaff_EDI + 8) + 8) = iVar1 + -2;
    FUN_002994d0();
    return;
  }
  FUN_002994d0();
  FUN_002994d0();
  return;
}
