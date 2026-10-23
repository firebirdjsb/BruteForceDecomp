/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E582619495280CC85CB85D9B0D82E413D851FBDF12D2EDD7D15780D7ECF750E9
 * Entry: 0x00047640, Ghidra index: 557, label: FUN_00047640
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00047640(int param_1,int *param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (param_3 != param_4) {
    puVar2 = (undefined4 *)FUN_000476b0(param_4);
    puVar1 = *(undefined4 **)(param_1 + 8);
    for (puVar3 = puVar2; puVar3 != puVar1; puVar3 = puVar3 + 6) {
      (**(code **)*puVar3)();
    }
    *(undefined4 **)(param_1 + 8) = puVar2;
  }
  *param_2 = param_3;
  return;
}
