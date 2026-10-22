/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F27C1179F0EB7545B5024475EDD306776A4D9FDC12DE6CA983DAF735B348429B
 * Entry: 0x00166230, Ghidra index: 4711, label: FUN_00166230
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00166230(int param_1)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  
  iVar1 = (in_EAX - param_1) / 0x520;
  iVar2 = iVar1 / 2;
  if (0 < iVar2) {
    iVar3 = iVar2 * 0x520 + param_1;
    do {
      iVar3 = iVar3 + -0x520;
      iVar2 = iVar2 + -1;
      FUN_001662b0(iVar3);
      FUN_001665c0(param_1,iVar1);
    } while (0 < iVar2);
  }
  return;
}
