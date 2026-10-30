/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C2B12834CA596EB96EE8A207C6A4717546B5BE1B6BC926E1898CA1DAC3261CF5
 * Entry: 0x000c2270, Ghidra index: 2368, label: FUN_000c2270
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000c2270(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *piVar6;
  int *piVar7;
  
  puVar5 = param_1;
  if ((undefined4 *)param_1[0x1a] == (undefined4 *)0x0) {
    piVar7 = (int *)0x0;
  }
  else {
    piVar7 = *(int **)param_1[0x1a];
  }
  piVar1 = (int *)param_1[0x1a];
  do {
    while( true ) {
      piVar4 = piVar7;
      if (piVar4 == piVar1) {
        return;
      }
      puVar2 = (undefined4 *)piVar4[2];
      if (puVar2[0x11] == 0) break;
      piVar7 = (int *)*piVar4;
    }
    iVar3 = puVar2[10];
    if (iVar3 == 0) {
      (**(code **)*puVar2)(1);
    }
    else {
      piVar7 = *(int **)(iVar3 + 0x18);
      piVar6 = (int *)0x0;
      if (*(undefined4 **)(iVar3 + 0x18) != (undefined4 *)0x0) {
        piVar6 = (int *)**(undefined4 **)(iVar3 + 0x18);
      }
      if (piVar6 != piVar7) {
        do {
          if ((undefined4 *)piVar6[2] == puVar2) break;
          piVar6 = (int *)*piVar6;
        } while (piVar6 != piVar7);
        if (piVar6 != piVar7) {
          param_1 = puVar2;
          FUN_000e0860(&param_1);
          (**(code **)*puVar2)(1);
        }
      }
    }
    piVar7 = (int *)*piVar4;
    if (piVar4 != (int *)puVar5[0x1a]) {
      *(int **)piVar4[1] = (int *)*piVar4;
      *(int *)(*piVar4 + 4) = piVar4[1];
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(piVar4);
    }
  } while( true );
}
