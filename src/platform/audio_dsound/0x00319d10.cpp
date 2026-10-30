/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A3EDC49F23AFE68BCE53849C589FB55951D0EF2575E93567A69540E2EF9779BE
 * Entry: 0x00319d10, Ghidra index: 12250, label: FUN_00319d10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t _DAT_0032f750;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00319d10(int param_1,int param_2,float param_3,float param_4,float *param_5,float *param_6)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  
  param_3 = (_DAT_0032f750 / param_4) * param_3;
  if (param_1 < -9999) {
    *param_5 = 0.0;
    fVar1 = (float10)0;
  }
  else if (param_1 == 0) {
    if (param_2 != 0) {
LAB_00319d6d:
      fVar1 = (float10)FUN_00319a70(param_1);
      fVar2 = (float10)FUN_00319a70(param_2 * 2);
      fVar3 = (float10)fcos((float10)(param_3 + param_3));
      fVar4 = ((float10)1 - fVar3) * fVar2;
      fVar2 = (((float10)1.0 - fVar3 * fVar2) -
              SQRT((fVar4 + fVar4) - ((float10)1.0 - fVar3 * fVar3) * fVar2 * fVar2)) /
              ((float10)1 - fVar2);
      *param_5 = (float)fVar2;
      *param_6 = (float)(((float10)1 - fVar2) * (float10)(double)fVar1);
      return;
    }
    *param_5 = 0.0;
    fVar1 = (float10)1;
  }
  else {
    if (param_2 != 0) goto LAB_00319d6d;
    *param_5 = 0.0;
    fVar1 = (float10)FUN_00319a70(param_1);
  }
  *param_6 = (float)fVar1;
  return;
}
