/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 50B02625F7D6800B5A410910F1E06BDBCB4AA0F5E93D949E2CD6D415F09EE028
 * Entry: 0x00055fe0, Ghidra index: 826, label: FUN_00055fe0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00055fe0(uint *param_1,uint param_2,int param_3,uint param_4,int param_5,uint param_6,
                 uint param_7)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  while ((param_3 != param_5 || (param_2 != param_4))) {
    param_4 = param_4 - 1;
    uVar3 = param_4;
    if (*(uint *)(param_5 + 8) <= param_4) {
      uVar3 = param_4 - *(uint *)(param_5 + 8);
    }
    param_6 = param_6 - 1;
    uVar2 = param_6;
    if (*(uint *)(param_7 + 8) <= param_6) {
      uVar2 = param_6 - *(uint *)(param_7 + 8);
    }
    iVar1 = *(int *)(*(int *)(param_5 + 4) + uVar3 * 4);
    if (*(int *)(*(int *)(param_7 + 4) + uVar2 * 4) != iVar1) {
      FUN_00055790(iVar1);
    }
  }
  *param_1 = param_6;
  param_1[1] = param_7;
  return;
}
