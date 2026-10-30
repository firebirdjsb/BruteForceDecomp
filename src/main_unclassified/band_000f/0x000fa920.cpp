/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F166F4A59BCB4A12C352402B77D15535721E9B39B639C6CB6D70A632D364E061
 * Entry: 0x000fa920, Ghidra index: 3130, label: FUN_000fa920
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000fa920(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = FUN_000fa560();
  if (iVar2 != 0) {
    puVar1 = *(undefined4 **)(iVar2 + 4);
    if (puVar1 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = (undefined4 *)*puVar1;
    }
    for (; puVar3 != puVar1; puVar3 = (undefined4 *)*puVar3) {
      if ((int)puVar3[5] < 0) {
        func_0x000f9700(puVar3[2],puVar3[3],puVar3[4]);
      }
      else {
        FUN_000f9e10(*(undefined4 *)(*(int *)(puVar3[2] + 4) + 0xa8));
      }
    }
  }
  return;
}
