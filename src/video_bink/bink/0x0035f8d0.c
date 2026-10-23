/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F4B210F82BD2701874C5D47F1F3A5B1DE8184EE7A90EE36BD4895D81C9F7F8DA
 * Entry: 0x0035f8d0, Ghidra index: 13220, label: FUN_0035f8d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Matched to C-draft definitions, NOT verified original Xbox callback ABI. */
extern int FUN_0035f280(int param_1,int param_2,undefined4 param_3,undefined4 param_4);
undefined4 FUN_0035f8d0(undefined4 *param_1,undefined4 param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = param_1;
  for (iVar2 = 0x4f; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  if ((param_3 & 0x800000) == 0) {
    uVar1 = FUN_002f2b3f(param_2,0x80000000,1,0,3,0x8000080,0);
    param_1[0x13] = uVar1;
    if (param_1[0x13] == -1) {
      uVar1 = FUN_002f2b3f(param_2,0x80000000,3,0,3,0x8000080,0);
      param_1[0x13] = uVar1;
      if (param_1[0x13] == -1) {
        return 0;
      }
    }
  }
  else {
    param_1[0x13] = param_2;
    param_1[0x1c] = 1;
    uVar1 = XAPILIB__SetFilePointer(param_2,0,0,1);
    param_1[0x1d] = uVar1;
  }
  *param_1 = FUN_0035f280;
  param_1[1] = &LAB_0035f3a0;
  param_1[2] = &LAB_0035f680;
  param_1[3] = FUN_0035f6a0;
  param_1[4] = &LAB_0035f740;
  param_1[5] = FUN_0035f700;
  return 1;
}
