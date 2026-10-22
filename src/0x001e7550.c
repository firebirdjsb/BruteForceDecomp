/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7AB5F2E8D42850B7E642E9EF02B56B514B965D8EA6B990FCB62599A2C4ACB6B5
 * Entry: 0x001e7550, Ghidra index: 6807, label: FUN_001e7550
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001e7550(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)(param_1 + 0x21c);
  iVar3 = 4;
  do {
    (**(code **)(*(int *)*puVar1 + 4))(param_2);
    puVar1 = puVar1 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  piVar2 = (int *)(param_1 + 0x22c);
  iVar3 = 9;
  do {
    if ((int *)*piVar2 != (int *)0x0) {
      (**(code **)(*(int *)*piVar2 + 4))(param_2);
    }
    piVar2 = piVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}
