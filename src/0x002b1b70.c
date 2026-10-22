/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D17209102BA60328A259044622EF1E85481CF788433D24CFCE841BD73586D52B
 * Entry: 0x002b1b70, Ghidra index: 9742, label: FUN_002b1b70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_002b1b70(int *param_1)

{
  int iVar1;
  
  if (param_1[0x18] != 0) {
    param_1[0x18] = param_1[0x18] + -1;
  }
  iVar1 = param_1[0x18];
  if (iVar1 == 0) {
    param_1[0x18] = 1;
    (**(code **)(*param_1 + 0x6c))(1);
    iVar1 = 0;
  }
  return iVar1;
}
