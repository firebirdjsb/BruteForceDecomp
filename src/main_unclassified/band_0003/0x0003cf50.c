/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4C1D2552A51D53DD3555FC31897A463035EFB0A9530AF00EF813002AD745730A
 * Entry: 0x0003cf50, Ghidra index: 442, label: FUN_0003cf50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint * FUN_0003cf50(uint *param_1,uint param_2,int param_3,uint param_4,int param_5,uint param_6,
                   uint param_7)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  
  while ((param_3 != param_5 || (param_2 != param_4))) {
    param_4 = param_4 - 1;
    uVar5 = param_4;
    if (*(uint *)(param_5 + 8) <= param_4) {
      uVar5 = param_4 - *(uint *)(param_5 + 8);
    }
    param_6 = param_6 - 1;
    uVar6 = param_6;
    if (*(uint *)(param_7 + 8) <= param_6) {
      uVar6 = param_6 - *(uint *)(param_7 + 8);
    }
    puVar1 = *(undefined4 **)(*(int *)(param_5 + 4) + uVar5 * 4);
    puVar2 = *(undefined4 **)(*(int *)(param_7 + 4) + uVar6 * 4);
    *puVar2 = *puVar1;
    uVar3 = puVar1[3];
    uVar4 = puVar1[2];
    puVar2[1] = puVar1[1];
    puVar2[2] = uVar4;
    puVar2[3] = uVar3;
  }
  *param_1 = param_6;
  param_1[1] = param_7;
  return param_1;
}
