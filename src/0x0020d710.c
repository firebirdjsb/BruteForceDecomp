/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2EC32EDBFDB4CD56A928F18C88B64115AE8744DE46055FF0CAB767A9E436FA71
 * Entry: 0x0020d710, Ghidra index: 7380, label: FUN_0020d710
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0020d710(int param_1,int param_2)

{
  int unaff_EDI;
  
  for (; param_1 != param_2; param_1 = param_1 + 8) {
    if ((param_1 != unaff_EDI) && (*(int *)(unaff_EDI + 4) != *(int *)(param_1 + 4))) {
      FUN_0008f6a0(*(int *)(unaff_EDI + 4));
    }
  }
  return;
}
