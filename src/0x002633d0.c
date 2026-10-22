/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 46FEDDECB333DFE93A51C8BD2DC8D01298979187927A6F4A4B1D1DE2BA2C1AE0
 * Entry: 0x002633d0, Ghidra index: 8674, label: FUN_002633d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_002633d0(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

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
      puVar4 = param_4 + 5;
      puVar5 = puVar2 + 5;
      puVar6 = param_4;
      puVar7 = puVar2;
      for (iVar3 = 5; puVar2 = puVar5, param_4 = puVar4, iVar3 != 0; iVar3 = iVar3 + -1) {
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
