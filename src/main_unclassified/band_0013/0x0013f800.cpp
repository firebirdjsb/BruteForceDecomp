/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EF2A453B528026D1BDBF718D6F14DA332ED73FA32E1B93ADDA5FF4415C85E09E
 * Entry: 0x0013f800, Ghidra index: 4062, label: FUN_0013f800
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0013f800(int param_1,undefined4 param_2,float param_3)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  float fVar4;
  
  if (*(undefined4 **)(param_1 + 0xc) == (undefined4 *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)**(undefined4 **)(param_1 + 0xc);
  }
  if (piVar2 != *(int **)(param_1 + 0xc)) {
    do {
      piVar3 = (int *)piVar2[2];
      cVar1 = (**(code **)(*piVar3 + 4))(param_3,param_2);
      if (cVar1 == '\0') {
        piVar3 = (int *)*piVar2;
      }
      else {
        (**(code **)*piVar3)(1);
        piVar3 = (int *)*piVar2;
        if (piVar2 != *(int **)(param_1 + 0xc)) {
          *(int **)piVar2[1] = piVar3;
          *(int *)(*piVar2 + 4) = piVar2[1];
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00237ec0(piVar2);
        }
      }
      piVar2 = piVar3;
    } while (piVar3 != *(int **)(param_1 + 0xc));
  }
  *(float *)(param_1 + 4) = *(float *)(param_1 + 4) - param_3;
  fVar4 = 0.0;
  if (0.0 <= *(float *)(param_1 + 4)) {
    fVar4 = *(float *)(param_1 + 4);
  }
  *(float *)(param_1 + 4) = fVar4;
  return;
}
