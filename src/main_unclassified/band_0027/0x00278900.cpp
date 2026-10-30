/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B872A01E3F418D059DA21F4876ED881B93ED69FEFE9ACD971D2AE2E348C7C8A1
 * Entry: 0x00278900, Ghidra index: 8921, label: FUN_00278900
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t switchD_00278956_caseD_3[];
void FUN_00278900(void)

{
  float *pfVar1;
  float fVar2;
  float *pfVar3;
  int in_EAX;
  float *pfVar4;
  undefined4 unaff_EBX;
  float local_8;
  
  pfVar4 = *(float **)(in_EAX + 4);
  pfVar1 = *(float **)(in_EAX + 8);
  pfVar3 = pfVar4;
  if (pfVar4 != pfVar1) {
    while (pfVar3 = pfVar3 + 4, pfVar3 != pfVar1) {
      local_8 = pfVar3[1] - pfVar4[1];
      fVar2 = *pfVar3 - *pfVar4;
      if (local_8 < 0.0001) {
        local_8 = 0.0001;
      }
      switch(unaff_EBX) {
      case 0:
        pfVar4[3] = -NAN;
        break;
      case 1:
        pfVar3[2] = fVar2 / local_8;
        pfVar4[3] = fVar2 / local_8;
        break;
      case 3:
switchD_00278956_caseD_3:
        fVar2 = fVar2 / (local_8 * 0.5);
LAB_002789cb:
        pfVar4[3] = fVar2;
        goto LAB_002789ce;
      case 4:
        pfVar4[3] = 0.0;
LAB_002789ce:
        pfVar3[2] = 0.0;
        break;
      case 5:
        fVar2 = fVar2 / (local_8 * 0.5);
        if (*pfVar4 <= *pfVar3) goto LAB_002789cb;
        pfVar4[3] = 0.0;
        pfVar3[2] = fVar2;
        break;
      case 6:
        if (*pfVar3 <= *pfVar4) goto switchD_00278956_caseD_3;
      case 2:
        pfVar4[3] = 0.0;
        pfVar3[2] = fVar2 / (local_8 * 0.5);
      }
      pfVar4 = pfVar4 + 4;
    }
  }
  return;
}
