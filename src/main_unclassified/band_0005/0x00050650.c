/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 06C0B9ABFAE8CA969AFCC0C6502F7CA2DA50437031BC4EFCACD344E614B647EE
 * Entry: 0x00050650, Ghidra index: 705, label: FUN_00050650
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00050650(undefined4 *param_1)

{
  int iVar1;
  undefined4 *unaff_EBX;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  *unaff_EBX = *param_1;
  unaff_EBX[1] = param_1[1];
  unaff_EBX[2] = param_1[2];
  puVar2 = param_1 + 3;
  puVar3 = unaff_EBX + 3;
  for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  unaff_EBX[0x17] = param_1[0x17];
  FUN_001cca00(unaff_EBX + 0x18);
  FUN_001bddb0(unaff_EBX + 0x1c);
  return;
}
