/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 56700233A03DA83B737AB4C66C0758168313CF3C7C51A05F2E059974711D09B1
 * Entry: 0x002b5530, Ghidra index: 9794, label: FUN_002b5530
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002b5530(undefined4 param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EDI;
  
  uVar2 = (uint)*(ushort *)(unaff_EDI + 0xd2);
  while (uVar2 = uVar2 - 1, -1 < (int)uVar2) {
    puVar1 = *(undefined4 **)(*(int *)(unaff_EDI + 0xd4) + uVar2 * 4);
    if ((*(byte *)(puVar1 + 1) & 1) != 0) {
      (**(code **)*puVar1)(param_1);
    }
  }
  return;
}
