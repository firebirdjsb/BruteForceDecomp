/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FFD3ACC2AC629BF94420AE5396D2627553FCAE346665CC12F6185162D32BCB76
 * Entry: 0x0024ac70, Ghidra index: 8231, label: FUN_0024ac70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_0024ac70(undefined4 *param_1,int param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  
  if (param_2 == param_3) {
    *param_1 = *param_4;
    return param_1;
  }
  do {
    iVar1 = param_3 + -0x24;
    param_4 = param_4 + -9;
    *param_4 = *(undefined4 *)(param_3 + -0x24);
    FUN_00249ff0(param_3 + -0x20);
    FUN_0024a170(param_3 + -0x10);
    param_3 = iVar1;
  } while (iVar1 != param_2);
  *param_1 = param_4;
  return param_1;
}
