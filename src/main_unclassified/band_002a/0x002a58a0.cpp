/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 63B2AD034D4C9D2A3EA70E4C2CAB52DDF84C287539A67A76A9A0CAB7728E6DBA
 * Entry: 0x002a58a0, Ghidra index: 9571, label: FUN_002a58a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002a58a0(void)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  int *unaff_ESI;
  
  iVar1 = (**(code **)(*unaff_ESI + 0x34))();
  if (iVar1 != 0) {
    piVar2 = (int *)(**(code **)(*unaff_ESI + 0x34))();
    iVar1 = *piVar2;
    uVar3 = (**(code **)(*unaff_ESI + 0x38))();
    (**(code **)(iVar1 + 0x58))(piVar2,uVar3);
  }
  iVar1 = (**(code **)(*unaff_ESI + 0x38))();
  if (iVar1 != 0) {
    piVar2 = (int *)(**(code **)(*unaff_ESI + 0x38))();
    iVar1 = *piVar2;
    uVar3 = (**(code **)(*unaff_ESI + 0x34))();
    (**(code **)(iVar1 + 0x54))(piVar2,uVar3);
  }
  piVar2 = (int *)(**(code **)(*unaff_ESI + 0x2c))();
  if (piVar2 == (int *)0x0) {
    iVar1 = (**(code **)(*unaff_ESI + 0x38))();
    *unaff_ESI = iVar1;
  }
  else {
    piVar4 = (int *)(**(code **)(*piVar2 + 0x30))(piVar2);
    if (piVar4 == unaff_ESI) {
      iVar1 = *piVar2;
      uVar3 = (**(code **)(*unaff_ESI + 0x38))();
      (**(code **)(iVar1 + 0x50))(piVar2,uVar3);
    }
  }
  (**(code **)(*unaff_ESI + 0x4c))();
  (**(code **)(*unaff_ESI + 0x58))();
  (**(code **)(*unaff_ESI + 0x54))();
  return;
}
