/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 619C33BC3E37A4BCE0BC8FA3D550FD00370838560C9538D44B63F060FE2F6799
 * Entry: 0x00218cd0, Ghidra index: 7484, label: FUN_00218cd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00218cd0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined1 local_4 [4];
  
  if (param_1 != param_2) {
    piVar5 = param_1 + 3;
    do {
      *param_1 = *param_3;
      piVar5[-2] = param_3[1];
      if (piVar5 + -1 != param_3 + 2) {
        puVar1 = (undefined4 *)param_3[3];
        if (puVar1 == (undefined4 *)0x0) {
          uVar4 = 0;
        }
        else {
          uVar4 = *puVar1;
        }
        puVar2 = (undefined4 *)*piVar5;
        if (puVar2 == (undefined4 *)0x0) {
          uVar3 = 0;
        }
        else {
          uVar3 = *puVar2;
        }
        FUN_001298b0(local_4,uVar3,puVar2);
        uVar3 = 0;
        if ((undefined4 *)*piVar5 != (undefined4 *)0x0) {
          uVar3 = *(undefined4 *)*piVar5;
        }
        FUN_00142c20(piVar5 + -1,uVar3,uVar4,puVar1,param_1);
      }
      param_1 = param_1 + 5;
      piVar5 = piVar5 + 5;
    } while (param_1 != param_2);
  }
  return;
}
