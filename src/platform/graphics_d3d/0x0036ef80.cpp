/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E2CA26B1B1B04ECBA639E49668C899006CC5BC74D620652103AB7C3B51AE4AE9
 * Entry: 0x0036ef80, Ghidra index: 13318, label: FUN_0036ef80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0036ef80(int *param_1,uint param_2)

{
  int *in_EAX;
  uint uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  
  do {
    uVar3 = param_2;
    if (0x1f < param_2) {
      uVar3 = 0x20;
    }
    *in_EAX = uVar3 * 0x40000 + 0xb00;
    piVar4 = param_1;
    piVar5 = in_EAX;
    for (uVar1 = uVar3 & 0x3fffffff; piVar5 = piVar5 + 1, uVar1 != 0; uVar1 = uVar1 - 1) {
      *piVar5 = *piVar4;
      piVar4 = piVar4 + 1;
    }
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(char *)piVar5 = (char)*piVar4;
      piVar4 = (int *)((int)piVar4 + 1);
      piVar5 = (int *)((int)piVar5 + 1);
    }
    param_1 = param_1 + uVar3;
    param_2 = param_2 - uVar3;
    in_EAX = in_EAX + uVar3 + 1;
  } while (param_2 != 0);
  return;
}
