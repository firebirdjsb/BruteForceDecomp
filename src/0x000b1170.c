/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 48CFC0DA408FCFBAF99A5805578C10B9F409164279390977F23E5B1ECF1AFC58
 * Entry: 0x000b1170, Ghidra index: 2108, label: FUN_000b1170
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000b1170(int param_1)

{
  int *unaff_EBX;
  int iVar1;
  int unaff_EDI;
  
  iVar1 = *(int *)(unaff_EDI + 4);
  if ((iVar1 == 0) || (*(int *)(unaff_EDI + 8) - iVar1 >> 5 == 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = param_1 - iVar1 >> 5;
  }
  FUN_001b76b0(param_1,1);
  *unaff_EBX = iVar1 * 0x20 + *(int *)(unaff_EDI + 4);
  return;
}
