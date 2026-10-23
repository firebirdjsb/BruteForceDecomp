/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6289803EF5D40090FB3E881292EFD549686D0ABBA3AE1CCB3C83C0E1A2B708D1
 * Entry: 0x0013b1d0, Ghidra index: 3981, label: FUN_0013b1d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0013b1d0(undefined4 param_1,int param_2)

{
  if (*(int *)(param_2 + -4) != 0) {
    FUN_0008f6a0(*(int *)(param_2 + -4));
  }
  FUN_0013b350(param_1,param_2 + -8,param_2 + -8);
  return;
}
