/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D6DB136DCE8FF8A03569B08923108D5FEF8028FDB7DD67478CA90BEE43A33481
 * Entry: 0x001a7050, Ghidra index: 5387, label: FUN_001a7050
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001a7050(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 auStack_50 [7];
  undefined4 uStack_34;
  undefined4 local_20 [8];
  
  if (*(int *)(param_1 + 4) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 5;
    if (iVar2 != 0) goto LAB_001a707e;
  }
  uStack_34 = 0x1a7079;
  FUN_001aa970();
LAB_001a707e:
  puVar3 = local_20;
  puVar4 = auStack_50;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  FUN_001b1c80();
  return iVar2 * 0x20 + *(int *)(param_1 + 4);
}
