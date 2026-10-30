/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7ABC76E9D3883DB6E58D388BD0022C0B91D600872B4C039B31CB111E4D02866B
 * Entry: 0x00232290, Ghidra index: 7762, label: FUN_00232290
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00232290(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  
  puVar9 = (undefined4 *)FUN_002334b0();
  uVar2 = puVar9[1];
  uVar3 = puVar9[2];
  uVar4 = puVar9[3];
  uVar1 = puVar9[8];
  uVar5 = puVar9[4];
  uVar6 = puVar9[5];
  uVar7 = puVar9[6];
  uVar8 = puVar9[7];
  *param_3 = *puVar9;
  param_3[1] = uVar2;
  param_3[2] = uVar3;
  param_3[3] = uVar4;
  param_3[8] = uVar1;
  param_3[4] = uVar5;
  param_3[5] = uVar6;
  param_3[6] = uVar7;
  param_3[7] = uVar8;
  return;
}
