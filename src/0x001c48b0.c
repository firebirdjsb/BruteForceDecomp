/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A6AD025515F765F5F22176DDDA5195C2D44D56AD513A85F430C87F378881FA54
 * Entry: 0x001c48b0, Ghidra index: 5788, label: FUN_001c48b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int * FUN_001c48b0(int param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_3 != param_4) {
    iVar2 = FUN_001d8ce0(param_4,*(undefined4 *)(param_1 + 8),param_3);
    iVar1 = *(int *)(param_1 + 8);
    for (iVar3 = iVar2; iVar3 != iVar1; iVar3 = iVar3 + 0x344) {
      FUN_00160320();
    }
    *(int *)(param_1 + 8) = iVar2;
    *param_2 = param_3;
    return param_2;
  }
  *param_2 = param_3;
  return param_2;
}
