/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EDBECFCF17C7F9EC9C0BCCA03C8E6BB80CD4412B1710EF5AB9956064CEBD0920
 * Entry: 0x001c5fa0, Ghidra index: 5800, label: FUN_001c5fa0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001c5fa0(int param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_3 != param_4) {
    iVar1 = *(int *)(param_1 + 8);
    iVar2 = param_3;
    for (; param_4 != iVar1; param_4 = param_4 + 0x70) {
      FUN_001d2cf0();
      iVar2 = iVar2 + 0x70;
    }
    iVar1 = *(int *)(param_1 + 8);
    for (iVar3 = iVar2; iVar3 != iVar1; iVar3 = iVar3 + 0x70) {
      FUN_00051630();
    }
    *(int *)(param_1 + 8) = iVar2;
  }
  *param_2 = param_3;
  return;
}
