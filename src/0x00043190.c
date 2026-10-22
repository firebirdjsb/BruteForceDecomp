/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0B64A57D20D4FA77457E062A06F7328D951B2FFB6D368643D039332788100B6A
 * Entry: 0x00043190, Ghidra index: 521, label: FUN_00043190
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00043190(undefined4 *param_1,int *param_2,undefined1 *param_3,undefined1 *param_4)

{
  int iVar1;
  int in_ECX;
  undefined1 uVar2;
  
  if ((in_ECX != 0) && (*(int *)(*(int *)(in_ECX + 0xc) + 4) == 0x18)) {
    if (((*(byte *)(in_ECX + 0x1bc) & 2) == 0) || ((*(byte *)(in_ECX + 0x1dc) & 2) == 0)) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
    *param_3 = uVar2;
    iVar1 = *(int *)(*(int *)(in_ECX + 0xc) + 0x164);
    if (iVar1 != 8) {
      if (iVar1 == 0xd) {
        *param_4 = 1;
      }
      if (*(int *)(in_ECX + 0x1d8) != 0) {
        *param_2 = *(int *)(in_ECX + 0x1d8) + 0x1d8;
        *param_1 = *(undefined4 *)(in_ECX + 0x1e4);
        return 1;
      }
    }
  }
  return 0;
}
