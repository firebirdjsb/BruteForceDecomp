/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 19C9ACF3B2C8784BEFCC0DAA15BAB9BEFF0D77FA80E5DA10E33B1B3D88E16E5C
 * Entry: 0x000dfe90, Ghidra index: 2737, label: FUN_000dfe90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000dfe90(int *param_1)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  int in_EAX;
  int iVar4;
  char in_DL;
  
  piVar3 = param_1;
  if (param_1 != (int *)0x0) {
    sVar1 = (short)param_1[9];
    if (sVar1 != -1) {
      if (in_DL == '\0') {
        *(short *)(param_1 + 9) = sVar1 + 1;
      }
      else {
        *(undefined2 *)(param_1 + 9) = 0xffff;
      }
    }
    if (sVar1 == 0) {
      FUN_000e0860(&param_1);
      (**(code **)(*piVar3 + 0xa0))();
      iVar2 = *(int *)(in_EAX + 0x34);
      iVar4 = FUN_000ff730(in_EAX + 0x30,iVar2,*(undefined4 *)(iVar2 + 4),&param_1);
      FUN_000b2a50();
      *(int *)(iVar2 + 4) = iVar4;
      **(int **)(iVar4 + 4) = iVar4;
    }
  }
  return;
}
