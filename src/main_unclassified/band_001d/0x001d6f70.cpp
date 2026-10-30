/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D1DC2D5876997010693394680989B57961270FFF4DDCFAA5BA5CE91B8151AC29
 * Entry: 0x001d6f70, Ghidra index: 6385, label: FUN_001d6f70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001d6f70(undefined4 *param_1,int param_2,int param_3,undefined4 *param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (param_2 == param_3) {
    *param_1 = param_4;
    return;
  }
  do {
    iVar3 = param_3 + -0x18;
    puVar2 = param_4 + -6;
    *puVar2 = *(undefined4 *)(param_3 + -0x18);
    piVar1 = (int *)param_4[-5];
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      param_4[-5] = 0;
    }
    piVar1 = *(int **)(param_3 + -0x14);
    param_4[-5] = piVar1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(piVar1);
    }
    FUN_001d4410();
    param_4 = puVar2;
    param_3 = iVar3;
  } while (iVar3 != param_2);
  *param_1 = puVar2;
  return;
}
