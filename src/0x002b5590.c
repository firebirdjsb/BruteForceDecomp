/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 58030298AD41699924A77EF8DB850F7708D045F819C893EC22C0F34D69321F26
 * Entry: 0x002b5590, Ghidra index: 9796, label: FUN_002b5590
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002b5590(undefined4 param_1)

{
  int *piVar1;
  uint uVar2;
  int unaff_EDI;
  
  uVar2 = (uint)*(ushort *)(unaff_EDI + 0xd2);
  while (uVar2 = uVar2 - 1, -1 < (int)uVar2) {
    piVar1 = *(int **)(*(int *)(unaff_EDI + 0xd4) + uVar2 * 4);
    if ((*(byte *)(piVar1 + 1) & 4) != 0) {
      (**(code **)(*piVar1 + 0xc))(param_1);
    }
  }
  return;
}
