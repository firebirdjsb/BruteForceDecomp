/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 29592C1D9EF528E0EAC68C5B5615325E3ABD9D75A8650CC88A10649A4607BD9C
 * Entry: 0x001d72d0, Ghidra index: 6393, label: FUN_001d72d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001d72d0(undefined4 *param_1,int param_2,int param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (param_2 == param_3) {
    *param_1 = *param_4;
    return;
  }
  do {
    iVar3 = param_3 + -0x44;
    puVar2 = param_4 + -0x11;
    *puVar2 = *(undefined4 *)(param_3 + -0x44);
    FUN_0003d730(param_4 + -0x10,param_3 + -0x40);
    param_4[-4] = *(undefined4 *)(param_3 + -0x10);
    param_4[-3] = *(undefined4 *)(param_3 + -0xc);
    param_4[-2] = *(undefined4 *)(param_3 + -8);
    if (*(int *)(param_3 + -4) == 0) {
      if (param_4[-1] != 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(param_4[-1]);
      }
      param_4[-1] = 0;
    }
    else if (param_4[-1] == 0) {
      puVar1 = (undefined4 *)FUN_002ea01d(4);
      if (puVar1 == (undefined4 *)0x0) {
        puVar1 = (undefined4 *)0x0;
      }
      else {
        *puVar1 = 0;
      }
      param_4[-1] = puVar1;
    }
    if (*(undefined4 **)(param_3 + -4) != (undefined4 *)0x0) {
      *(undefined4 *)param_4[-1] = **(undefined4 **)(param_3 + -4);
    }
    param_4 = puVar2;
    param_3 = iVar3;
  } while (iVar3 != param_2);
  *param_1 = puVar2;
  return;
}
