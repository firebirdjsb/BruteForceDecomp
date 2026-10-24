/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 648441613AED08D6E7016AE7AFCD6B56B4D72BEC398B0A1D13DDC258BAB238AC
 * Entry: 0x00338276, Ghidra index: 12473, label: FUN_00338276
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Matched to C-draft definitions, NOT verified original Xbox callback ABI. */
extern void FUN_0033e945(int param_1);
int FUN_00338276(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  *param_4 = (uintptr_t)0x00338263U;
  param_4[1] = FUN_0033e945;
  param_4[0x44] = 0;
  param_4[0x45] = 0;
  param_4[0x46] = 0;
  param_4[0x47] = 0;
  param_4[0x48] = 0;
  iVar1 = FUN_0033e6cf(param_4,0);
  if (-1 < iVar1) {
    XAPILIB__SetEvent(param_4[2]);
    *(byte *)((int)param_4 + 0x1b) = *(byte *)((int)param_4 + 0x1b) & 0x7f;
    if (param_4[0x3e] == 0) {
      iVar1 = FUN_0033e833(param_4);
      if (iVar1 < 0) goto LAB_00338353;
      param_4[5] = 1;
    }
    else {
      if (((code *)param_4[0x3c] != (code *)0x0) &&
         (iVar1 = (*(code *)param_4[0x3c])(0,param_4,param_4[0x3e]), iVar1 < 0)) goto LAB_00338353;
      param_4[5] = 0;
    }
    param_4[0x27] = param_4[0x2a];
    param_4[0x28] = param_4[0x29];
    if (param_4[9] == 0) {
      if (param_4[0x3e] == 0) {
        iVar1 = -0x7ff8ffa9;
      }
    }
    else {
      iVar1 = FUN_0033e313(param_4[9],param_1,param_4[10],param_4[0x29],param_4 + 0x27,param_2,
                           param_3,param_4[0x36],param_4[0x37],param_4[6]);
    }
    if (-1 < iVar1) {
      uVar2 = XAPILIB__GetTickCount();
      param_4[8] = uVar2;
      return iVar1;
    }
  }
LAB_00338353:
  FUN_0033e8c3(param_4);
  return iVar1;
}
