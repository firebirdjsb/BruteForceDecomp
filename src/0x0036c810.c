/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EBCD5B15F3F8F167F3DE0C0F14BBBEB6F5598913057E29842AED89E9CBD71854
 * Entry: 0x0036c810, Ghidra index: 13282, label: FUN_0036c810
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0036c810(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  
  uVar8 = (-(int)param_1 & 0x1fU) >> 2;
  if ((int)uVar8 < param_3) {
    param_3 = param_3 - uVar8;
    for (; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)param_1 = *(undefined4 *)param_2;
      param_2 = (undefined8 *)((int)param_2 + 4);
      param_1 = (undefined8 *)((int)param_1 + 4);
    }
    while (0xf < param_3) {
      uVar1 = param_2[1];
      uVar2 = param_2[2];
      uVar3 = param_2[3];
      uVar4 = param_2[4];
      uVar5 = param_2[5];
      uVar6 = param_2[6];
      uVar7 = param_2[7];
      *param_1 = *param_2;
      param_1[1] = uVar1;
      param_1[2] = uVar2;
      param_1[3] = uVar3;
      param_1[4] = uVar4;
      param_1[5] = uVar5;
      param_1[6] = uVar6;
      param_1[7] = uVar7;
      param_2 = param_2 + 8;
      param_1 = param_1 + 8;
      param_3 = param_3 + -0x10;
    }
  }
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    param_2 = (undefined8 *)((int)param_2 + 4);
    param_1 = (undefined8 *)((int)param_1 + 4);
  }
  return;
}
