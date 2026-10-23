/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7284BB9C06F41CAE1AA512DADB8EEF7DD13CAE1024BF0A9753F0BC66A8482727
 * Entry: 0x002a5670, Ghidra index: 9566, label: FUN_002a5670
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002a5670(undefined4 param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 unaff_retaddr;
  
  iVar1 = (**(code **)(*param_3 + 0x2c))(param_3);
  if (iVar1 != 0) {
    return 0x80004005;
  }
  FUN_002a55e0(unaff_retaddr);
  piVar2 = (int *)(**(code **)(*param_3 + 0x2c))(param_3);
  (**(code **)(*piVar2 + 4))(piVar2);
  (**(code **)(*param_3 + 4))(param_3);
  return 0;
}
