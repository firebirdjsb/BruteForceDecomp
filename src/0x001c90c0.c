/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 17C4A505E78586FEBF0FB1CD188F4E8616CE125B36974C278D061DAE5F067B84
 * Entry: 0x001c90c0, Ghidra index: 5824, label: FUN_001c90c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int * FUN_001c90c0(int *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int unaff_ESI;
  
  if (param_2 != param_3) {
    uVar1 = FUN_001d9620(param_3);
    FUN_001d6330(*(undefined4 *)(unaff_ESI + 8));
    *(undefined4 *)(unaff_ESI + 8) = uVar1;
  }
  *param_1 = param_2;
  return param_1;
}
