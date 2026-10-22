/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 971B6530CFD796EA91968ED43B633C094921C4DCF0E28A2D65E7AC0F1CC48E99
 * Entry: 0x00353be9, Ghidra index: 13099, label: FUN_00353be9
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00353be9(int param_1)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = (uint)(*(int *)(param_1 + 0xa0) - *(int *)(param_1 + 0x9c)) >> 1;
  uVar3 = *(int *)(param_1 + 0xbc) * 2;
  puVar1 = (uint *)(param_1 + 0xb8);
  *puVar1 = uVar4;
  if (uVar4 < uVar3) {
    *puVar1 = uVar3;
  }
  *(uint *)(param_1 + 0xb4) = *(int *)(param_1 + 0xbc) * 3 + *puVar1;
  FUN_00345541(0xffffffff,0x400);
  *(undefined1 *)(param_1 + 0x7f) = 0;
  piVar2 = *(int **)(param_1 + 0x34);
  FUN_00353621(param_1,-(uint)(piVar2 != (int *)(param_1 + 0x34)) & (uint)(piVar2 + -5),1);
  return;
}
