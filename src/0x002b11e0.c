/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 10EF2E4ECEB0C427C61BEFDBFF50D5FBA30FAEA805CFD758A58A25F322360F8F
 * Entry: 0x002b11e0, Ghidra index: 9735, label: FUN_002b11e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_002b11e0(int *param_1)

{
  int iVar1;
  
  if (param_1[0x10] != 0) {
    param_1[0x10] = param_1[0x10] + -1;
  }
  iVar1 = param_1[0x10];
  if (iVar1 == 0) {
    param_1[0x10] = 1;
    (**(code **)(*param_1 + 0x6c))(1);
    iVar1 = 0;
  }
  return iVar1;
}
