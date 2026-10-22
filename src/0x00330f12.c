/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 49CE552F79C134A2AC6C0A9219F38045AE88A2D14FE923CEDBE1F6E0ABCA3C74
 * Entry: 0x00330f12, Ghidra index: 12383, label: FUN_00330f12
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00330f12(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*(int *)(param_1 + 0x36c) != 0) {
    puVar1 = (undefined4 *)(param_1 + 0x370);
    do {
      FUN_0033ea20(*puVar1);
      uVar3 = uVar3 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0x36c));
  }
  *(undefined4 *)(param_1 + 0x36c) = 0;
  iVar2 = 0xc;
  puVar1 = (undefined4 *)(param_1 + 0x288);
  do {
    *puVar1 = 1;
    puVar1 = puVar1 + 5;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}
