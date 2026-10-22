/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B712849A50F3C60E37332DC31661F9FC668A978653F74A69ACECF0E212B769E1
 * Entry: 0x00213e60, Ghidra index: 7450, label: FUN_00213e60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
bool FUN_00213e60(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
                 float param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
                 undefined4 param_10,undefined4 param_11)

{
  float fVar1;
  int iVar2;
  undefined1 auVar3 [16];
  
  if (*(char *)(param_5 + 0x21) == '\0') {
    fVar1 = *(float *)(param_5 + 0x28);
    if (*(float *)(param_5 + 0x28) <= *(float *)(param_5 + 0x2c)) {
      fVar1 = *(float *)(param_5 + 0x2c);
    }
    auVar3 = rsqrtss(ZEXT416((uint)fVar1),fVar1 * param_6);
    if (((auVar3._0_4_ * fVar1 * param_6 - 0.35) * 0.9629629 + 0.6) * 0.5 <
        *(float *)(*param_1 + 0xc58)) {
      return false;
    }
  }
  iVar2 = FUN_00214710(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                       param_11);
  if (iVar2 != 0) {
    FUN_002171d0(param_1);
  }
  return iVar2 != 0;
}
