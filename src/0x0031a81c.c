/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0EC4C17D67DCF2C37A975152D47B037AF16041FE0D1919591818457182C5C06B
 * Entry: 0x0031a81c, Ghidra index: 12264, label: FUN_0031a81c
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0031a81c(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = param_2;
  *param_2 = 3;
  if (*(int *)(param_1 + 0x18) != 0) {
    iVar2 = FUN_0031a72f(&param_2);
    if (iVar2 == 0) {
      *puVar1 = 1;
    }
  }
  return 0;
}
