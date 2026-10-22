/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1E9A28B6C6415A4858422FC782FA2BE0D302B76D0704AF0ECFA217ACDE9EBFEE
 * Entry: 0x00065f80, Ghidra index: 1109, label: FUN_00065f80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00065f80(int *param_1)

{
  int iVar1;
  
  if (param_1[0x19] != 0) {
    param_1[0x19] = param_1[0x19] + -1;
  }
  iVar1 = param_1[0x19];
  if (iVar1 == 0) {
    param_1[0x19] = 1;
    (**(code **)(*param_1 + 0x6c))(1);
    iVar1 = 0;
  }
  return iVar1;
}
