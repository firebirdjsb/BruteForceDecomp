/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 640433389A50811B49C48D8DCB2978E3D0A35B866D8964B85F521392167245BA
 * Entry: 0x00247ba0, Ghidra index: 8107, label: FUN_00247ba0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int * FUN_00247ba0(int param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_3 == param_4) {
    *param_2 = param_3;
    return param_2;
  }
  iVar2 = FUN_00249890(param_4);
  iVar1 = *(int *)(param_1 + 8);
  for (iVar3 = iVar2; iVar3 != iVar1; iVar3 = iVar3 + 0x2c) {
    FUN_002430a0();
  }
  *(int *)(param_1 + 8) = iVar2;
  *param_2 = param_3;
  return param_2;
}
