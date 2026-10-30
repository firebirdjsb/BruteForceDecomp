/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AABCB7AF2629064C26415D96C80DB88941DF8F47CA63AA00E7776B4FA2DE4F2D
 * Entry: 0x00156050, Ghidra index: 4472, label: FUN_00156050
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_00156050(int *param_1,int param_2)

{
  float fVar1;
  char cVar2;
  int iVar3;
  float *pfVar4;
  float10 fVar5;
  float10 fVar6;
  float local_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float local_c;
  float fStack_8;
  float fStack_4;
  
  cVar2 = FUN_00022bc0(&local_1c);
  if (cVar2 == '\0') {
    iVar3 = (**(code **)(*param_1 + 0x40))();
    fStack_14 = *(float *)(iVar3 + 0x2c);
    fStack_10 = *(float *)(iVar3 + 0x28);
    local_c = *(float *)(iVar3 + 0x24);
    local_1c = 0.0;
    fStack_8 = fStack_10;
    fStack_4 = fStack_14;
  }
  pfVar4 = (float *)(**(code **)(*(int *)(param_2 + 0x48) + 0xc))();
  fStack_14 = 0.0;
  fStack_10 = (SQRT((*pfVar4 - local_c) * (*pfVar4 - local_c) +
                    (pfVar4[1] - fStack_8) * (pfVar4[1] - fStack_8) +
                    (pfVar4[2] - fStack_4) * (pfVar4[2] - fStack_4)) - local_1c) *
              (float)param_1[0x10];
  fStack_18 = 0.0;
  if (0.0 <= fStack_10) {
    fStack_18 = fStack_10;
  }
  fVar5 = (float10)FUN_0006a9f0();
  fStack_10 = *(float *)(param_1[2] + 0xc74);
  fStack_14 = (float)(fVar5 * (float10)fStack_18);
  fVar6 = (float10)(**(code **)(*param_1 + 0x78))();
  fVar5 = (float10)fStack_10;
  fStack_10 = *(float *)(param_1[2] + 0xc74);
  fStack_18 = (float)(fVar6 * fVar5);
  fVar5 = (float10)(**(code **)(*param_1 + 0x7c))();
  fVar1 = (float)(fVar5 * (float10)fStack_10);
  if (fVar1 <= fStack_14) {
    return (float10)0.0;
  }
  if ((fStack_14 < fStack_18 == (fStack_14 == fStack_18)) && (fStack_18 < fVar1)) {
    fStack_10 = 1.0 - (fStack_14 - fStack_18) / (fVar1 - fStack_18);
    fVar5 = (float10)(**(code **)(*param_1 + 0x80))();
    if (fVar5 != (float10)1.0) {
      fVar6 = (float10)(**(code **)(*param_1 + 0x80))();
      fVar5 = (float10)log2((float10)fStack_10);
      fVar6 = (float10)1.4426950408889634 * (float10)0.6931471805599453 * fVar5 * fVar6;
      fVar5 = ROUND(fVar6);
      fVar6 = (float10)f2xm1(fVar6 - fVar5);
      fVar5 = (float10)fscale((float10)1 + fVar6,fVar5);
      return fVar5;
    }
    return (float10)fStack_10;
  }
  return (float10)1.0;
}
