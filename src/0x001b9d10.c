/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C4D8E796ED3DF45CDE030233716564C75C7852F469259AD02C5A419BC3473063
 * Entry: 0x001b9d10, Ghidra index: 5717, label: FUN_001b9d10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int * FUN_001b9d10(int *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int unaff_ESI;
  
  if (param_2 != param_3) {
    uVar1 = FUN_001e0820(param_3);
    FUN_000e3c30(*(undefined4 *)(unaff_ESI + 8));
    *(undefined4 *)(unaff_ESI + 8) = uVar1;
  }
  *param_1 = param_2;
  return param_1;
}
