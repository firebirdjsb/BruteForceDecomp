/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 13112F45962E5A13FF9978918BA1704B2E64F07A18AC9423837082D6B03DEA0E
 * Entry: 0x000de4c0, Ghidra index: 2713, label: FUN_000de4c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000de4c0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = param_1;
  if (*(undefined4 **)(param_1 + 0xc28) == (undefined4 *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)**(undefined4 **)(param_1 + 0xc28);
  }
  if (piVar3 != *(int **)(param_1 + 0xc28)) {
    do {
      if ((*(byte *)((int *)piVar3[2] + 5) & 1) != 0) {
        (**(code **)(*(int *)piVar3[2] + 0x20))();
        if ((undefined4 *)piVar3[2] != (undefined4 *)0x0) {
          (*(code *)**(undefined4 **)piVar3[2])(1);
        }
      }
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)*(int *)(iVar2 + 0xc28));
  }
  puVar1 = *(undefined4 **)(iVar2 + 0xc28);
  if (puVar1 == (undefined4 *)0x0) {
    FUN_001298b0(&param_1,0,0);
    return;
  }
  FUN_001298b0(&param_1,*puVar1,puVar1);
  return;
}
