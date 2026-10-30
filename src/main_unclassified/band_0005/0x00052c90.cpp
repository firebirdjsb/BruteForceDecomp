/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7C722A7C22D357E209576DAAA96229B3BA997347E8CF2F69338A39AE91F6858D
 * Entry: 0x00052c90, Ghidra index: 755, label: FUN_00052c90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern undefined4 FUN_00236670(char param_1,int *param_2,int *param_3);

void FUN_00052c90(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  switch(*(undefined4 *)(param_1[3] + 4)) {
  case 2:
  case 0x1a:
  case 0x1f:
    if ((param_1[0x1b] != 0) && (param_1[0x1b] != -1)) {
      /* Original tail JMP forwards flag=1 and both output addresses;
       * guest ECX is loaded from [EDI+0x6c] (helper ABI unverified). */
      FUN_00236670(1,param_2,param_3);
      return;
    }
    break;
  case 3:
    if ((param_1[0x1b] != 0) && (param_1[0x1b] != -1)) {
      FUN_00236670(1,param_2,param_3);
    }
    *param_2 = 0x3f000000;
    iVar3 = (**(code **)(*param_1 + 0x40))();
    uVar1 = *(undefined4 *)(iVar3 + 0x2c);
    uVar2 = *(undefined4 *)(iVar3 + 0x28);
    *param_3 = *(undefined4 *)(iVar3 + 0x24);
    param_3[1] = uVar2;
    param_3[2] = uVar1;
  }
  return;
}
