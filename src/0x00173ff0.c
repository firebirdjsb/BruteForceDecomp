/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7F161E7311C10831058D5BBE53C9A2EFB4A933EFAAA6B713ADE1F1CB1E95F1DC
 * Entry: 0x00173ff0, Ghidra index: 4900, label: FUN_00173ff0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00173ff0(int param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int *in_ECX;
  int *piVar3;
  
  (**(code **)(*in_ECX + 4))();
  if (in_ECX == (int *)0x18) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = in_ECX + 5;
  }
  piVar1 = *(int **)(param_1 + 0x74);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x8c))(piVar1,piVar3,param_2);
  }
  uVar2 = (**(code **)(*in_ECX + 0x10))();
  piVar3 = *(int **)(param_1 + 0x74);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0x30))(piVar3,*param_2,uVar2);
  }
  return 1;
}
