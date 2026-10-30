/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7BDA972192A6F2EA38F2602C2520A897C47B9BAD0DF1D1C45B64D8B23056F503
 * Entry: 0x00246990, Ghidra index: 8095, label: FUN_00246990
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int * FUN_00246990(int *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int unaff_ESI;
  
  if (param_2 != param_3) {
    uVar1 = FUN_0024ae90(param_3);
    FUN_0024a850(uVar1,*(undefined4 *)(unaff_ESI + 8));
    *(undefined4 *)(unaff_ESI + 8) = uVar1;
  }
  *param_1 = param_2;
  return param_1;
}
