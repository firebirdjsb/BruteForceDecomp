/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A53C10026EA6488029E0454947BD9527F6EFCEF5B6265F186E1B30FD02083575
 * Entry: 0x002fde80, Ghidra index: 10996, label: FUN_002fde80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002fde80(int param_1,int param_2,float *param_3,int *param_4)

{
  float fVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *param_4;
  if (*param_4 * 4 < param_1) {
    FUN_002f8ea0();
    iVar3 = param_1 >> 2;
  }
  iVar2 = param_4[1];
  if (param_4[1] * 4 < param_1) {
    FUN_002f9000();
    iVar2 = param_1 >> 2;
  }
  if (-1 < param_2) {
    if (4 < param_1) {
      FUN_002fdc20(param_1,param_4 + 2,iVar3);
      FUN_002fce70(param_1,iVar2);
      fVar1 = *param_3;
      *param_3 = *param_3 + param_3[1];
      param_3[1] = fVar1 - param_3[1];
      return;
    }
    if (param_1 == 4) {
      FUN_002fdc20(4,param_4 + 2,iVar3);
    }
    fVar1 = *param_3;
    *param_3 = *param_3 + param_3[1];
    param_3[1] = fVar1 - param_3[1];
    return;
  }
  fVar1 = (*param_3 - param_3[1]) * 0.5;
  param_3[1] = fVar1;
  *param_3 = *param_3 - fVar1;
  if (4 < param_1) {
    FUN_002fcf30(param_1,iVar2);
    FUN_002fdd50(param_1,param_4 + 2,iVar3);
    return;
  }
  if (param_1 == 4) {
    FUN_002fdd50(4,param_4 + 2,iVar3);
  }
  return;
}
