/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0B7393DEC2CF280C758A885C7B533944356B0C69CC8FCEED6F4D98895E1F64E2
 * Entry: 0x001bf120, Ghidra index: 5761, label: FUN_001bf120
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int * FUN_001bf120(int param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_3 != param_4) {
    iVar2 = FUN_001d7c40(param_4,*(undefined4 *)(param_1 + 8),param_3);
    iVar1 = *(int *)(param_1 + 8);
    for (iVar3 = iVar2; iVar3 != iVar1; iVar3 = iVar3 + 0x3c) {
      FUN_0006a540();
    }
    *(int *)(param_1 + 8) = iVar2;
    *param_2 = param_3;
    return param_2;
  }
  *param_2 = param_3;
  return param_2;
}
