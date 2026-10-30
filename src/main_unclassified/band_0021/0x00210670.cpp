/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4CC19527389D6928C7D4FB2E5CFC03589F014C84E7213FE2178121FA28658511
 * Entry: 0x00210670, Ghidra index: 7423, label: FUN_00210670
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00210670(int param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_1 + 8);
  piVar2 = (int *)*piVar1;
  while (piVar2 != piVar1) {
    if (((int *)piVar2[4] != (int *)0x0) && ((*(uint *)(param_1 + 0x10) & piVar2[3]) != 0)) {
      (**(code **)(*(int *)piVar2[4] + 4))(param_2);
    }
    FUN_0012aba0();
  }
  return;
}
