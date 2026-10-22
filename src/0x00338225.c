/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 351BF8CFF22CC18EAAA7502CD6C26AE232F93901FC1F850CFF2580BA5EADC28A
 * Entry: 0x00338225, Ghidra index: 12471, label: FUN_00338225
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00338225(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00330c3e(*(undefined4 *)(param_1 + 0x100));
  if ((iVar1 != 0) && (*(undefined4 *)(param_1 + 0x14) = 8, iVar1 < 0)) {
    *(int *)(param_1 + 0xc) = iVar1;
  }
  return 0;
}
