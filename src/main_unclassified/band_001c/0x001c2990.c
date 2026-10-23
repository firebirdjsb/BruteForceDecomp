/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E63F605A616B704F51F89C47B61902937B3D0DAAC22255D97479A24E5C267B3D
 * Entry: 0x001c2990, Ghidra index: 5779, label: FUN_001c2990
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int * FUN_001c2990(int *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int unaff_ESI;
  
  if (param_2 != param_3) {
    uVar1 = FUN_001d8830(param_3);
    FUN_00162a20(*(undefined4 *)(unaff_ESI + 8));
    *(undefined4 *)(unaff_ESI + 8) = uVar1;
  }
  *param_1 = param_2;
  return param_1;
}
