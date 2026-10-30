/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EA39BA049D44756D235344702984DB05983A82236260EC667CF2E89454E0C994
 * Entry: 0x001244d0, Ghidra index: 3684, label: FUN_001244d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001244d0(int param_1,float param_2)

{
  int iVar1;
  int extraout_EDX;
  float10 in_ST0;
  float10 fVar2;
  float10 fVar3;
  float10 extraout_ST1;
  float fVar4;
  
  if (*(float *)(param_1 + 0x7c8) == 0.0) {
    if ((((*(int **)(param_1 + 0x1fc) == (int *)0x0) ||
         (((iVar1 = **(int **)(param_1 + 0x1fc), iVar1 != 0x13 && (iVar1 != 0)) && (iVar1 != 0x2b)))
         ) && (*(int *)(param_1 + 0x1f8) != 6)) ||
       (60.0 <= *(float *)(*(int *)(param_1 + 0xc) + 600))) {
      *(undefined4 *)(param_1 + 2000) = *(undefined4 *)(*(int *)(param_1 + 0xc) + 600);
    }
    else {
      *(float *)(param_1 + 2000) = *(float *)(param_1 + 2000) - param_2 * 0.5;
      fVar4 = *(float *)(param_1 + 2000);
      if (*(float *)(param_1 + 2000) <= 0.0) {
        fVar4 = 0.0;
      }
      *(float *)(param_1 + 2000) = fVar4;
    }
    fVar4 = *(float *)(*(int *)(param_1 + 0xc) + 0x244) * param_2 * 6.2831855;
    if (*(float *)(param_1 + 0x780) < 3.1415927) {
      fVar4 = fVar4 + fVar4;
    }
    *(float *)(param_1 + 0x780) = fVar4 + *(float *)(param_1 + 0x780);
    fVar4 = *(float *)(param_1 + 0x780);
    while (9.424778 <= fVar4) {
      *(float *)(param_1 + 0x780) = *(float *)(param_1 + 0x780) - 6.2831855;
      fVar4 = *(float *)(param_1 + 0x780);
    }
    fVar2 = (float10)*(float *)(*(int *)(param_1 + 0xc) + 0x24c) * (float10)param_2 *
            (float10)6.2831855;
    if (*(float *)(param_1 + 0x784) < 3.1415927) {
      fVar2 = fVar2 + fVar2;
    }
    if ((*(float *)(param_1 + 0x784) < 7.853982) &&
       ((float10)7.853982 < fVar2 + (float10)*(float *)(param_1 + 0x784))) {
      fVar2 = in_ST0;
      fVar3 = (float10)FUN_00233b90();
      *(float *)(extraout_EDX + 0x788) =
           (float)((fVar3 - (float10)0.5) * extraout_ST1 + (float10)1.0);
    }
    *(float *)(param_1 + 0x784) = (float)(fVar2 + (float10)*(float *)(param_1 + 0x784));
    fVar4 = *(float *)(param_1 + 0x784);
    while (9.424778 <= fVar4) {
      *(float *)(param_1 + 0x784) = *(float *)(param_1 + 0x784) - 6.2831855;
      fVar4 = *(float *)(param_1 + 0x784);
    }
  }
  return;
}
