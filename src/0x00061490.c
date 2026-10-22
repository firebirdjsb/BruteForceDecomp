/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 016FBEB255B1EBFA4819677AB7CFBC265F2E14F8399DE327938A564DE5DD0AE0
 * Entry: 0x00061490, Ghidra index: 1024, label: FUN_00061490
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00061490(int *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int unaff_EBX;
  int *piVar4;
  
  iVar3 = param_2;
  FUN_002563b0(&param_2,param_2 + 4,*(undefined4 *)(unaff_EBX + 8),param_2,param_2);
  piVar1 = *(int **)(unaff_EBX + 8);
  for (piVar4 = piVar1 + -1; piVar4 != piVar1; piVar4 = piVar4 + 1) {
    piVar2 = (int *)*piVar4;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
      *piVar4 = 0;
    }
  }
  *(int *)(unaff_EBX + 8) = *(int *)(unaff_EBX + 8) + -4;
  *param_1 = iVar3;
  return;
}
