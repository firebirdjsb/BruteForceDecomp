/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 004E76B51524F9F15F4B75D03348FC0F92D1BC56C22EFA38B66BB10B86FEA924
 * Entry: 0x000909f0, Ghidra index: 1778, label: FUN_000909f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_000909f0(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x78))();
  iVar1 = (**(code **)(*param_1 + 0x7c))();
  param_1[2] = iVar1;
  (**(code **)(*param_1 + 0x10))(param_1);
  return 1;
}
