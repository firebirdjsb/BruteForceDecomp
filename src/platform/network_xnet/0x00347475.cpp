/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DF9A571E5C81CB1B56F627790794788B97451C9EC1BF5A1E22179AEAE7E36C25
 * Entry: 0x00347475, Ghidra index: 12849, label: FUN_00347475
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4
FUN_00347475(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = param_3;
  local_8 = param_2;
  iVar1 = FUN_0034706f(param_1,&local_c,1,&param_3,param_4,param_5,param_6,0,0);
  if (iVar1 != 0) {
    param_3 = 0xffffffff;
  }
  return param_3;
}
