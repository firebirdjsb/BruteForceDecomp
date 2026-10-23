/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D4D5D67395F93F9EF73606C58304A524B11C3850258FB65637C635B2B2FCFF60
 * Entry: 0x00132c50, Ghidra index: 3863, label: FUN_00132c50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00132c50(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  int *piVar4;
  
  if (param_1 != param_2) {
    piVar4 = (int *)(param_1 + 0x38);
    do {
      iVar1 = *piVar4;
      if (iVar1 != 0) {
        iVar2 = piVar4[1];
        uVar3 = FUN_0024a840(&param_1,&param_1);
        FUN_00050b40(iVar1,iVar2,piVar4 + -1,uVar3);
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(*piVar4);
      }
      *piVar4 = 0;
      piVar4[1] = 0;
      piVar4[2] = 0;
      iVar1 = piVar4[-4];
      if (iVar1 != 0) {
        iVar2 = piVar4[-3];
        uVar3 = FUN_0024a840(&param_1,&param_1);
        FUN_00050b40(iVar1,iVar2,piVar4 + -5,uVar3);
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(piVar4[-4]);
      }
      piVar4[-4] = 0;
      piVar4[-3] = 0;
      piVar4[-2] = 0;
      iVar1 = piVar4[-9];
      if (iVar1 != 0) {
        iVar2 = piVar4[-8];
        uVar3 = FUN_0024a840(&param_1,&param_1);
        FUN_00050b40(iVar1,iVar2,piVar4 + -10,uVar3);
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(piVar4[-9]);
      }
      param_1 = param_1 + 0x44;
      piVar4[-9] = 0;
      piVar4[-8] = 0;
      piVar4[-7] = 0;
      piVar4 = piVar4 + 0x11;
    } while (param_1 != param_2);
  }
  return;
}
