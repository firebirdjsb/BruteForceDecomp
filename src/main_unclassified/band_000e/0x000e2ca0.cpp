/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 27C2936A77FE2D5C4440D2C20D5B470B002A8495AE43B2308DB3A32A11762A63
 * Entry: 0x000e2ca0, Ghidra index: 2802, label: FUN_000e2ca0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000e2ca0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined1 uVar3;
  int *piVar4;
  
  if (param_1 != param_2) {
    piVar4 = (int *)(param_1 + 0xc);
    do {
      if (*piVar4 != 0) {
        iVar1 = piVar4[1];
        uVar3 = FUN_0024a840(&param_2,&param_2);
        FUN_000e3c30(iVar1,piVar4 + -1,uVar3);
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(*piVar4);
      }
      *piVar4 = 0;
      piVar4[1] = 0;
      piVar4[2] = 0;
      piVar2 = (int *)piVar4[-2];
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))(piVar2);
        piVar4[-2] = 0;
      }
      param_1 = param_1 + 0x18;
      piVar4 = piVar4 + 6;
    } while (param_1 != param_2);
  }
  return;
}
