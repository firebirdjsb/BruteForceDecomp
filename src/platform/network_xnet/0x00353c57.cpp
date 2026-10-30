/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 302C458DC28A2C9317D0199CB027E3FACCD8A767C7A767F8359C32B831D72F49
 * Entry: 0x00353c57, Ghidra index: 13100, label: FUN_00353c57
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00353c57(int param_1,int param_2)

{
  uint uVar1;
  byte bVar2;
  undefined4 uVar3;
  int in_ECX;
  
  if (param_2 != *(int *)(param_1 + 0xc4)) {
    return;
  }
  *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + 0x20000;
  *(int *)(param_1 + 0xc4) = param_2 + 1;
  if ((*(byte *)(param_1 + 0xd) & 0x80) != 0) {
    KeSetEvent(param_1 + 0x10,1,0);
  }
  FUN_00345e88(param_1,*(undefined4 *)(param_1 + 0x20),0);
  bVar2 = *(byte *)(param_1 + 0x7c);
  if (bVar2 < 3) {
    return;
  }
  if (bVar2 < 5) {
    if ((*(byte *)(param_1 + 0xd) & 8) != 0) {
      KeSetEvent(param_1 + 0x10,1,0);
    }
    *(undefined1 *)(param_1 + 0x7c) = 9;
    return;
  }
  if (bVar2 == 5) {
    if (*(int **)(param_1 + 0x34) == (int *)(param_1 + 0x34)) {
      *(undefined1 *)(param_1 + 0x7c) = 7;
      return;
    }
  }
  else if (bVar2 != 6) {
    if (bVar2 != 8) {
      return;
    }
    goto LAB_00353cd2;
  }
  *(undefined1 *)(param_1 + 0x7c) = 8;
LAB_00353cd2:
  uVar1 = *(int *)(in_ECX + 0x1d8) + (uint)*(byte *)(in_ECX + 0x30) * 10;
  if ((*(uint *)(param_1 + 0x94) == 0) || (uVar1 < *(uint *)(param_1 + 0x94))) {
    uVar3 = FUN_0034c3bf(param_1 + 0x6c,uVar1 - *(int *)(in_ECX + 0x1d8));
    *(undefined4 *)(param_1 + 0x94) = uVar3;
  }
  return;
}
