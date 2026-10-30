/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: ABC2A28130B150CCA78ABF3AC73E4DE5679240A0FACABC48BD21D609F824FDA7
 * Entry: 0x00116ea0, Ghidra index: 3589, label: FUN_00116ea0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00116ea0(void)

{
  int iVar1;
  int in_ECX;
  
  if (((((0.0 <= *(float *)(in_ECX + 0x574)) &&
        (iVar1 = *(int *)(*(int *)(in_ECX + 0xc) + 0x2c0), iVar1 != 0)) ||
       ((0.0 < *(float *)(in_ECX + 0x578) &&
        (iVar1 = *(int *)(*(int *)(in_ECX + 0xc) + 0x2c4), iVar1 != 0)))) ||
      (iVar1 = *(int *)(*(int *)(in_ECX + 0xc) + 700), iVar1 != 0)) &&
     (((*(int *)(in_ECX + 0x1fc) != iVar1 || (*(int *)(in_ECX + 0x21c) == 0)) &&
      ((*(byte *)(in_ECX + 0x748) & 8) == 0)))) {
    *(int *)(in_ECX + 0x200) = iVar1;
    *(undefined4 *)(in_ECX + 0x208) = 0x3f800000;
    *(undefined4 *)(in_ECX + 0x20c) = 0;
    *(undefined1 *)(in_ECX + 0x205) = 0;
    *(undefined1 *)(in_ECX + 0x204) = 0;
    *(byte *)(in_ECX + 0x260) = *(byte *)(in_ECX + 0x260) | 1;
  }
  return;
}
