/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 69E528E6897483FF4FF84986EE2919EC042027E220378A57C5CE435A7304DC9B
 * Entry: 0x00218d90, Ghidra index: 7486, label: FUN_00218d90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00218d90(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined1 local_4 [4];
  
  if (param_2 != param_3) {
    piVar6 = param_4 + 3;
    piVar4 = param_2 + 3;
    puVar5 = param_2;
    do {
      *param_4 = *puVar5;
      piVar6[-2] = piVar4[-2];
      if (piVar6 + -1 != piVar4 + -1) {
        puVar1 = (undefined4 *)*piVar4;
        uVar3 = 0;
        if (puVar1 == (undefined4 *)0x0) {
          param_2 = (undefined4 *)0x0;
        }
        else {
          param_2 = (undefined4 *)*puVar1;
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
        FUN_00142c20(piVar6 + -1,uVar3,param_2,puVar1,param_4);
      }
      param_4 = param_4 + 5;
      puVar5 = puVar5 + 5;
      piVar6 = piVar6 + 5;
      piVar4 = piVar4 + 5;
    } while (puVar5 != param_3);
  }
  *param_1 = param_4;
  return;
}
