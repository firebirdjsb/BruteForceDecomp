/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 94172FA4514135FE043CBBD1734A7AF3E312AA9BF359B110CEE6DBACEFE1D94C
 * Entry: 0x0033c08e, Ghidra index: 12543, label: FUN_0033c08e
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0033c08e(int param_1)

{
  int iVar1;
  int in_ECX;
  
  FUN_0033bba7(in_ECX + 0x824);
  iVar1 = *(int *)(param_1 + 8);
  if (3 < (uint)(*(int *)(param_1 + 0x10) - iVar1)) {
    *(int *)(param_1 + 0x10) = iVar1 + 3;
    *(undefined4 *)(param_1 + 0x14) = 499;
  }
  *(int *)(param_1 + 4) =
       ((*(int *)(param_1 + 0x10) - iVar1) * 500 - *(int *)(param_1 + 0xc)) + 1 +
       *(int *)(param_1 + 0x14);
  return;
}
