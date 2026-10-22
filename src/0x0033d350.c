/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 402BA75EFBB7E99AE0CE3A224632A233B6DC8F8F1FDEBDC1A81E66AE73AA74C6
 * Entry: 0x0033d350, Ghidra index: 12578, label: FUN_0033d350
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0033d350(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 8) == 0) {
    *(undefined4 *)(param_1 + 8) = 1;
    iVar1 = FUN_0033cb57(0,param_2);
    if ((iVar1 != 0) || (iVar1 = FUN_0033cceb(0,param_2), iVar1 != 0)) {
      FUN_0033d24c();
    }
    *(undefined4 *)(param_1 + 8) = 0;
    return 0;
  }
  return 0x80004005;
}
