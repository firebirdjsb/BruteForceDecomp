/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B7B91479778528AE05A08CB1ECC93BE199D0EA82094F381AAEF24E6A826E0362
 * Entry: 0x0024ff90, Ghidra index: 8335, label: FUN_0024ff90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0024ff90(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int in_EAX;
  int in_ECX;
  int in_EDX;
  
  if (in_EDX != in_ECX) {
    FUN_000b2a50();
    *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) - in_EAX;
  }
  **(int **)(param_2 + 4) = param_3;
  **(int **)(param_3 + 4) = param_1;
  **(int **)(param_1 + 4) = param_2;
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_3 + 4);
  *(undefined4 *)(param_3 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_2 + 4) = uVar1;
  return;
}
