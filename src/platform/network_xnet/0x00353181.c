/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 490CECFB8924073F8402DF4907BB6FB58889BF867B87CC032505F49F84C1FE1D
 * Entry: 0x00353181, Ghidra index: 13080, label: FUN_00353181
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00353181(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x5c) - *(int *)(param_1 + 0x2c);
  *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + param_2;
  if ((uint)((iVar1 - *(int *)(param_1 + 200)) + param_2) < *(uint *)(param_1 + 0xd0)) {
    *(int *)(param_1 + 200) = *(int *)(param_1 + 200) - param_2;
  }
  else {
    *(int *)(param_1 + 200) = iVar1;
  }
  return;
}
