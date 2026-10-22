/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 62630A22090C848CDDCF52E17332E434182367EE18793310F955D4C2F16D775A
 * Entry: 0x0035f100, Ghidra index: 13215, label: FUN_0035f100
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0035f100(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 int param_6,int param_7,uint param_8,uint param_9,undefined4 param_10,
                 undefined4 param_11,undefined4 param_12,uint param_13,uint param_14)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (((param_14 & 0x100000) != 0) && ((param_13 & 0x100000) != 0)) {
    FUN_0035d340(param_3,param_4,param_6 + 7U & 0xfffffff8,param_7 + 7U & 0xfffffff8,param_8,
                 param_11,param_5,1,param_12,param_13);
  }
  FUN_0035d340(param_1,param_2,param_6 + 7U & 0xfffffff8,param_7 + 7U & 0xfffffff8,param_8,param_11,
               param_5,1,param_12,param_13);
  if ((param_13 & 0x20000) == 0) {
    param_2 = param_2 + param_8 * param_9;
    param_1 = param_1 + param_8 * param_9;
    uVar2 = (param_6 + 1U >> 1) + 7 & 0xfffffff8;
    param_8 = param_8 >> 1;
    uVar3 = (param_7 + 1U >> 1) + 7 & 0xfffffff8;
    FUN_0035d340(param_1,param_2,uVar2,uVar3,param_8,param_11,param_5,2,param_12,param_13);
    iVar1 = param_8 * (param_9 >> 1);
    FUN_0035d340(iVar1 + param_1,param_2 + iVar1,uVar2,uVar3,param_8,param_11,param_5,2,param_12,
                 param_13);
  }
  return;
}
