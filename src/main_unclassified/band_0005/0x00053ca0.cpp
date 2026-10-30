/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7C9FE9337E3CA9D2F5A9F5D3823DFD888D6BA233DD5E89A61402869AD2FBD3A3
 * Entry: 0x00053ca0, Ghidra index: 777, label: FUN_00053ca0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00053ca0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *in_EAX;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (param_1 == param_2) {
    *in_EAX = param_3;
    return;
  }
  do {
    uVar1 = param_2[-1];
    puVar3 = param_2 + -3;
    uVar2 = param_2[-2];
    puVar4 = param_3 + -3;
    *puVar4 = *puVar3;
    param_3[-2] = uVar2;
    param_3[-1] = uVar1;
    param_2 = puVar3;
    param_3 = puVar4;
  } while (puVar3 != param_1);
  *in_EAX = puVar4;
  return;
}
