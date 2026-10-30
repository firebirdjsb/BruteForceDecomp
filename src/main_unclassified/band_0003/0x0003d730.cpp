/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3EC87AE35CBFA399D66DE90F69F5C87EC9E2870C6255D8BDC5132662E0B37912
 * Entry: 0x0003d730, Ghidra index: 451, label: FUN_0003d730
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_0003d730(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar1 = param_2[8];
  uVar5 = param_2[4];
  uVar6 = param_2[5];
  uVar7 = param_2[6];
  uVar8 = param_2[7];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  param_1[8] = uVar1;
  param_1[4] = uVar5;
  param_1[5] = uVar6;
  param_1[6] = uVar7;
  param_1[7] = uVar8;
  uVar1 = param_2[0xb];
  uVar2 = param_2[10];
  param_1[9] = param_2[9];
  param_1[10] = uVar2;
  param_1[0xb] = uVar1;
  return param_1;
}
