/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 75B753C35A28BD46688DE1E67A1D9E06FF300298C41C064FB5B4145DBAB64469
 * Entry: 0x002b5560, Ghidra index: 9795, label: FUN_002b5560
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002b5560(undefined4 param_1)

{
  int *piVar1;
  uint uVar2;
  int unaff_EDI;
  
  uVar2 = (uint)*(ushort *)(unaff_EDI + 0xd2);
  while (uVar2 = uVar2 - 1, -1 < (int)uVar2) {
    piVar1 = *(int **)(*(int *)(unaff_EDI + 0xd4) + uVar2 * 4);
    if ((*(byte *)(piVar1 + 1) & 4) != 0) {
      (**(code **)(*piVar1 + 8))(param_1);
    }
  }
  return;
}
