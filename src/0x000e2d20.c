/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 99603E7D35CD025A3314BCD613C510976F955E42F6540D5FC08CFB139379CA30
 * Entry: 0x000e2d20, Ghidra index: 2803, label: FUN_000e2d20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000e2d20(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  int *piVar4;
  
  if (param_1 != param_2) {
    piVar4 = (int *)(param_1 + 0x128);
    do {
      iVar1 = *piVar4;
      if (iVar1 != 0) {
        uVar3 = FUN_0024a840(&param_1,&param_1);
        FUN_00050b40(iVar1,piVar4[1],piVar4 + -1,uVar3);
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
      param_1 = param_1 + 0x134;
      piVar4[-4] = 0;
      piVar4[-3] = 0;
      piVar4[-2] = 0;
      piVar4 = piVar4 + 0x4d;
    } while (param_1 != param_2);
  }
  return;
}
