/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F686BB06E09AEFD07F31F759EEE6ABA7946714C25EF93B9FDBB8D650F928521D
 * Entry: 0x00213f40, Ghidra index: 7451, label: FUN_00213f40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00213f40(undefined4 param_1)

{
  int iVar1;
  char cVar2;
  undefined4 *unaff_EBX;
  int *piVar3;
  int *piVar4;
  
  if ((undefined4 *)unaff_EBX[3] == (undefined4 *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = *(int **)unaff_EBX[3];
  }
  if (piVar3 != (int *)unaff_EBX[3]) {
    do {
      cVar2 = FUN_00217430(piVar3[2],*unaff_EBX,param_1);
      if (cVar2 == '\0') {
        iVar1 = piVar3[2];
        if (iVar1 != 0) {
          FUN_00213810();
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00237ec0(iVar1);
        }
        piVar4 = (int *)*piVar3;
        if (piVar3 != (int *)unaff_EBX[3]) {
          *(int **)piVar3[1] = piVar4;
          *(int *)(*piVar3 + 4) = piVar3[1];
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00237ec0(piVar3);
        }
      }
      else {
        piVar4 = (int *)*piVar3;
      }
      piVar3 = piVar4;
    } while (piVar4 != (int *)unaff_EBX[3]);
  }
  return unaff_EBX[4];
}
