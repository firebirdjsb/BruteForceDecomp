/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6A7C9590123E7AAE34EFAF741C13B7D0B305D0744CBFD8D53413CFBFEBFA6F85
 * Entry: 0x001c64a0, Ghidra index: 5803, label: FUN_001c64a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int * FUN_001c64a0(int *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int unaff_ESI;
  
  if (param_2 != param_3) {
    uVar1 = FUN_001dc7b0(param_3);
    FUN_000e3c30(*(undefined4 *)(unaff_ESI + 8));
    *(undefined4 *)(unaff_ESI + 8) = uVar1;
  }
  *param_1 = param_2;
  return param_1;
}
