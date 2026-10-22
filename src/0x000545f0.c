/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 70A2B5237556C63FC2FF5BBE9A5018AA269EB7E8B8B15327003DCF8182CC3F9C
 * Entry: 0x000545f0, Ghidra index: 794, label: FUN_000545f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000545f0(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  *param_3 = *param_1;
  uVar1 = param_1[3];
  uVar2 = param_1[2];
  param_3[1] = param_1[1];
  param_3[2] = uVar2;
  param_3[3] = uVar1;
  param_3[4] = param_1[4];
  FUN_000543e0(param_1,param_4,param_5,param_6,param_7,param_8);
  return;
}
