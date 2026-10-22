/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4924D8638617137A1BD88C116E501A1F59826BD27786DC54F206110AA6BF3CB1
 * Entry: 0x00218f50, Ghidra index: 7489, label: FUN_00218f50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00218f50(undefined4 *param_1,int param_2,int param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  undefined4 local_8;
  undefined1 local_4 [4];
  
  if (param_2 != param_3) {
    piVar4 = (int *)(param_3 + 0xc);
    piVar5 = param_4 + 3;
    do {
      puVar1 = (undefined4 *)(param_3 + -0x14);
      param_3 = param_3 + -0x14;
      param_4 = param_4 + -5;
      piVar6 = piVar5 + -5;
      *param_4 = *puVar1;
      piVar5[-7] = piVar4[-7];
      if (piVar5 + -6 != piVar4 + -6) {
        puVar1 = (undefined4 *)piVar4[-5];
        uVar3 = 0;
        if (puVar1 == (undefined4 *)0x0) {
          local_8 = 0;
        }
        else {
          local_8 = *puVar1;
        }
        puVar2 = (undefined4 *)*piVar6;
        if (puVar2 != (undefined4 *)0x0) {
          uVar3 = *puVar2;
        }
        FUN_001298b0(local_4,uVar3,puVar2);
        uVar3 = 0;
        if ((undefined4 *)*piVar6 != (undefined4 *)0x0) {
          uVar3 = *(undefined4 *)*piVar6;
        }
        FUN_00142c20(piVar5 + -6,uVar3,local_8,puVar1,param_4);
      }
      piVar4 = piVar4 + -5;
      piVar5 = piVar6;
    } while (param_3 != param_2);
    *param_1 = param_4;
    return;
  }
  *param_1 = param_4;
  return;
}
