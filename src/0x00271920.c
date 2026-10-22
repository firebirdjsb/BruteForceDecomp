/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EB85770643C375FF3F80240697035AF38C8739B932C9C9DED52C6EC06234DD78
 * Entry: 0x00271920, Ghidra index: 8817, label: FUN_00271920
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_00271920(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar1 = param_2[4];
  uVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  param_1[4] = uVar1;
  uVar2 = param_2[6];
  uVar3 = param_2[7];
  uVar4 = param_2[8];
  uVar1 = param_2[0xd];
  uVar5 = param_2[9];
  uVar6 = param_2[10];
  uVar7 = param_2[0xb];
  uVar8 = param_2[0xc];
  param_1[5] = param_2[5];
  param_1[6] = uVar2;
  param_1[7] = uVar3;
  param_1[8] = uVar4;
  param_1[0xd] = uVar1;
  param_1[9] = uVar5;
  param_1[10] = uVar6;
  param_1[0xb] = uVar7;
  param_1[0xc] = uVar8;
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  return param_1;
}
