/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0CA658E9342A750FA4888BBCDCD5944BF0017632E6E40B3FE04C88ABD79100FC
 * Entry: 0x001d95b0, Ghidra index: 6468, label: FUN_001d95b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001d95b0(undefined4 *param_1,int param_2,int param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (param_2 == param_3) {
    *param_1 = *param_4;
    return;
  }
  do {
    iVar2 = param_3 + -0xc;
    puVar1 = param_4 + -3;
    *puVar1 = *(undefined4 *)(param_3 + -0xc);
    param_4[-2] = *(undefined4 *)(param_3 + -8);
    FUN_001b0100();
    if (*(int *)(param_3 + -4) != 0) {
      FUN_001cd7d0(*(int *)(param_3 + -4));
    }
    param_4 = puVar1;
    param_3 = iVar2;
  } while (iVar2 != param_2);
  *param_1 = puVar1;
  return;
}
