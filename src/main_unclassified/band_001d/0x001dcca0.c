/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A4CFD3A2129EE31EAB1D20AEF29F26507B2CCF664D626A57038CA18328DC713B
 * Entry: 0x001dcca0, Ghidra index: 6588, label: FUN_001dcca0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001dcca0(void)

{
  undefined4 *in_EAX;
  undefined4 *unaff_EDI;
  
  if (in_EAX != (undefined4 *)0x0) {
    *in_EAX = *unaff_EDI;
    in_EAX[1] = unaff_EDI[1];
    in_EAX[2] = unaff_EDI[2];
    in_EAX[3] = unaff_EDI[3];
    FUN_001cad10(in_EAX + 4);
    FUN_001e0dd0(in_EAX + 8);
  }
  return;
}
