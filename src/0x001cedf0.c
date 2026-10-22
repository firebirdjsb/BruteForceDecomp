/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A4D466FFC16A82E896B4714A01751B1E9D8214FDF642D5ADC6329217C9ACCC82
 * Entry: 0x001cedf0, Ghidra index: 6079, label: FUN_001cedf0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001cedf0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *unaff_EBX;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  while (param_1 != param_2) {
    puVar1 = param_1 + 6;
    puVar3 = unaff_EBX;
    puVar4 = param_1;
    for (iVar2 = 6; param_1 = puVar1, iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  return;
}
