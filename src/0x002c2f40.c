/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 14D64AD5EC04539B3C8AD22DE6F89140F08FC6FB7012CEC03A9C486A5281B2FE
 * Entry: 0x002c2f40, Ghidra index: 10045, label: FUN_002c2f40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002c2f40(int param_1,float param_2,float param_3)

{
  float fVar1;
  int iVar2;
  int unaff_EDI;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  
  iVar2 = *(int *)(unaff_EDI + 0x40);
  fVar3 = (float10)FUN_002c2750();
  fVar4 = (float10)param_2 - (float10)*(float *)(unaff_EDI + 0x58);
  fVar5 = (float10)param_3;
  if (fVar4 < (float10)0.0) {
    fVar5 = (float10)param_3 * (float10)20.0;
  }
  fVar1 = (float)((fVar5 * fVar4 + fVar3) * (float10)*(float *)(iVar2 + 0x60));
  if (0.0 < fVar1) {
    *(float *)(unaff_EDI + 0x54) = fVar1 * *(float *)(param_1 + 4);
    FUN_002c2800(fVar1);
    return;
  }
  *(undefined4 *)(unaff_EDI + 0x54) = 0;
  return;
}
