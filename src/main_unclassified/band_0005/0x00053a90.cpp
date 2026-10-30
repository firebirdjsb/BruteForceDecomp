/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 927A257709CFA7600CCEBB3F1A783E0FF788833C55465AAE26DC8190FD47B1DF
 * Entry: 0x00053a90, Ghidra index: 774, label: FUN_00053a90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00053a90(int param_1,int param_2,int param_3)

{
  int iVar1;
  int local_8;
  int iStack_4;
  
  iVar1 = param_2 - param_1;
  do {
    iVar1 = iVar1 / 0x14;
    if (iVar1 < 0x21) {
LAB_00053b6f:
      if (1 < iVar1) {
        FUN_00054000(param_1,param_2);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar1) {
        FUN_00053f60(param_1,param_2);
        FUN_00053fa0(param_1,param_2);
        return;
      }
      goto LAB_00053b6f;
    }
    FUN_00053dd0(&local_8,param_1,param_2);
    iVar1 = iStack_4;
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((local_8 - param_1) / 0x14 < (param_2 - iStack_4) / 0x14) {
      FUN_00053a90(param_1,local_8,param_3);
      param_1 = iVar1;
    }
    else {
      FUN_00053a90(iStack_4,param_2,param_3);
      param_2 = local_8;
    }
    iVar1 = param_2 - param_1;
  } while( true );
}
