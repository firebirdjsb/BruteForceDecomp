/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 12D8E5EF7AF20F219351C3196EF6ED5128BD6532A76F916CCF29C1FDD052DB72
 * Entry: 0x0035aba0, Ghidra index: 13182, label: FUN_0035aba0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0035aba0(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  param_2[4] = param_3;
  param_2[5] = param_4;
  uVar1 = XAPILIB__CreateMutexA(0,0,0);
  param_2[1] = uVar1;
  *param_2 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 **)(param_1 + 0x18) = param_2;
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  return;
}
