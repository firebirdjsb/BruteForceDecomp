/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7C3D0ACD3DD358B4F0A970E710914C75FC7568697F5B7A1D15FB09C3E7FB50F3
 * Entry: 0x0023d6e0, Ghidra index: 7959, label: FUN_0023d6e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0023d6e0(float param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int unaff_EBX;
  int *piVar4;
  float10 fVar5;
  float fStack_4;
  
  FUN_0023d460(unaff_EBX);
  piVar1 = *(int **)(unaff_EBX + 0xc);
  piVar4 = *(int **)(unaff_EBX + 8);
  if (piVar4 == piVar1) {
    *(float *)(unaff_EBX + 0x3c) = param_1;
    return;
  }
  do {
    if (*(int *)*piVar4 == 0) {
      piVar2 = (int *)((int *)*piVar4)[1];
      if (*(float *)(*piVar2 + 4) < -100000.0) {
        fStack_4 = param_1 + *(float *)(unaff_EBX + 0x40);
        fVar5 = (float10)*(float *)(*(int *)(unaff_EBX + 0x20) + 0x3c);
      }
      else {
        piVar3 = (int *)piVar2[8];
        if (piVar3 == (int *)0x0) {
          fVar5 = (float10)0.0;
        }
        else {
          fVar5 = (float10)(**(code **)(*piVar3 + 0xc))(piVar3);
        }
        piVar3 = (int *)piVar2[8];
        fStack_4 = (float)(fVar5 + (float10)param_1);
        if (piVar3 == (int *)0x0) {
          fVar5 = (float10)0.0;
        }
        else {
          fVar5 = (float10)(**(code **)(*piVar3 + 0x10))(piVar3);
        }
      }
      if ((1e-06 < ABS((float)((float10)fStack_4 - fVar5))) &&
         (piVar2 = (int *)piVar2[8], piVar2 != (int *)0x0)) {
        (**(code **)(*piVar2 + 0x1c))(piVar2,(float)((float10)fStack_4 - fVar5));
      }
    }
    piVar4 = piVar4 + 1;
  } while (piVar4 != piVar1);
  *(float *)(unaff_EBX + 0x3c) = param_1;
  return;
}
