/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FE51CB17201F602D3B344AD699FAF47F62D1C76437ECD5D66751A40940FD789C
 * Entry: 0x00166810, Ghidra index: 4720, label: FUN_00166810
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00166810(int param_1)

{
  int *in_EAX;
  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  piVar6 = (int *)(param_1 + 4);
  iVar4 = (int)in_EAX - param_1;
  iVar5 = 0x13;
  do {
    piVar6[-1] = *in_EAX;
    if (*(int *)(iVar4 + (int)piVar6) == 0) {
      if (*piVar6 != 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(*piVar6);
      }
      *piVar6 = 0;
    }
    else if (*piVar6 == 0) {
      puVar1 = (undefined4 *)FUN_002ea01d(4);
      if (puVar1 == (undefined4 *)0x0) {
        puVar1 = (undefined4 *)0x0;
      }
      else {
        *puVar1 = 0;
      }
      *piVar6 = (int)puVar1;
    }
    puVar1 = *(undefined4 **)(iVar4 + (int)piVar6);
    if (puVar1 != (undefined4 *)0x0) {
      *(undefined4 *)*piVar6 = *puVar1;
    }
    uVar2 = 0;
    piVar3 = in_EAX + 2;
    do {
      piVar6[uVar2 + 1] = *piVar3;
      uVar2 = uVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (uVar2 < 4);
    in_EAX = in_EAX + 6;
    piVar6 = piVar6 + 6;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  return param_1;
}
