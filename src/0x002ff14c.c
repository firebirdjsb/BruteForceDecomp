/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FA7C1BEC15EE0AA3EB9CB0B16179A10F82C3B155238E69B8EB0F37F99DFB25DB
 * Entry: 0x002ff14c, Ghidra index: 11051, label: ___InternalCxxFrameHandler
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Library Function - Single Match
    ___InternalCxxFrameHandler
   
   Library: Visual Studio 2003 Release */

undefined4
___InternalCxxFrameHandler
          (int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,uint *param_5,
          int param_6,undefined4 param_7,uint param_8)

{
  undefined4 uVar1;
  
  if ((*param_5 & 0x1fffffff) != 0x19930520) {
    __inconsistency__YAXXZ();
  }
  if ((*(byte *)(param_1 + 1) & 0x66) == 0) {
    if (param_5[3] != 0) {
      if (((*param_1 == -0x1f928c9d) && (0x19930520 < (uint)param_1[5])) &&
         (*(code **)(param_1[7] + 8) != (code *)0x0)) {
        uVar1 = (**(code **)(param_1[7] + 8))
                          (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8 & 0xff);
        return uVar1;
      }
      FUN_002fef6f(param_1,param_2,param_3,param_4,param_5,param_8,param_6,param_7);
    }
  }
  else if ((param_5[1] != 0) && (param_6 == 0)) {
    ___FrameUnwindToState(param_2,param_4,param_5,0xffffffff);
  }
  return 1;
}
