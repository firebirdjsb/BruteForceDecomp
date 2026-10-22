/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F173317BC5B5C5BB1AC970711D8332BCCA46BC0F69D8B468873120B9EAA1D526
 * Entry: 0x000ebb70, Ghidra index: 2905, label: FUN_000ebb70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000ebb70(int param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x10);
  FUN_00059a80();
  if (*(int *)(in_ECX + 0x3c) != *(int *)(param_1 + 0x3c)) {
    FUN_0008f6a0(*(int *)(param_1 + 0x3c));
  }
  if (*(int *)(in_ECX + 0x3c) != *(int *)(param_1 + 0x3c)) {
    FUN_0008f6a0(*(int *)(param_1 + 0x3c));
  }
  return;
}
