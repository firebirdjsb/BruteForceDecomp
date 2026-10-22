/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BB8B4A5B3BDACA5B2DFBA611F9727F9E5C7D434AD1D798F6181B77A935CA94AC
 * Entry: 0x002472d0, Ghidra index: 8101, label: FUN_002472d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int * FUN_002472d0(int *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int unaff_ESI;
  
  if (param_2 != param_3) {
    uVar1 = FUN_0024aff0(param_3);
    FUN_0024a930(*(undefined4 *)(unaff_ESI + 8));
    *(undefined4 *)(unaff_ESI + 8) = uVar1;
  }
  *param_1 = param_2;
  return param_1;
}
