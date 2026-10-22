/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8A2D7C3544F6CC56251F2CFB3D23E99BE7F463E3E7F0A0472C0FE2C720300DA9
 * Entry: 0x001be9a0, Ghidra index: 5757, label: FUN_001be9a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int * FUN_001be9a0(int param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_3 != param_4) {
    iVar2 = FUN_001e0910(param_4,*(undefined4 *)(param_1 + 8),param_3);
    iVar1 = *(int *)(param_1 + 8);
    for (iVar3 = iVar2; iVar3 != iVar1; iVar3 = iVar3 + 0x28) {
      FUN_0006a470();
    }
    *(int *)(param_1 + 8) = iVar2;
    *param_2 = param_3;
    return param_2;
  }
  *param_2 = param_3;
  return param_2;
}
