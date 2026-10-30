/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 86BB4D0D6BBECB753EB95646C17299222655175536E2C81118C9E2DDB54D3E1B
 * Entry: 0x001d6e30, Ghidra index: 6381, label: FUN_001d6e30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001d6e30(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *in_EAX;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (param_1 == param_2) {
    *in_EAX = param_3;
    return;
  }
  do {
    param_2 = param_2 + -0x100;
    param_3 = param_3 + -0x100;
    puVar2 = param_2;
    puVar3 = param_3;
    for (iVar1 = 0x100; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  } while (param_2 != param_1);
  *in_EAX = param_3;
  return;
}
