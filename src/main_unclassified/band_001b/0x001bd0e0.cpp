/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6CA50DB3BCB454CC649025E0077F8E27C11DB0F3178B0E6BBA582B5E75463625
 * Entry: 0x001bd0e0, Ghidra index: 5745, label: FUN_001bd0e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int * FUN_001bd0e0(int *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int unaff_ESI;
  
  if (param_2 != param_3) {
    uVar1 = FUN_001d7540(param_3);
    FUN_00069b50(*(undefined4 *)(unaff_ESI + 8));
    *(undefined4 *)(unaff_ESI + 8) = uVar1;
  }
  *param_1 = param_2;
  return param_1;
}
