/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 428C11368BC9D64CB518995BE7207CFAEF47D59AA3F1ACBA9A470E3F02FC21A5
 * Entry: 0x00337bcf, Ghidra index: 12467, label: FUN_00337bcf
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00337bcf(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 *param_7)

{
  int iVar1;
  undefined4 uVar2;
  
  *param_7 = &LAB_00337bbc;
  param_7[1] = FUN_0033e945;
  param_7[0x44] = 0;
  param_7[0x45] = 0;
  param_7[0x46] = 0;
  param_7[0x47] = 0;
  param_7[0x48] = 0;
  iVar1 = FUN_0033e6cf(param_7,0);
  if (-1 < iVar1) {
    XAPILIB__SetEvent(param_7[2]);
    *(byte *)((int)param_7 + 0x1b) = *(byte *)((int)param_7 + 0x1b) | 0x80;
    if (param_7[0x40] == 0) {
      iVar1 = FUN_0033e833(param_7);
      if (iVar1 < 0) goto LAB_00337ca8;
      param_7[5] = 1;
    }
    else {
      if (((code *)param_7[0x3e] != (code *)0x0) &&
         (iVar1 = (*(code *)param_7[0x3e])(0,param_7,param_7[0x40]), iVar1 < 0)) goto LAB_00337ca8;
      param_7[5] = 0;
    }
    param_7[0x27] = param_7[0x2a];
    param_7[0x28] = param_7[0x29];
    if (param_7[9] == 0) {
      if (param_7[0x40] == 0) {
        iVar1 = -0x7ff8ffa9;
      }
    }
    else {
      iVar1 = FUN_0033e13a(param_7[9],param_1,param_7[10],param_7[0x29],param_7 + 0x27,param_2,
                           param_3,param_4,param_5,param_6,param_7[6]);
    }
    if (-1 < iVar1) {
      uVar2 = XAPILIB__GetTickCount();
      param_7[8] = uVar2;
      return iVar1;
    }
  }
LAB_00337ca8:
  FUN_0033e8c3(param_7);
  return iVar1;
}
