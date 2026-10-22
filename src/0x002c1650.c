/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 697147F2FE612311AAF0C7421221A6CC3C2DCE2CF1D38E1846CACEC88BD0D46C
 * Entry: 0x002c1650, Ghidra index: 10032, label: FUN_002c1650
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002c1650(void)

{
  undefined4 uVar1;
  int *in_ECX;
  int iVar2;
  int iVar3;
  
  iVar3 = *in_ECX;
  iVar2 = (*(uint *)(iVar3 + 0x14) >> 8 & 3) * 0x1c;
  if (*(short *)(iVar2 + 0x32 + iVar3) != 5) {
    iVar2 = ((*(uint *)(iVar3 + 0x14) ^ 0x100) >> 8 & 3) * 0x1c;
  }
  iVar3 = iVar2 + 0x18 + iVar3;
  uVar1 = FUN_002c2530(in_ECX + 2);
  *(undefined4 *)(iVar3 + 0x14) = uVar1;
  *(undefined2 *)(iVar3 + 0x1a) = 2;
  return;
}
