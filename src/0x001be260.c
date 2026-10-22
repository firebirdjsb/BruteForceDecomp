/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EB11DC4C4519A63380A11FC8BE4C0F98714FC6AB043AE42208CE4ADF4511C93C
 * Entry: 0x001be260, Ghidra index: 5753, label: FUN_001be260
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int * FUN_001be260(int param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_3 != param_4) {
    iVar2 = FUN_001e0860(param_4,*(undefined4 *)(param_1 + 8),param_3);
    iVar1 = *(int *)(param_1 + 8);
    for (iVar3 = iVar2; iVar3 != iVar1; iVar3 = iVar3 + 0x38) {
      FUN_0006a540();
    }
    *(int *)(param_1 + 8) = iVar2;
    *param_2 = param_3;
    return param_2;
  }
  *param_2 = param_3;
  return param_2;
}
