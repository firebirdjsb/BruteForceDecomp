/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D73BBFDB1C3D11ADDCB01FE4A2395700AC07FD95CBA2EFF71CC329AF4164E9DF
 * Entry: 0x001b6d40, Ghidra index: 5694, label: FUN_001b6d40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_001b6d40(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  if (param_3 != param_4) {
    puVar1 = *(undefined4 **)(param_1 + 8);
    puVar2 = param_3;
    while (param_4 != puVar1) {
      puVar4 = param_4 + 10;
      puVar5 = puVar2 + 10;
      puVar6 = param_4;
      puVar7 = puVar2;
      for (iVar3 = 10; puVar2 = puVar5, param_4 = puVar4, iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
    }
    *(undefined4 **)(param_1 + 8) = puVar2;
  }
  *param_2 = param_3;
  return param_2;
}
