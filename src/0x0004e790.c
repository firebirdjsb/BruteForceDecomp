/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3139E0DFEBC48D93536230B2751671FC3AE28896C4593199E22B1ADA17ED6DC9
 * Entry: 0x0004e790, Ghidra index: 674, label: FUN_0004e790
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0004e790(int param_1,undefined4 param_2,float param_3)

{
  int in_EAX;
  int iVar1;
  int unaff_EBX;
  
  while ((unaff_EBX < in_EAX &&
         (iVar1 = (in_EAX + -1) / 2, *(float *)(param_1 + 4 + iVar1 * 8) < param_3))) {
    *(undefined4 *)(param_1 + in_EAX * 8) = *(undefined4 *)(param_1 + iVar1 * 8);
    *(undefined4 *)(param_1 + 4 + in_EAX * 8) = *(undefined4 *)(param_1 + 4 + iVar1 * 8);
    in_EAX = iVar1;
  }
  *(undefined4 *)(param_1 + in_EAX * 8) = param_2;
  *(float *)(param_1 + 4 + in_EAX * 8) = param_3;
  return;
}
