/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D1FA85D074BF5733B951F1EBB85DAAB498F439AB0D762C0571E0D366C0EA7BA0
 * Entry: 0x0016ec40, Ghidra index: 4829, label: FUN_0016ec40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0016ec40(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_1[3];
  uVar2 = param_1[2];
  uVar3 = param_1[1];
  *param_3 = *param_1;
  param_3[1] = uVar3;
  param_3[2] = uVar2;
  param_3[3] = uVar1;
  param_3[4] = param_1[4];
  FUN_0016e920(param_1,param_4,param_5,param_6,param_7,param_8);
  return;
}
