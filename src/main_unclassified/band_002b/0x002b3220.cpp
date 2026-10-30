/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: ED2B2887B5D90756985FB5FDF73F5CC2BEBE27766B0AFC5238542080B2B009F2
 * Entry: 0x002b3220, Ghidra index: 9756, label: FUN_002b3220
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002b3220(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x20);
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 8);
    iVar3 = *(short *)(iVar2 + 0x18) + iVar2;
    FUN_002c16a0();
    iVar2 = iVar1;
    if ((*(uint *)(iVar3 + 0x14) & 0xc000) != 0x4000) {
      FUN_002c0c30(*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x10));
      FUN_002bfae0();
    }
  }
  return;
}
