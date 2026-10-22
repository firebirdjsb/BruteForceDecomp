/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 93BB035CD928D5730A325DA5EB6DF96BE82DF01F39F16B5290B832DC7E7F4326
 * Entry: 0x0024e270, Ghidra index: 8301, label: FUN_0024e270
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0024e270(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  
  piVar4 = *(int **)(param_1 + 0x68);
  piVar3 = *(int **)(param_1 + 0x6c);
  if (piVar4 != piVar3) {
    do {
      if (*(int *)(*piVar4 + 0xc) == param_2) break;
      piVar4 = piVar4 + 1;
    } while (piVar4 != piVar3);
    if (piVar4 != piVar3) {
      piVar3 = *(int **)(param_1 + 0x88);
      if (piVar3 != *(int **)(param_1 + 0x8c)) {
        piVar6 = piVar3 + 1;
        do {
          if ((int *)*piVar3 == (int *)*piVar4) {
            (**(code **)(*(int *)*piVar3 + 0x10))(param_1 + 0x58);
            piVar1 = *(int **)(param_1 + 0x8c);
            if (piVar6 != piVar1) {
              piVar2 = piVar6;
              do {
                *(int *)(((int)piVar3 - (int)piVar6) + (int)piVar2) = *piVar2;
                piVar2 = piVar2 + 1;
              } while (piVar2 != piVar1);
            }
            *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + -4;
          }
          else {
            piVar3 = piVar3 + 1;
            piVar6 = piVar6 + 1;
          }
        } while (piVar3 != *(int **)(param_1 + 0x8c));
      }
      if ((undefined4 *)*piVar4 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar4)(1);
      }
      piVar6 = *(int **)(param_1 + 0x6c);
      piVar3 = piVar4 + 1;
      if (piVar3 != piVar6) {
        iVar5 = (int)piVar4 - (int)piVar3;
        do {
          *(int *)((int)piVar3 + iVar5) = *piVar3;
          piVar3 = piVar3 + 1;
        } while (piVar3 != piVar6);
      }
      *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + -4;
      return 0;
    }
  }
  return 0x80004005;
}
