/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7CCC7C5CA5DB0E7A9FACAE40D5186D57E13DA9B91E8CCD05D22E4236EE4C6390
 * Entry: 0x0003ca80, Ghidra index: 438, label: FUN_0003ca80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint * FUN_0003ca80(uint *param_1,uint param_2,int param_3,uint param_4,int param_5,uint param_6,
                   uint param_7)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  
  for (; (param_3 != param_5 || (param_2 != param_4)); param_2 = param_2 + 1) {
    uVar5 = param_2;
    if (*(uint *)(param_3 + 8) <= param_2) {
      uVar5 = param_2 - *(uint *)(param_3 + 8);
    }
    uVar6 = param_6;
    if (*(uint *)(param_7 + 8) <= param_6) {
      uVar6 = param_6 - *(uint *)(param_7 + 8);
    }
    puVar1 = *(undefined4 **)(*(int *)(param_3 + 4) + uVar5 * 4);
    puVar2 = *(undefined4 **)(*(int *)(param_7 + 4) + uVar6 * 4);
    *puVar2 = *puVar1;
    uVar3 = puVar1[3];
    uVar4 = puVar1[2];
    puVar2[1] = puVar1[1];
    puVar2[2] = uVar4;
    param_6 = param_6 + 1;
    puVar2[3] = uVar3;
  }
  *param_1 = param_6;
  param_1[1] = param_7;
  return param_1;
}
