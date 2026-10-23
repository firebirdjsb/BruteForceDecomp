/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E875CAAA5BA07AB1A835B202DA19D69B91E11DE51309860B9FA8F263332F4F1C
 * Entry: 0x002b0050, Ghidra index: 9720, label: FUN_002b0050
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_002b0050(int *param_1)

{
  int iVar1;
  
  if (param_1[0xf] != 0) {
    param_1[0xf] = param_1[0xf] + -1;
  }
  iVar1 = param_1[0xf];
  if (iVar1 == 0) {
    param_1[0xf] = 1;
    (**(code **)(*param_1 + 0x6c))(1);
    iVar1 = 0;
  }
  return iVar1;
}
