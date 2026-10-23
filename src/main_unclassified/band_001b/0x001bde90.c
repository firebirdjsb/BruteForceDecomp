/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4CAB995CC082980C7922D7D66D5419677B5CF3294389F216EB23F4C9FB8BDCE1
 * Entry: 0x001bde90, Ghidra index: 5751, label: FUN_001bde90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001bde90(int param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_3 != param_4) {
    iVar1 = *(int *)(param_1 + 8);
    iVar2 = param_3;
    for (; param_4 != iVar1; param_4 = param_4 + 0x50) {
      FUN_001d1dc0(param_4);
      iVar2 = iVar2 + 0x50;
    }
    iVar1 = *(int *)(param_1 + 8);
    for (iVar3 = iVar2; iVar3 != iVar1; iVar3 = iVar3 + 0x50) {
      FUN_0006a3d0();
    }
    *(int *)(param_1 + 8) = iVar2;
  }
  *param_2 = param_3;
  return;
}
