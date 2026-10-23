/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4DE0F586D14CF57E07622A06ADCCBC2015C79ECD0D0CD964E44C681C677389B0
 * Entry: 0x0026add0, Ghidra index: 8756, label: FUN_0026add0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Removing unreachable block (ram,0x0026adfd) */

void FUN_0026add0(int *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int *piVar4;
  int *piVar5;
  int *piStack_c;
  int *local_8;
  float fStack_4;
  
  iVar2 = (int)param_1;
  piVar1 = (int *)((int)param_1 + 4);
  piVar5 = (int *)0x0;
  if (*piVar1 == 0) {
    return;
  }
  param_1 = (int *)0x1e2160b3;
  if (*(int *)(*piVar1 + 0x58) == 0) {
    param_1 = (int *)0x1e2160b3;
    cVar3 = FUN_00253570();
    if (cVar3 == '\0') {
      return;
    }
  }
  piVar1 = *(int **)(*(int *)(iVar2 + 4) + 0x58);
  local_8 = (int *)0x0;
  cVar3 = FUN_0026aaf0(iVar2,0,&local_8);
  if (cVar3 == '\0') goto LAB_0026aed3;
  param_1 = (int *)0x0;
  piVar4 = (int *)(**(code **)(*piVar1 + 0x28))(piVar1,*(undefined4 *)(iVar2 + 4));
  piStack_c = piVar4;
  if (piVar4 == (int *)0x0) {
    cVar3 = FUN_00280100(&piStack_c);
    piVar4 = piStack_c;
    if (cVar3 != '\0') goto LAB_0026ae70;
  }
  else {
    (**(code **)(*piVar4 + 4))(piVar4);
LAB_0026ae70:
    piStack_c = (int *)(*(float *)(iVar2 + 0x18) * 0.1);
    fStack_4 = *(float *)(iVar2 + 0x18) * 0.8;
    cVar3 = FUN_00234b30(iVar2,piVar4,local_8,piStack_c,fStack_4,piStack_c,0,&param_1);
    piVar5 = param_1;
    if (cVar3 != '\0') {
      (**(code **)(*piVar1 + 0x2c))(piVar1,*(undefined4 *)(iVar2 + 4),param_1);
    }
  }
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
  }
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 8))(piVar5);
  }
LAB_0026aed3:
  *(undefined4 *)(iVar2 + 0x1c) = 0;
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
  }
  return;
}
