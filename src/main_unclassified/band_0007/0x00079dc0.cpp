/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6E8EE65A3FBB365B743B2EE4DCCA135B58B39B30FCB76067C523F575E44185A2
 * Entry: 0x00079dc0, Ghidra index: 1451, label: FUN_00079dc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00079dc0(undefined4 param_1)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = (**(code **)(*in_ECX + 0x18))();
  (**(code **)(**(int **)(iVar1 + 0xbec) + 0x38))(param_1);
  iVar1 = (**(code **)(*in_ECX + 0x130))(param_1);
  if (iVar1 != 0) {
    (**(code **)(*in_ECX + 0x128))(iVar1);
  }
  return;
}
