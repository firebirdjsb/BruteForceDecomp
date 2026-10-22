/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1ADCD315E682483320695FAA63AC2416583F44B8DFE2C4AEEB49C53FA4E4BE12
 * Entry: 0x00287dc0, Ghidra index: 9097, label: FUN_00287dc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00287dc0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = param_2 - param_1 >> 2;
  if (1 < iVar2) {
    piVar3 = (int *)(param_2 + -4);
    if (iVar2 < 2) goto LAB_00287e10;
    do {
      piVar1 = (int *)*piVar3;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))(piVar1);
      }
      FUN_002883f0(param_1,piVar3,piVar3);
LAB_00287e10:
      piVar3 = piVar3 + -1;
    } while (1 < (4 - param_1) + (int)piVar3 >> 2);
  }
  return;
}
