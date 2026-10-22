/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E8A24603CB1CA40224FAC057BCA67F793DAF8363A228C4988530FFD1A7B4DE33
 * Entry: 0x001c5b80, Ghidra index: 5797, label: FUN_001c5b80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int * FUN_001c5b80(int *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int unaff_ESI;
  
  if (param_2 != param_3) {
    uVar1 = FUN_001dcb60(param_3,*(undefined4 *)(unaff_ESI + 8));
    FUN_000518b0(*(undefined4 *)(unaff_ESI + 8));
    *(undefined4 *)(unaff_ESI + 8) = uVar1;
  }
  *param_1 = param_2;
  return param_1;
}
