/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B7D93C35A3C310AEDFC0F011744ECFA301095C22A277C31DFD5B6CFA97FBE28A
 * Entry: 0x00139b50, Ghidra index: 3962, label: FUN_00139b50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int * FUN_00139b50(int *param_1,int param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  
  if (param_2 == param_3) {
    *param_1 = param_4;
    return param_1;
  }
  do {
    puVar1 = (undefined4 *)(param_4 + -0x10);
    param_4 = param_4 + -0x10;
    param_3 = param_3 + -0x10;
    (**(code **)*puVar1)(param_3);
  } while (param_3 != param_2);
  *param_1 = param_4;
  return param_1;
}
