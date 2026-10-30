/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9B30C6A09BDD944A72CD47DB587C6C44C3891EFF225D687228D6E3800BB73BBA
 * Entry: 0x00256900, Ghidra index: 8444, label: FUN_00256900
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00256900(int *param_1)

{
  int iVar1;
  int *piVar2;
  int in_ECX;
  
  iVar1 = param_1[4];
  while (iVar1 != 0) {
    FUN_00256900(iVar1);
    iVar1 = param_1[4];
  }
  piVar2 = (int *)param_1[6];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0xc))(piVar2,0);
    piVar2 = (int *)param_1[6];
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
      param_1[6] = 0;
    }
  }
  piVar2 = (int *)param_1[7];
  if ((piVar2 != (int *)0x0) && (piVar2 != (int *)0x0)) {
    (**(code **)(*piVar2 + 8))(piVar2);
    param_1[7] = 0;
  }
  piVar2 = (int *)param_1[3];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  FUN_00256c70(in_ECX + 4);
  (**(code **)(*param_1 + 8))(param_1);
  return;
}
