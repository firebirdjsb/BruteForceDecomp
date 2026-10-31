/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4DFB9AFBB6AC33D3A632FFF7F8F4E2BD8F95F1168387AB8445C1028C71A7647F
 * Entry: 0x002496b0, Ghidra index: 8181, label: FUN_002496b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-matched three-stack-word draft declaration; original Xbox ECX is ABI_UNVERIFIED. */
extern void FUN_0001f4f0(int param_1, uint param_2, uint param_3);
void FUN_002496b0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *unaff_EDI;
  
  if (param_1 != param_2) {
    do {
      *param_1 = *unaff_EDI;
      FUN_0001f4f0(unaff_EDI + 1,0,0xffffffff);
      *(undefined1 *)(param_1 + 8) = *(undefined1 *)(unaff_EDI + 8);
      param_1 = param_1 + 9;
    } while (param_1 != param_2);
  }
  return;
}
