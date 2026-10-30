/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C760BB2E7382D11AB269C8C4737CA34C59307BEB41F3281DA19C1EBAE8B17459
 * Entry: 0x001c8900, Ghidra index: 5820, label: FUN_001c8900
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int * FUN_001c8900(int param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_3 == param_4) {
    *param_2 = param_3;
    return param_2;
  }
  iVar2 = FUN_001d1590(param_4);
  iVar1 = *(int *)(param_1 + 8);
  for (iVar3 = iVar2; iVar3 != iVar1; iVar3 = iVar3 + 0x70) {
    FUN_00132b50();
  }
  *(int *)(param_1 + 8) = iVar2;
  *param_2 = param_3;
  return param_2;
}
