/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 31DE2ECDA9E0195ADF8B483CF0FCB37484E2A633073BDE875A8E536B24387D18
 * Entry: 0x002df7b0, Ghidra index: 10339, label: FUN_002df7b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t switchD_002df805_caseD_3[];
void FUN_002df7b0(float param_1)

{
  float *pfVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  undefined4 uVar5;
  float *pfVar6;
  int unaff_EBX;
  
  uVar5 = param_1;
  pfVar6 = *(float **)(unaff_EBX + 8);
  pfVar1 = *(float **)(unaff_EBX + 0xc);
  pfVar4 = pfVar6;
  if (pfVar6 != pfVar1) {
    while (pfVar3 = pfVar4 + 4, pfVar3 != pfVar1) {
      param_1 = pfVar4[5] - pfVar6[1];
      fVar2 = *pfVar3 - *pfVar6;
      if (param_1 < 0.0001) {
        param_1 = 0.0001;
      }
      switch(uVar5) {
      case 0:
        pfVar6[3] = -NAN;
        break;
      case 1:
        pfVar4[6] = fVar2 / param_1;
        pfVar6[3] = fVar2 / param_1;
        break;
      case 3:
switchD_002df805_caseD_3:
        fVar2 = fVar2 / (param_1 * 0.5);
LAB_002df87a:
        pfVar6[3] = fVar2;
        goto LAB_002df87d;
      case 4:
        pfVar6[3] = 0.0;
LAB_002df87d:
        pfVar4[6] = 0.0;
        break;
      case 5:
        fVar2 = fVar2 / (param_1 * 0.5);
        if (*pfVar6 <= *pfVar3) goto LAB_002df87a;
        pfVar6[3] = 0.0;
        pfVar4[6] = fVar2;
        break;
      case 6:
        if (*pfVar3 <= *pfVar6) goto switchD_002df805_caseD_3;
      case 2:
        pfVar6[3] = 0.0;
        pfVar4[6] = fVar2 / (param_1 * 0.5);
      }
      pfVar6 = pfVar6 + 4;
      pfVar4 = pfVar3;
    }
  }
  *(undefined4 *)(unaff_EBX + 0x54) = 0;
  if (1 < *(int *)(unaff_EBX + 0x58)) {
    fVar2 = *(float *)(*(int *)(unaff_EBX + 0xc) + -0xc) - *(float *)(*(int *)(unaff_EBX + 8) + 4);
    *(float *)(unaff_EBX + 0x5c) = fVar2;
    *(float *)(unaff_EBX + 0x60) = 1.0 / fVar2;
  }
  return;
}
