/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B0752003DC44F8E64C021183D13EB838E0F3AA19BDB3F5AD6CA9EE1B1D91E3FA
 * Entry: 0x0014abc0, Ghidra index: 4303, label: FUN_0014abc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0014abc0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *unaff_ESI;
  
  piVar1 = (int *)(param_1 + 0xf0);
  (**(code **)(*unaff_ESI + 0x5c))();
  iVar3 = FUN_001463c0();
  if (((iVar3 != 1) && (iVar3 != 7)) && (unaff_ESI != *(int **)(param_1 + 0x1ac))) {
    iVar3 = (**(code **)(*unaff_ESI + 0x5c))();
    iVar3 = (**(code **)(**(int **)(iVar3 + 0x15c) + 0x34))();
    if (iVar3 != 0) {
      iVar2 = *piVar1;
      uVar4 = (**(code **)(*unaff_ESI + 0x5c))();
      (**(code **)(iVar2 + 0x28))(uVar4);
      (**(code **)(*piVar1 + 0x24))(iVar3);
      if (iVar3 < *(short *)((int)unaff_ESI + 0x1a)) {
        (**(code **)(*unaff_ESI + 0x24))(*(short *)((int)unaff_ESI + 0x1a) - iVar3);
        return (int)*(short *)(param_1 + 0x10a);
      }
      (**(code **)(*unaff_ESI + 0x24))(0);
      return (int)*(short *)(param_1 + 0x10a);
    }
  }
  iVar3 = *piVar1;
  uVar4 = (**(code **)(*unaff_ESI + 0x5c))();
  (**(code **)(iVar3 + 0x28))(uVar4);
  (**(code **)(*piVar1 + 0x24))(1);
  return (int)*(short *)(param_1 + 0x10a);
}
