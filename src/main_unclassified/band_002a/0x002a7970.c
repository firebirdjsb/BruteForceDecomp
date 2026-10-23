/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B596D0BA38A3BDD915D66B9FA8E7E246834046F43B9BCEF434A5668A5E07447A
 * Entry: 0x002a7970, Ghidra index: 9598, label: FUN_002a7970
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_002a7970(undefined4 param_1,undefined4 *param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 *unaff_EBX;
  int *unaff_ESI;
  
  piVar1 = (int *)(**(code **)(*unaff_ESI + 0x34))();
  piVar2 = (int *)(**(code **)(*unaff_ESI + 0x38))();
  if (piVar1 == (int *)0x0) {
    *unaff_EBX = piVar2;
  }
  else {
    (**(code **)(*piVar1 + 0x58))(piVar1,piVar2);
  }
  if (piVar2 == (int *)0x0) {
    unaff_EBX[1] = piVar1;
  }
  else {
    (**(code **)(*piVar2 + 0x54))(piVar2,piVar1);
  }
  (**(code **)(*unaff_ESI + 0x54))();
  (**(code **)(*unaff_ESI + 0x58))();
  *param_2 = piVar2;
  return param_2;
}
