/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7BEE77FBD790C5DF18C22D79E0DA493FB674B766DD02B701BCD42A14596F6361
 * Entry: 0x00345f58, Ghidra index: 12827, label: FUN_00345f58
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00345f58(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = -0x7ff8d889;
  if (*(int *)(param_1 + 0x40) < 0) {
    iVar4 = *(int *)(param_1 + 0x40);
  }
  FUN_00345e88(param_1,*(undefined4 *)(param_1 + 0x20),iVar4);
  FUN_00345e88(param_1,*(undefined4 *)(param_1 + 0x30),iVar4);
  FUN_003455c1(param_1);
  piVar1 = (int *)(param_1 + 0x34);
  while ((int *)*piVar1 != piVar1) {
    piVar2 = (int *)*piVar1;
    iVar4 = *piVar2;
    piVar3 = (int *)piVar2[1];
    *piVar3 = iVar4;
    *(int **)(iVar4 + 4) = piVar3;
    FUN_003455a6(piVar2 + -5);
  }
  *(undefined4 *)(param_1 + 0x3c) = 0;
  if (*(int *)(param_1 + 0x4c) != 0) {
    FUN_00347b2c(*(int *)(param_1 + 0x4c));
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  return;
}
