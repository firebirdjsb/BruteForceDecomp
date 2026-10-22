/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E6A1F9C6D0E7D138868D9714809D7E53C9CE08B87EAA5831E2ECEBA9A2A79B94
 * Entry: 0x0008f420, Ghidra index: 1746, label: FUN_0008f420
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0008f420(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *unaff_EBX;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  while (param_1 != param_2) {
    puVar1 = param_1 + 10;
    puVar3 = unaff_EBX;
    puVar4 = param_1;
    for (iVar2 = 10; param_1 = puVar1, iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  return;
}
